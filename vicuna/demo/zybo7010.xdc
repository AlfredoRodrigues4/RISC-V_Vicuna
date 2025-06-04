## This file is a general .xdc for the Zybo Z7 Rev. B
## It is compatible with the Zybo Z7-20 and Zybo Z7-10
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project
## Clock signals
set_property -dict { PACKAGE_PIN K17   IOSTANDARD LVCMOS33 } [get_ports { sys_clk_pi }]; #IO_L12P_T1_MRCC_35 Sch=sysclk
create_clock -add -name sys_clk_pin -period 8.00 -waveform {0 4} [get_ports { sys_clk_pi }];
set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_pi]

##Switch
set_property -dict { PACKAGE_PIN G15   IOSTANDARD LVCMOS33 } [get_ports { sys_rst_ni }]; #IO_L19N_T3_VREF_35 Sch=sw[0]

## UART
set_property -dict { PACKAGE_PIN W16   IOSTANDARD LVCMOS33 } [get_ports { uart_tx_o }]; #IO_L24N_T3_AD15N_35 Sch=JA3_R_N            
set_property -dict { PACKAGE_PIN V12   IOSTANDARD LVCMOS33 } [get_ports { uart_rx_i }]; #IO_L20N_T3_AD6N_35 Sch=JA4_R_N 

## LEDS
set_property -dict { PACKAGE_PIN M14   IOSTANDARD LVCMOS33 } [get_ports { led }]; #IO_L23P_T3_35 Sch=led[0]

#set_output_delay -clock sys_clk_pin -max 2.5 [get_ports {led}]
#set_output_delay -clock sys_clk_pin -min 1.5 [get_ports {led}]

#set_input_delay -clock sys_clk_pin -max 3.0 [get_ports {led}]
#set_input_delay -clock sys_clk_pin -min 1.0 [get_ports {led}]

#set_output_delay -clock sys_clk_pin -max 2.5 [get_ports {led}]
#set_output_delay -clock sys_clk_pin -min 0.5 [get_ports {led}]

## PMOD test
#set_property -dict { PACKAGE_PIN J15   IOSTANDARD LVCMOS33 } [get_ports { pmod_test }]; #IO_25_35 Sch=je[3]    

##Switches
#set_property -dict { PACKAGE_PIN G15   IOSTANDARD LVCMOS33 } [get_ports { sw[0] }]; #IO_L19N_T3_VREF_35 Sch=sw[0]
#set_property -dict { PACKAGE_PIN P15   IOSTANDARD LVCMOS33 } [get_ports { sw[1] }]; #IO_L24P_T3_34 Sch=sw[1]
#set_property -dict { PACKAGE_PIN W13   IOSTANDARD LVCMOS33 } [get_ports { sw[2] }]; #IO_L4N_T0_34 Sch=sw[2]
#set_property -dict { PACKAGE_PIN T16   IOSTANDARD LVCMOS33 } [get_ports { sw[3] }]; #IO_L9P_T1_DQS_34 Sch=sw[3]


##Buttons
#set_property -dict { PACKAGE_PIN K18   IOSTANDARD LVCMOS33 } [get_ports { btn[0] }]; #IO_L12N_T1_MRCC_35 Sch=btn[0]
set_property -dict { PACKAGE_PIN P16   IOSTANDARD LVCMOS33 } [get_ports { sys_clk_ni  }]; #IO_L24N_T3_34 Sch=btn[1]
