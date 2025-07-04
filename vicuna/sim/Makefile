# Copyright TU Wien
# Licensed under the Solderpad Hardware License v2.1, see LICENSE.txt for details
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1


# Simulations Makefile
# requires GNU make; avoid spaces in directory names!

SHELL := /bin/bash

# get the absolute path of the simulation directory (must not contain spaces!)
SIM_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

# Vivado TCL script
VIVADO_TCL := $(addprefix $(SIM_DIR),sim_vivado.tcl)

# Questa TCL script and variable
QUESTA_TCL := $(addprefix $(SIM_DIR),sim_questa.tcl)
VSIM       ?= vsim

# project directory
PROJ_DIR_TMP := $(shell mktemp -d)
PROJ_DIR     ?= $(PROJ_DIR_TMP)

# select the core to use as main processor (defaults to Ibex)
CORE     ?= ibex
CORE_DIR := $(SIM_DIR)/../$(CORE)/

# memory initialization files
PROG_PATHS ?= progs.txt

# trace file
TRACE_FILE ?= sim_trace.csv
TRACE_SIGS ?= '*'

# select memory width (bits), size (bytes), and latency (cycles, 1 is minimum)
MEM_W       ?= 32
MEM_SZ      ?= 262144
MEM_LATENCY ?= 1

# set configuration of instruction and data caches (both disabled by default)
ICACHE_SZ     ?= 0
ICACHE_LINE_W ?= 128
DCACHE_SZ     ?= 0
DCACHE_LINE_W ?= $(shell echo $$(( $(VMEM_W) * 2 )))

all: verilator

# vector coprocessor configuration file generation (defines VMEM_W and VREG_W)
VPROC_CONFIG_PKG := $(PROJ_DIR)/vproc_config.sv
include $(SIM_DIR)/../config.mk

verilator-version-check:
	@version=`verilator --version | awk '{print $$2}'`;                       \
	if [ `printf '4.210\n%s\n' "$$version" | sort -V | head -n1` != "4.210" ];\
	then                                                                      \
	    echo "ERROR: Verilator version 4.210 or newer is required."           \
	         "You are currently using Verilator $${version}." >&2;            \
	    exit 1;                                                               \
	fi

verilator: verilator-version-check $(PROJ_DIR)/obj_dir/Vvproc_top.mk
	make -C $(PROJ_DIR)/obj_dir -f Vvproc_top.mk Vvproc_top;                  \
	$(PROJ_DIR)/obj_dir/Vvproc_top $(abspath $(PROG_PATHS)) $(MEM_W)          \
	    $(MEM_SZ) $(MEM_LATENCY) $$(($(VREG_W) * 2)) $(abspath $(TRACE_FILE)) \
	    $(abspath $(TRACE_VCD)) $(abspath $(TRACE_FST))

$(PROJ_DIR)/obj_dir/Vvproc_top.mk: verilator-version-check $(VPROC_CONFIG_PKG)
	cp $(SIM_DIR)/verilator_main.cpp $(PROJ_DIR)/
	cd $(PROJ_DIR);                                                           \
	options="";                                                               \
	cflags="";                                                                \
	if [ -n "$(TRACE_VCD)" ]; then                                            \
	    options="--trace";                                                    \
	    cflags="-CFLAGS -DTRACE_VCD";                                         \
	elif [ -n "$(TRACE_FST)" ]; then                                          \
	    options="--trace-fst";                                                \
	    cflags="-CFLAGS -DTRACE_FST";                                         \
	fi;                                                                       \
	if [ -n "$(SIM_ABORT_CYCLES)" ]; then                                     \
	    cflags="$${cflags} -CFLAGS -DABORT_CYCLES=$(SIM_ABORT_CYCLES)";       \
	fi;                                                                       \
	if [ -n "$(ENABLE_SVA)" ] && [ "$(ENABLE_SVA)" != "0" ]; then             \
	    options="$$options --assert -DVPROC_SVA";                             \
	fi;                                                                       \
	core="";                                                                  \
	inc="";                                                                   \
	src="";                                                                   \
	if echo "$(CORE_DIR)" | grep -q "ibex"; then                              \
	    core="-DMAIN_CORE_IBEX";                                              \
	    inc="-I$(CORE_DIR)/rtl/ -I$(CORE_DIR)/dv/uvm/core_ibex/common/prim/"; \
	    inc="$$inc -I$(CORE_DIR)/vendor/lowrisc_ip/dv/sv/dv_utils/";          \
	    inc="$$inc -I$(CORE_DIR)/vendor/lowrisc_ip/ip/prim/rtl/";             \
	    inc="$$inc -I$(CORE_DIR)/vendor/lowrisc_ip/ip/prim_generic/rtl/";     \
	    src="ibex_pkg.sv prim_pkg.sv prim_assert.sv prim_ram_1p_pkg.sv";      \
	    src="$$src ibex_register_file_ff.sv";                                 \
	elif echo "$(CORE_DIR)" | grep -q "cv32e40x"; then                        \
	    core="-DMAIN_CORE_CV32E40X";                                          \
	    inc="-I$(CORE_DIR)/rtl/ -I$(CORE_DIR)/rtl/include/";                  \
	    inc="$$inc -I$(CORE_DIR)/bhv/";                                       \
	    src="cv32e40x_pkg.sv if_xif.sv if_c_obi.sv";                          \
	    src="$$src cv32e40x_sim_clock_gate.sv";                               \
	fi;                                                                       \
	verilator --unroll-count 1024 -Wno-WIDTH -Wno-PINMISSING -Wno-UNOPTFLAT   \
	    -Wno-UNSIGNED -Wno-IMPLICIT -Wno-LITENDIAN -Wno-CASEINCOMPLETE        \
	    -Wno-SYMRSVDWORD -Wno-BLKANDNBLK -Wno-BLKSEQ -Wno-SYNCASYNCNET        \
	    -Wno-COMBDLY                                                          \
	    -I$(SIM_DIR)/../rtl/ -I$(SIM_DIR)/../sva/ $$inc $$core                \
	    -GMEM_W=$(MEM_W) -GVMEM_W=$(VMEM_W)                                   \
	    -GICACHE_SZ=$(ICACHE_SZ) -GICACHE_LINE_W=$(ICACHE_LINE_W)             \
	    -GDCACHE_SZ=$(DCACHE_SZ) -GDCACHE_LINE_W=$(DCACHE_LINE_W)             \
	    --cc $$src vproc_pkg.sv $(VPROC_CONFIG_PKG) vproc_top.sv vproc_xif.sv \
	    vproc_vregpack.sv vproc_vregunpack.sv --top-module vproc_top          \
	    --clk clk_i $$options $$cflags --exe verilator_main.cpp		  	

vivado: $(VPROC_CONFIG_PKG)
	cd $(PROJ_DIR) && vivado -mode batch -source $(VIVADO_TCL)                \
	    -tclargs $(SIM_DIR)/../ $(CORE_DIR) $(VPROC_CONFIG_PKG)               \
	    "MEM_W=$(MEM_W) MEM_SZ=$(MEM_SZ) MEM_LATENCY=$(MEM_LATENCY)           \
	    VMEM_W=$(VMEM_W)                                                      \
	    ICACHE_SZ=$(ICACHE_SZ) ICACHE_LINE_W=$(ICACHE_LINE_W)                 \
	    DCACHE_SZ=$(DCACHE_SZ) DCACHE_LINE_W=$(DCACHE_LINE_W)"                \
	    $(abspath $(TRACE_FILE)) $(abspath $(PROG_PATHS)) $(TRACE_SIGS)

questa: $(VPROC_CONFIG_PKG)
	cd $(PROJ_DIR) && $(VSIM) -batch -do 'do $(QUESTA_TCL)                    \
	    $(SIM_DIR).. $(CORE_DIR) $(VPROC_CONFIG_PKG)                          \
	    "$(VMEM_W) $(MEM_W) $(MEM_SZ) $(MEM_LATENCY)                          \
	    $(ICACHE_SZ) $(ICACHE_LINE_W) $(DCACHE_SZ) $(DCACHE_LINE_W)"          \
	    $(abspath $(TRACE_FILE)) $(abspath $(PROG_PATHS)) "$(TRACE_SIGS)"'
