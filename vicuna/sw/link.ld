/* Copyright TU Wien                                                               */
/* Licensed under the Solderpad Hardware License v2.1, see LICENSE.txt for details */
/* SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1                                */


OUTPUT_ARCH(riscv)
GROUP(-lc -lgcc )
ENTRY(_start)

SEARCH_DIR(.)
__DYNAMIC = 0;

MEMORY
{
    /* boot : ORIGIN = 0x00000000, LENGTH = 0x00002000 /*   8 kB */
    boot : ORIGIN = 0x00000000, LENGTH = 0x00001000 /*   4 kB */
    /* ram  : ORIGIN = 0x00002000, LENGTH = 0x0003E000 /* 248 kB */
     ram  : ORIGIN = 0x00002000, LENGTH = 0x000186A0 /* 100 kB */
    /* ram  : ORIGIN = 0x00002000, LENGTH = 0x0001E000 /* 124 kB */ 
    /* ram  : ORIGIN = 0x00002000, LENGTH = 0x000249F0 /* 150 kB */ 
    /* ram  : ORIGIN = 0x00002000, LENGTH = 0x000C2240 /* 800 kB */
    /* ram : ORIGIN = 0x00002000, LENGTH = 0x00017AE8 /* 97Kb */
    /* ram : ORIGIN = 0x00002000, LENGTH = 0x0005F370 /* 390Kb */ 
    /* ram : ORIGIN = 0x00002000, LENGTH = 0x000280A0 /* 390Kb */  
    
}

/* STACK_LEN = 0x4000; /* 16 kB */
STACK_LEN = 0x2000; /* 16 kB */

SECTIONS
{
    .vectors 0 : {
        *(.vectors)
    } >boot

    .text : {
        . = ALIGN(4);
        _stext = .;
        *(.text)
        *(.text.*)
        _etext  =  .;
        __CTOR_LIST__ = .;
        LONG((__CTOR_END__ - __CTOR_LIST__) / 4 - 2)
        *(.ctors)
        LONG(0)
        __CTOR_END__ = .;
        __DTOR_LIST__ = .;
        LONG((__DTOR_END__ - __DTOR_LIST__) / 4 - 2)
        *(.dtors)
        LONG(0)
        __DTOR_END__ = .;
        *(.lit)
        *(.shdata)
        . = ALIGN(4);
        _endtext = .;
    } >ram

    .rodata : {
        . = ALIGN(4);
        *(.rodata);
        *(.rodata.*)
    } >ram

    .shbss : {
        . = ALIGN(4);
        *(.shbss)
    } >ram

    .data : {
        . = ALIGN(4);
        sdata = .;
        _sdata = .;
        *(.data);
        *(.data.*)
        edata = .;
        _edata = .;
    } >ram

    .bss (NOLOAD) : {
        . = ALIGN(4);
        _bss_start = .;
        *(.bss)
        *(.bss.*)
        *(.sbss)
        *(.sbss.*)
        *(COMMON)
        _bss_end = .;
    } >ram

    .user_align (NOLOAD) : {
        . = ALIGN(0x1000);
        _user_start = .;
    } >ram


    .stack ORIGIN(ram) + LENGTH(ram) - STACK_LEN (NOLOAD) : {
        . = ALIGN(16);
        _stack_start = .;
        . = . + STACK_LEN;
        . = ALIGN(16);
        stack = .;
        _stack = .;
        _stack_end = .;
    } >ram

    .stab 0 (NOLOAD) : {
        [ .stab ]
    }

    .stabstr 0 (NOLOAD) : {
        [ .stabstr ]
    }
}
