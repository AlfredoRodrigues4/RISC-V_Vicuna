// Copyright TU Wien
// Licensed under the Solderpad Hardware License v2.1, see LICENSE.txt for details
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1


module demo_top #(
        parameter              RAM_FPATH      = "/home/alfredo/Documentos/vicuna/sw/test.vmem",
        parameter int unsigned RAM_SIZE       = 131072,
        parameter bit          DIFF_CLK       = 1'b0,
        parameter real         SYSCLK_PER     = 8.0,
        parameter int unsigned PLL_MUL        = 8,
        parameter int unsigned PLL_DIV        = 100,
        parameter int unsigned UART_BAUD_RATE = 115200
    )
    (
        input  logic sys_clk_pi,
        input  logic sys_clk_ni,
        input  logic sys_rst_ni,


        input  logic uart_rx_i,
        output logic uart_tx_o,
        output logic led

    );


    localparam logic [31:0] MEM_START = 32'h00000000;
    localparam logic [31:0] MEM_MASK  = RAM_SIZE-1;


    //logica para CLK
    logic sys_clk;
    generate
        if (DIFF_CLK) begin
            IBUFDS sysclkbuf (
                .I  ( sys_clk_pi ),
                .IB ( sys_clk_ni ),
                .O  ( sys_clk    )
            );
        end else begin
            assign sys_clk = sys_clk_pi;
        end
    endgenerate

    localparam int unsigned CLK_FREQ = (1_000_000_000.0 / SYSCLK_PER) * PLL_MUL / PLL_DIV;

    logic clk_raw, pll_lock, pll_fb;
    PLLE2_BASE #(
        .CLKIN1_PERIOD  ( SYSCLK_PER  ),
        .CLKFBOUT_MULT  ( PLL_MUL     ),
        .CLKOUT0_DIVIDE ( PLL_DIV     )
    ) pll_inst (
        .CLKIN1         ( sys_clk     ),
        .CLKOUT0        ( clk_raw     ),
        .CLKOUT1        (             ),
        .CLKOUT2        (             ),
        .CLKOUT3        (             ),
        .CLKOUT4        (             ),
        .CLKOUT5        (             ),
        .LOCKED         ( pll_lock    ),
        .PWRDWN         ( 1'b0        ),
        .RST            ( ~sys_rst_ni ),
        .CLKFBOUT       ( pll_fb      ),
        .CLKFBIN        ( pll_fb      )
    );
    logic clk;
    BUFG clkbuf (
        .I ( clk_raw ),
        .O ( clk     )
    );
    logic rst_n;
    assign rst_n = sys_rst_ni & pll_lock;

    logic        mem_req;
    logic [31:0] mem_addr;
    logic        mem_we;
    logic  [3:0] mem_be;
    logic [31:0] mem_wdata;
    logic        mem_rvalid;
    logic        mem_err;
    logic [31:0] mem_rdata;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mem_rvalid <= 1'b0;
        end else begin
            mem_rvalid <= mem_req;      //sinal mem_req é dado pelo lado do processador para indicar que quer uma instrução
        end
    end

    vproc_top #(
        .MEM_W        ( 32                          ),
        .VMEM_W       ( 32                          ),
        .VREG_TYPE    ( vproc_pkg::VREG_XLNX_RAM32M ),
        .MUL_TYPE     ( vproc_pkg::MUL_XLNX_DSP48E1 )
    ) vproc (
        .clk_i        ( clk                         ),
        .rst_ni       ( rst_n                       ),
        .mem_req_o    ( mem_req                     ),
        .mem_addr_o   ( mem_addr                    ),
        .mem_we_o     ( mem_we                      ),
        .mem_be_o     ( mem_be                      ),
        .mem_wdata_o  ( mem_wdata                   ),
        .mem_rvalid_i ( mem_rvalid                  ),
        .mem_err_i    ( mem_err                     ),
        .mem_rdata_i  ( mem_rdata                   ),
        .pend_vreg_wr_map_o (                       )
    );

    logic        sram_rvalid;
    logic [31:0] sram_rdata;
    logic        hwreg_rvalid;
    logic [31:0] hwreg_rdata;

    assign mem_err   = mem_rvalid & (~(sram_rvalid | hwreg_rvalid));
    assign mem_rdata = hwreg_rvalid ? hwreg_rdata : sram_rdata;

    ram32 #(
        .SIZE      ( RAM_SIZE / 4                                    ),
        .INIT_FILE ( RAM_FPATH                                       )
    ) u_ram (
        .clk_i     ( clk                                             ),
        .rst_ni    ( rst_n                                           ),
        .req_i     ( mem_req & ((mem_addr & ~MEM_MASK) == MEM_START) ),  //o que faz aqui é verificar se o endereço mem_addr está dentro da gama definida pelo MEM_SIZE
        //ex: se MEM_SIZE = 4Kb (4096) então MEM_MASK = 0XFFF (4095), ao inverter vai ficar 0XFFFFF000 que quando feito o and com o endereço pretendido tem de dar zero
        //desta maneira deixando apenas passar cujas instruções estão dentro da gama pretendida
        .we_i      ( mem_req & mem_we                                ),
        .be_i      ( mem_be                                          ),
        .addr_i    ( mem_addr                                        ),
        .wdata_i   ( mem_wdata                                       ),
        .rvalid_o  ( sram_rvalid                                     ),
        .rdata_o   ( sram_rdata                                      )  //instrução lida da memória
    );

    hwreg_iface #(
        .CLK_FREQ       ( CLK_FREQ                                ),
        .UART_BAUD_RATE ( UART_BAUD_RATE                          )
    ) hwregs (
        .clk_i          ( clk                                     ),
        .rst_ni         ( rst_n                                   ),
        .req_i          ( mem_req & (mem_addr[31:16] == 16'hFF00) ),
        .we_i           ( mem_we                                  ),
        .addr_i         ( mem_addr[15:0]                          ),
        .wdata_i        ( mem_wdata                               ),
        .rvalid_o       ( hwreg_rvalid                            ),
        .rdata_o        ( hwreg_rdata                             ),
        .rx_i           ( uart_rx_i                               ),
        .tx_o           ( uart_tx_o                               ),
        .led            ( led                                     )
    );

endmodule