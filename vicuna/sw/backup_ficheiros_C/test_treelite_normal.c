#include <uart.h>
#include "runtime.h"
#include "header.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>

#define N 256

/*
Mede o tempo de inferencia do modelo usando o treelite e nao estando quantizado
*/

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
    
    union Entry data[22];
    float result_quantitized[4]; 
    int quantitized_result[4] = {0, 0, 0, 0}; 
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

    data[0].fvalue = 0.9952641371466858;
    data[1].fvalue = 7.147017736821692;
    data[2].fvalue = 7.492386779583182;
    data[3].fvalue = -8.85567855834961;
    data[4].fvalue = 0.9069713377273061;
    data[5].fvalue = 7.8149697401908345;
    data[6].fvalue = 3.9632291963403157;
    data[7].fvalue = 0.9902961519250837;
    data[8].fvalue = 6.236029148101807;
    data[9].fvalue = 3.0537731647491455;
    data[10].fvalue = -3.603837490081787;
    data[11].fvalue = -2.870728015899658;
    data[12].fvalue = -0.2469303160905838;
    data[13].fvalue = -38.31256103515625;
    data[14].fvalue = 0.14198292791843414;
    data[15].fvalue = -39.26580047607422;
    data[16].fvalue = 0.4561837613582611;
    data[17].fvalue = 7.824003219604492;
    data[18].fvalue = 0.8877548641503448;
    data[19].fvalue = 0.27745750546455383;
    data[20].fvalue = 0.5878902673721313;
    data[21].fvalue = 0.6477293968200684;

    long instructions3,instructions4;
    uart_printf("\r\n******************* NUMERO DE CICLOS E INSTRUCÕES DO MODELO *******************\r\n");
    time1 = get_mcycle();
    instructions3 = get_minstret();

    // treelite not quantized
    predict(data, 0, result_quantitized);
 
    time2 = get_mcycle();
    instructions4 = get_minstret();
    
    uart_printf("The operation took %d instructions\r\n",instructions4-instructions3);
    uart_printf("The operation took %d cycles\r\n",time2-time1);

    quantitized_result_func(result_quantitized, quantitized_result);
    for(int i = 0; i < 4; i++){
        if(quantitized_result[i] == 1){ 
            result_number = i;
        }  
    }
    uart_printf("Resultado: %d \r\n", result_number);


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
    
    asm volatile("jr x0;");
    return 0;
}



