set_property SRC_FILE_INFO {cfile:/home/alfredo/Documentos/vicuna/demo/zybo7010.xdc rfile:../../../../../Documentos/vicuna/demo/zybo7010.xdc id:1} [current_design]
set_property src_info {type:XDC file:1 line:7 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K17   IOSTANDARD LVCMOS33 } [get_ports { sys_clk_pi }]; #IO_L12P_T1_MRCC_35 Sch=sysclk
set_property src_info {type:XDC file:1 line:12 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN G15   IOSTANDARD LVCMOS33 } [get_ports { sys_rst_ni }]; #IO_L19N_T3_VREF_35 Sch=sw[0]
set_property src_info {type:XDC file:1 line:15 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W16   IOSTANDARD LVCMOS33 } [get_ports { uart_tx_o }]; #IO_L24N_T3_AD15N_35 Sch=JA3_R_N
set_property src_info {type:XDC file:1 line:16 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V12   IOSTANDARD LVCMOS33 } [get_ports { uart_rx_i }]; #IO_L20N_T3_AD6N_35 Sch=JA4_R_N
set_property src_info {type:XDC file:1 line:19 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN M14   IOSTANDARD LVCMOS33 } [get_ports { led }]; #IO_L23P_T3_35 Sch=led[0]
set_property src_info {type:XDC file:1 line:42 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN P16   IOSTANDARD LVCMOS33 } [get_ports { sys_clk_ni  }]; #IO_L24N_T3_34 Sch=btn[1]
