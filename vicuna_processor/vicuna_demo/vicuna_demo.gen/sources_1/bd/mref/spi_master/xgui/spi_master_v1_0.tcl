# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "CLK_DIV" -parent ${Page_0}
  ipgui::add_param $IPINST -name "CPHA" -parent ${Page_0}
  ipgui::add_param $IPINST -name "CPOL" -parent ${Page_0}
  ipgui::add_param $IPINST -name "DATA_WIDTH" -parent ${Page_0}


}

proc update_PARAM_VALUE.CLK_DIV { PARAM_VALUE.CLK_DIV } {
	# Procedure called to update CLK_DIV when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.CLK_DIV { PARAM_VALUE.CLK_DIV } {
	# Procedure called to validate CLK_DIV
	return true
}

proc update_PARAM_VALUE.CPHA { PARAM_VALUE.CPHA } {
	# Procedure called to update CPHA when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.CPHA { PARAM_VALUE.CPHA } {
	# Procedure called to validate CPHA
	return true
}

proc update_PARAM_VALUE.CPOL { PARAM_VALUE.CPOL } {
	# Procedure called to update CPOL when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.CPOL { PARAM_VALUE.CPOL } {
	# Procedure called to validate CPOL
	return true
}

proc update_PARAM_VALUE.DATA_WIDTH { PARAM_VALUE.DATA_WIDTH } {
	# Procedure called to update DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.DATA_WIDTH { PARAM_VALUE.DATA_WIDTH } {
	# Procedure called to validate DATA_WIDTH
	return true
}


proc update_MODELPARAM_VALUE.CLK_DIV { MODELPARAM_VALUE.CLK_DIV PARAM_VALUE.CLK_DIV } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.CLK_DIV}] ${MODELPARAM_VALUE.CLK_DIV}
}

proc update_MODELPARAM_VALUE.DATA_WIDTH { MODELPARAM_VALUE.DATA_WIDTH PARAM_VALUE.DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.DATA_WIDTH}] ${MODELPARAM_VALUE.DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.CPHA { MODELPARAM_VALUE.CPHA PARAM_VALUE.CPHA } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.CPHA}] ${MODELPARAM_VALUE.CPHA}
}

proc update_MODELPARAM_VALUE.CPOL { MODELPARAM_VALUE.CPOL PARAM_VALUE.CPOL } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.CPOL}] ${MODELPARAM_VALUE.CPOL}
}

