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
    
    int result_number;
    
    uart_printf("\r\n******************* NUMERO DE CICLOS *******************\r\n");
    uint32_t valor_t0;
    long time1,time2;
    time1 = get_mcycle();
    time2 = get_mcycle();
    uart_printf("The operation took %d cycles\r\n",time2-time1);

    time1 = get_mcycle();
    asm volatile(
        "addi t0, x0, 1\n\t"    // t0 = 1
        "addi t0, t0, 1\n\t"    // t0 = t0 + 1 (agora t0 = 2)
        "sw t0, %0"             // Armazena t0 na variável valor_t0
        : "=m" (valor_t0)       // Saída: variável onde armazenamos t0
        :                       // Sem entradas
        : "t0"                  // Clobber: indica que t0 foi modificado
    );
    time2 = get_mcycle();
    uart_printf("The operation took %d cycles\r\n",time2-time1);
    uart_printf("value of t0 %d \r\n",valor_t0);

    int predict_int[22];
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

    long instructions3,instructions4;
    uart_printf("\r\n******************* NUMERO DE CICLOS E INSTRUCÕES DO MODELO *******************\r\n");
    time1 = get_mcycle();
    instructions3 = get_minstret();

    result_number = score(predict_int);
    
    time2 = get_mcycle();
    instructions4 = get_minstret();
    
    uart_printf("The operation took %d instructions\r\n",instructions4-instructions3);
    uart_printf("The operation took %d cycles\r\n",time2-time1);
    
    // DAR PRINT AO RESULTADO
    uart_printf("class predicted result: %d ", result_number);

    uart_printf("\r\n******************* NUMERO DE INSTRUCÕES *******************\r\n");
    long instructions1,instructions2;
    instructions1 = get_minstret();
    instructions2 = get_minstret();
    uart_printf("The operation took %d instructions\r\n",instructions2-instructions1);

    instructions1 = get_minstret();
    asm volatile(
        "addi t0, x0, 1\n\t"    // t0 = 1
        "addi t0, t0, 1\n\t"    // t0 = t0 + 1 (agora t0 = 2)
        "sw t0, %0"             // Armazena t0 na variável valor_t0
        : "=m" (valor_t0)       // Saída: variável onde armazenamos t0
        :                       // Sem entradas
        : "t0"                  // Clobber: indica que t0 foi modificado
    );
    instructions2 = get_minstret();
    uart_printf("The operation took %d instructions\r\n",instructions2-instructions1);
    uart_printf("value of t0 %d \r\n",valor_t0);

    float numero1 = 15.5;
    float numero2 = 15.7;
    instructions1 = get_minstret();
    float numero3 = numero1 * numero2;
    instructions2 = get_minstret();
    uart_printf("The operation took %d instructions\r\n",instructions2-instructions1);
    uart_printf("value of t0 %d \r\n",(uint32_t)numero3);
    
    asm volatile("jr x0;"); // Para nao ficar encravado na simulacao com o simulator
    return 0;
}



