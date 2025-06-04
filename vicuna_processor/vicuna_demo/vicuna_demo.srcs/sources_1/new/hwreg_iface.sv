`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/10/2025 10:31:59 AM
// Design Name: 
// Module Name: hwreg_iface
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module hwreg_iface #(
        parameter int unsigned CLK_FREQ       = 100_000_000,
        parameter int unsigned UART_BAUD_RATE = 115200
    )
    (
        input  logic          clk_i,
        input  logic          rst_ni,
        input  logic          req_i,
        input  logic          we_i,
        input  logic [15:0]   addr_i,
        input  logic [31:0]   wdata_i,
        output logic          rvalid_o,
        output logic [31:0]   rdata_o,

        // specific uart signal
        input  logic          rx_i,
        output logic          tx_o,
        // specific led signal
        output logic          led
    );

    //como o PC anda de 4 em 4 então também os registos vão andar assim, e por isso o valor dos registos é shiftado para se obter
    //o valor absoluto de cada registo
    localparam logic [13:0] ADDR_UART_DATA   = 16'h0000 >> 2;
    localparam logic [13:0] ADDR_UART_STATUS = 16'h0004 >> 2;
    localparam logic [13:0] ADDR_LED_DATA    = 16'h0008 >> 2;
    
    /////////////////   LED    ///////////////////////
    
    logic [31:0] rdata_led;
    
   led led_if(
        .clk_i      (clk_i       ),
        .rst_ni     (rst_ni      ),
        .req_i      (req_i),
        .we_i       (we_i),
        .addr_i     (addr_i),
        .wdata_i    (wdata_i),
        .rdata_led  (rdata_led),

        // specific led signal
        .led (led)
    ); 
    
    /////////////////   UART    ///////////////////////

    logic       uart_req;
    logic       uart_wbusy;
    logic       uart_rvalid;
    logic [7:0] uart_rdata;

    assign uart_req = req_i && addr_i[15:2] == ADDR_UART_DATA;


    uart_iface #(
        .CLK_FREQ       ( CLK_FREQ          ),
        .BAUD_RATE      ( UART_BAUD_RATE    )
    ) uart (
        .clk_i          ( clk_i             ),
        .rst_ni         ( rst_ni            ),
        .we_i           ( uart_req && we_i  ),
        .wdata_i        ( wdata_i[7:0]      ),
        .wbusy_o        ( uart_wbusy        ),
        .read_i         ( uart_req && !we_i ),
        .rvalid_o       ( uart_rvalid       ),
        .rdata_o        ( uart_rdata        ),

        .rx_i           ( rx_i              ),
        .tx_o           ( tx_o              )
    );

    logic [31:0] rdata;
    logic        rvalid;

    always_ff @(posedge clk_i) begin
        if (addr_i[15:2] == ADDR_UART_DATA) begin 
            rdata <= uart_rvalid ? uart_rdata : 32'hFFFFFFFF;
        end
        else if (addr_i[15:2] == ADDR_UART_STATUS) begin 
            rdata <= { 30'h0, uart_rvalid, uart_wbusy };
        end
        else if (addr_i[15:2] == ADDR_LED_DATA) begin
            rdata <= { rdata_led };
        end 
        else begin
            rdata <= 0;
        end

        rvalid <= req_i;
    end

    assign rdata_o  = rdata;
    assign rvalid_o = rvalid;
endmodule


module uart_iface #(
        parameter int unsigned CLK_FREQ  = 100_000_000,
        parameter int unsigned BAUD_RATE = 115200
    )
    (
        input  logic          clk_i,
        input  logic          rst_ni,

        input  logic          we_i,
        input  logic [7:0]    wdata_i,
        output logic          wbusy_o,
        input  logic          read_i,
        output logic          rvalid_o,
        output logic [7:0]    rdata_o,

        input  logic          rx_i,
        output logic          tx_o
    );

    localparam UART_RX_QUEUE_LEN = 8;

    logic tx_ready;
    uart_tx #(
        .DATA_WIDTH ( 8         ),
        .BAUD_RATE  ( BAUD_RATE ),
        .CLK_FREQ   ( CLK_FREQ  )
    ) tx_inst (
        .clk_i      ( clk_i     ),
        .rst_ni     ( rst_ni    ),
        .valid_i    ( we_i      ),
        .data_i     ( wdata_i   ),
        .ready_o    ( tx_ready  ),
        .tx_o       ( tx_o      )
    );
    assign wbusy_o = ~tx_ready;

    logic       rx_valid;
    logic [7:0] rx_data;
    uart_rx #(
        .DATA_WIDTH ( 8         ),
        .BAUD_RATE  ( BAUD_RATE ),
        .CLK_FREQ   ( CLK_FREQ  )
    ) rx_inst (
        .clk_i      ( clk_i     ),
        .rst_ni     ( rst_ni    ),
        .rx_i       ( rx_i      ),
        .ready_i    ( 1'b1      ),
        .valid_o    ( rx_valid  ),
        .data_o     ( rx_data   )
    );

    logic       rvalid [UART_RX_QUEUE_LEN-1:0] = '{default: 0};
    logic [7:0] rdata  [UART_RX_QUEUE_LEN-1:0] = '{default: 0};

    always_ff @(posedge clk_i) begin
        if (rvalid[0] == 0) begin
            for (int i = 0; i < UART_RX_QUEUE_LEN-1; i++) begin
                rvalid[i] <= rvalid[i+1];
                rdata [i] <= rdata [i+1];
            end
            rvalid[UART_RX_QUEUE_LEN-1] <= 0;
        end

        if (rx_valid) begin
            rvalid[UART_RX_QUEUE_LEN-1] <= 1;
            rdata [UART_RX_QUEUE_LEN-1] <= rx_data;
        end
        if (rvalid[0] && read_i)
            rvalid[0] <= 0;
    end

    assign rvalid_o = rvalid[0];
    assign rdata_o = rdata[0];
endmodule
