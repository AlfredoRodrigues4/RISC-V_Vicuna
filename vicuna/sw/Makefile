# Copyright TU Wien
# Licensed under the Solderpad Hardware License v2.1, see LICENSE.txt for details
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1


# Generic Makefile for RV32IMV applications
# Specify program name with PROG, object files with OBJ

# ARCH                := rv32im_zve32x
# ARCH                := rv32im_zicsr

SW_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

COMPILER ?= llvm
ifeq ($(COMPILER),gcc)
    RISCV_CC            := riscv32-unknown-elf-gcc
    RISCV_DUMP          := riscv32-unknown-elf-objdump
    RISCV_OBCP          := riscv32-unknown-elf-objcopy
    ARCH                := rv32im_zve32x
    LD_SCRIPT           := $(SW_DIR)/link.ld
else ifeq ($(COMPILER),llvm)
    # Pick the first clang executable in $PATH with version >= 14, or the
    # default clang if there is no clang >= 14; the individual steps are:
    #  - find all files containing 'clang*' in all directories in $PATH
    #  - use sed to select all those that match 'clang-[0-9]+'
    #  - use awk to select all those that end with a number >= 14
    #  - append 'clang' to that list in case there is no clang >= 14
    #  - select the first executable from that list
    RISCV_CC            := $(shell find `echo $$PATH | sed 's/:/ /g'`         \
                             -maxdepth 1 -name 'clang*' |                     \
                             sed -n '/clang-[0-9][0-9]*$$/p' |                \
                             awk -F"-" '$$NF>=14' | (cat && echo clang) |     \
                             head -n 1) --target=riscv32
    RISCV_DUMP          := llvm-objdump
    RISCV_OBCP          := llvm-objcopy
    ARCH                := rv32imzve32x
    CC_SPECIFIC_OPTIONS := -fuse-ld=lld -Wno-unused-command-line-argument
    LD_SCRIPT           := $(SW_DIR)/lld_link.ld
endif


RISCV_FLAGS := -march=$(ARCH) -mabi=ilp32 -static -mcmodel=medany             \
               -fvisibility=hidden -nostdlib -nostartfiles -Wall       	      \
               $(CC_SPECIFIC_OPTIONS)
#-O3 -ffast-math -ftree-vectorize -fopt-info-vec -fdump-tree-vect-details -fopt-info-vec-optimized

CFLAGS := $(CFLAGS) -I$(SW_DIR)/lib/

PROG ?= test
OBJ  ?= test.o

# add crt0 to object files
RISCV_OBJ := $(SW_DIR)/crt0.o $(OBJ) $(SW_DIR)/lib/uart.o $(SW_DIR)/lib/runtime.o $(SW_DIR)/lib/led.o $(SW_DIR)/lib/processing.o $(SW_DIR)/lib/model_m2cgen_editado.o
# $(SW_DIR)/lib/model_m2cgen_editado.o      $(SW_DIR)/lib/header_quant.o      $(SW_DIR)/lib/header.o      $(SW_DIR)/lib/model_m2cgen.o    $(SW_DIR)/lib/header_editado.o

all: $(PROG).vmem

dump: $(PROG).elf
	$(RISCV_DUMP) -D $<

$(PROG).elf: $(RISCV_OBJ) $(LD_SCRIPT)
	$(RISCV_CC) $(RISCV_FLAGS) -T $(LD_SCRIPT) $(LDFLAGS) $(RISCV_OBJ) -o $@

%.o: %.c
	$(RISCV_CC) $(RISCV_FLAGS) $(CFLAGS) -c -o $@ $<

%.o: %.S
	$(RISCV_CC) $(RISCV_FLAGS) $(ASFLAGS) -c -o $@ $<

# currently unusable due to problems with byte order
# (see https://github.com/riscv/riscv-tools/issues/168#issuecomment-554973539)
#%.vmem: %.elf
#	$(OBJCOPY) -O verilog --verilog-data-width 4 $^ $@

# workaround (requires srecord):
# note: start address must be reset manually because it is lost in bin file
%.vmem: %.bin
	srec_cat $^ -binary -offset 0x0000 -byte-swap 4 -o $@ -vmem
%.bin: %.elf
	$(RISCV_OBCP) -O binary $^ $@

clean:
	rm -f *.o *.elf *.bin *.vmem

include $(SW_DIR)/toolchain.mk
