// #include "uart.h"	
// #include <stddef.h>

// void* memcpy(void* dest, const void* src, size_t n){

// 	for (size_t i = 0; i < n; i++)
// 	{
// 		((char*)dest)[i] = ((char*)src)[i];
// 	}
// }

// int main() {
	
//     int x = 5; 
//     int y = 10;
//     int k = x + y; 

//     int matrix1[3][3] = { //linhas colunas
//         {1, 2, 1},
//         {0, 1, 2},
//         {2, 1, 0}
//     };

//     int matrix2[3][3] = {
//         {1, 0, 1},
//         {2, 1, 0},
//         {0, 2, 1}
//     };
    
//     uart_printf("Hello World! - from LLVM clang ihihihih\n\r");
//     uart_printf("this is the fucking number: %d\n\r", k);
// 	uart_printf("number of matrix1: %d\n\r", matrix1[1][1]);
//     uart_printf("number of matrix1: %d\n\r", (matrix1[1][1]*matrix2[1][0]));


// 	while(1){
	
// 	};
// }


#include <uart.h>
#include "runtime.h"
#include <stddef.h>
#include <led.h>

// void* memcpy(void* dest, const void* src, size_t n){

// 	for (size_t i = 0; i < n; i++)
// 	{
// 		((char*)dest)[i] = ((char*)src)[i];
// 	}
// }

/*
void multiply_matrices(signed char* a, signed char* b, signed char* result) {
    for (int i = 0; i < 10; i++) {
        result[i] = a[i] * b[i];
    }
}
*/

int main() {
//    // Definir matrizes com números pequenos e inteiros
//    uart_printf("lets fucking gooooooooooo\r\n");
//
//    signed char matrix1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    signed char matrix2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    
//    signed char result[10];
//
//    // Multiplicar matrizes
//    multiply_matrices(matrix1, matrix2, result);
//    
//    // Calcular soma de todos os elementos
//    int total_sum = 0;
//    for (int i = 0; i < 10; i++) {
//        total_sum += result[i];
//    }
//
//    uart_printf("fucking number dude: %d\r\n", total_sum);
    
    int led = 1;
//    int get_led;
    define_led_value(led);
    
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

//    get_led = get_led_value();
//    uart_printf("led: %d \r\n", get_led);

    while(1);

    return 0;
}



