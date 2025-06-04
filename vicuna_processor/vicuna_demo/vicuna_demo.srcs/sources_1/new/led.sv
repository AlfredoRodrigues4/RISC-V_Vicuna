`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/14/2025 09:40:41 PM
// Design Name: 
// Module Name: led
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


module led(
        input  logic          clk_i,
        input  logic          rst_ni,
        input  logic          req_i,
        input  logic          we_i,
        input  logic [15:0]   addr_i,
        input  logic [31:0]   wdata_i,
        output logic [31:0]   rdata_led,

        // specific led signal
        output logic          led
    );
    
    localparam logic [13:0] ADDR_LED_DATA    = 16'h0008 >> 2;
    
    /////////////////   LED    ///////////////////////
    
    logic led_reg;
    
    
    logic led_sync1, led_sync2;
    
    always_ff @(posedge clk_i) begin
        if (!rst_ni)
            led_sync1 <= 1'b0;
        else
            led_sync1 <= led_reg;
    end
    
    always_ff @(posedge clk_i) begin
        if (!rst_ni)
            led_sync2 <= 1'b0;
        else
            led_sync2 <= led_sync1;
    end
    
    assign led = led_reg;

always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) 
        led_reg <= 1'b0;  
    else if (req_i && (addr_i[15:2] == ADDR_LED_DATA) && we_i)
        led_reg <= wdata_i[0];  
end

    always_ff @(posedge clk_i) begin
        rdata_led <= { 31'h0, led_reg};
    end
   
    
endmodule
