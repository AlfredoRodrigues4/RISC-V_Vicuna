#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
# Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/media/alfredo/5b31c87c-a2a0-4727-9d33-45f0f629570d/xilinx_tools/Vitis/2024.2/bin:/media/alfredo/5b31c87c-a2a0-4727-9d33-45f0f629570d/xilinx_tools/Vivado/2024.2/ids_lite/ISE/bin/lin64:/media/alfredo/5b31c87c-a2a0-4727-9d33-45f0f629570d/xilinx_tools/Vivado/2024.2/bin
else
  PATH=/media/alfredo/5b31c87c-a2a0-4727-9d33-45f0f629570d/xilinx_tools/Vitis/2024.2/bin:/media/alfredo/5b31c87c-a2a0-4727-9d33-45f0f629570d/xilinx_tools/Vivado/2024.2/ids_lite/ISE/bin/lin64:/media/alfredo/5b31c87c-a2a0-4727-9d33-45f0f629570d/xilinx_tools/Vivado/2024.2/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.runs/synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log demo_top.vds -m64 -product Vivado -mode batch -messageDb vivado.pb -notrace -source demo_top.tcl
