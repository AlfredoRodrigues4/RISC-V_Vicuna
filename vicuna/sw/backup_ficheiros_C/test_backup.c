#include <uart.h>
#include "runtime.h"
#include "model_m2cgen_editado.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>

#define N 256

/*
Este codigo basicamente faz a inferencia e mede a inferencia do m2cgen todo quantizado, com os treesholds e ao longo
da arvore quantizado
*/

int main() {
    
    int16_t result_number;
    long time1,time2;
    long instructions3,instructions4;
    int16_t predict_int[22];
    double predict_1[22] = {0.9952641371466858,
                        7.147017736821692,
                        7.492386779583182,
                        -8.85567855834961,
                        0.9069713377273061,
                        7.8149697401908345,
                        3.9632291963403157,
                        0.9902961519250837,
                        6.236029148101807,
                        3.0537731647491455,
                        -3.603837490081787,
                        -2.870728015899658,
                        -0.2469303160905838,
                        -38.31256103515625,
                        0.14198292791843414,
                        -39.26580047607422,
                        0.4561837613582611,
                        7.824003219604492,
                        0.8877548641503448,
                        0.27745750546455383,
                        0.5878902673721313,
                        0.6477293968200684}; 
    
    for(int i = 0; i < 22; i++){
        predict_int[i] = (int)(predict_1[i] * 64);
    }
  
    uart_printf("\r\n******************* NUMERO DE CICLOS E INSTRUCÕES DO MODELO *******************\r\n");
    time1 = get_mcycle();
    instructions3 = get_minstret();

    result_number = score(predict_int);
    
    time2 = get_mcycle();
    instructions4 = get_minstret();
    
    uart_printf("The operation took %d instructions\r\n",instructions4-instructions3);
    uart_printf("The operation took %d cycles\r\n",time2-time1);
    
    // DAR PRINT AO RESULTADO
    uart_printf("class predicted result: %d \r\n", result_number);

    asm volatile("jr x0;"); // Para nao ficar encravado na simulacao com o simulator
    return 0;
}



