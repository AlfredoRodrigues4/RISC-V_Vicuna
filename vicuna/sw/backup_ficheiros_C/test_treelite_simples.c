#include <uart.h>
#include "runtime.h"
#include "header_editado.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>

#define N 256

int main() {
    
    union Entry data[22]; 
    int result_number;
    long time1,time2;

    data[0].qvalue = 63;
    data[1].qvalue = 457;
    data[2].qvalue = 479;
    data[3].qvalue = -566;
    data[4].qvalue = 58;
    data[5].qvalue = 499;
    data[6].qvalue = 253;
    data[7].qvalue = 63;
    data[8].qvalue = 398;
    data[9].qvalue = 195;
    data[10].qvalue = -230;
    data[11].qvalue = -183;
    data[12].qvalue = -15;
    data[13].qvalue = -2452;
    data[14].qvalue = 9;
    data[15].qvalue = -2513;
    data[16].qvalue = 29;
    data[17].qvalue = 500;
    data[18].qvalue = 56;
    data[19].qvalue = 17;
    data[20].qvalue = 37;
    data[21].qvalue = 41;

    long instructions3,instructions4;
    uart_printf("\r\n******************* NUMERO DE CICLOS E INSTRUCÕES DO MODELO *******************\r\n");
    time1 = get_mcycle();
    instructions3 = get_minstret();

    // treelite not quantized
    result_number = predict(data);
 
    time2 = get_mcycle();
    instructions4 = get_minstret();
    
    uart_printf("The operation took %d instructions\r\n",instructions4-instructions3);
    uart_printf("The operation took %d cycles\r\n",time2-time1);

    uart_printf("Resultado: %d \r\n", result_number);
    
    asm volatile("jr x0;");
    return 0;
}


