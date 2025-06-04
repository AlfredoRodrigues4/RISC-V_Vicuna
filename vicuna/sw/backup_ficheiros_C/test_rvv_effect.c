#include <uart.h>
#include "runtime.h"
//#include "model_m2cgen.h"
#include "header_quant.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>
//#include <led.h>

/*
Basicamente, neste ficheiro e possivel verificar a diferenca entre usar e nao usar a extensao vetorial
quando utilizada, no Makefile fica: "ARCH := rv32im_zve32x" e entao:
    -> numero de instrucoes: 217
    -> numero de ciclos: 938

Mas quando no Makefile fica "ARCH := rv32im_zicsr" entao:
    -> numero de instrucoes: 2133
    -> numero de ciclos: 3205

Aqui neste ficheiro e notoria a diferenca de performance do processador, por isso, tentar depois aplicar isso ao modelo TinyML
*/

#define N 256

int8_t array[N]    __attribute__((aligned(16)));
int8_t target_s[N] __attribute__((aligned(16)));
int8_t target_v[N] __attribute__((aligned(16)));

void quantitized_result_func(float* result_input, int* result_output){

    int max_index = 0;
    
    for (int i = 0; i < 4; i++) {
        result_output[i] = 0;
    }

    for(int i = 1; i < 4; i++){
        if(result_input[i] > result_input[max_index]){
            max_index = i;
        } 
    }  

    result_output[max_index] = 1;
} 

int main() {
    
    for (int i = 0; i < N; i++) {
        array[i] = i & 0x7F;  // qualquer valor pequeno
    }

    long time1, time2;
    long instructions3, instructions4;

    uart_printf("\r\n******************* NUMERO DE CICLOS E INSTRUCÕES *******************\r\n");
    time1 = get_mcycle();
    instructions3 = get_minstret();
    
    // Loop SCALAR
    for (int i = 0; i < N; i++) {
        target_s[i] = array[i] * 5 + 7;
    }
    
    time2 = get_mcycle();
    instructions4 = get_minstret();
    
    uart_printf("The operation took %d instructions\r\n",instructions4-instructions3);
    uart_printf("The operation took %d cycles\r\n",time2-time1);
    
    asm volatile("jr x0;");
    return 0;

}



