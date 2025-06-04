#include "runtime.h"
#include "uart.h"

// Function to read cpu mcycle csr for performance measurements
uint64_t get_mcycle(){
    unsigned int mcyclel;
    unsigned int mcycleh0 = 0, mcycleh1=1;
    uint64_t cycles;

    while(mcycleh0 != mcycleh1) {
        asm volatile ("csrr %0,mcycleh"  : "=r" (mcycleh0) );
        asm volatile ("csrr %0,mcycle"   : "=r" (mcyclel)  );
        asm volatile ("csrr %0,mcycleh"  : "=r" (mcycleh1) );
    }
    cycles = mcycleh1;
    return (cycles << 32) | mcyclel;
}


// Function to read cpu mcycle csr for performance measurements
uint64_t get_minstret(){
    unsigned int minstretl;
    unsigned int minstret0 = 0, minstret1=1;
    uint64_t instructions;

    while(minstret0 != minstret1) {
        asm volatile ("csrr %0,minstreth"  : "=r" (minstret0) );
        asm volatile ("csrr %0,minstret"   : "=r" (minstretl)  );
        asm volatile ("csrr %0,minstreth"  : "=r" (minstret1) );
    }
    instructions = minstret1;
    return (instructions << 32) | minstretl;
}
