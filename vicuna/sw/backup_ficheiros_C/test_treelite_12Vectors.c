#include <uart.h>
#include "runtime.h"
#include "header_editado.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>

#define N 256

/*
Mede o tempo de inferencia do modelo usando o treelite e nao estando quantizado
*/

int main() {

union Entry data0[22];
union Entry data1[22];
union Entry data2[22];
union Entry data3[22];
union Entry data4[22];
union Entry data5[22];
union Entry data6[22];
union Entry data7[22];
union Entry data8[22];
union Entry data9[22];
union Entry data10[22];
union Entry data11[22];

data0[0].qvalue = 0.995264 * 64;
data0[1].qvalue = 7.147018 * 64;
data0[2].qvalue = 7.492387 * 64;
data0[3].qvalue = -8.855679 * 64;
data0[4].qvalue = 0.906971 * 64;
data0[5].qvalue = 7.814970 * 64;
data0[6].qvalue = 3.963229 * 64;
data0[7].qvalue = 0.990296 * 64;
data0[8].qvalue = 6.236029 * 64;
data0[9].qvalue = 3.053773 * 64;
data0[10].qvalue = -3.603837 * 64;
data0[11].qvalue = -2.870728 * 64;
data0[12].qvalue = -0.246930 * 64;
data0[13].qvalue = -38.312561 * 64;
data0[14].qvalue = 0.141983 * 64;
data0[15].qvalue = -39.265800 * 64;
data0[16].qvalue = 0.456184 * 64;
data0[17].qvalue = 7.824003 * 64;
data0[18].qvalue = 0.887755 * 64;
data0[19].qvalue = 0.277458 * 64;
data0[20].qvalue = 0.587890 * 64;
data0[21].qvalue = 0.647729 * 64;

// Valores para data1
data1[0].qvalue = 0.995495 * 64;
data1[1].qvalue = 6.608595 * 64;
data1[2].qvalue = 7.509595 * 64;
data1[3].qvalue = -8.855679 * 64;
data1[4].qvalue = 0.904904 * 64;
data1[5].qvalue = 6.892552 * 64;
data1[6].qvalue = 3.883321 * 64;
data1[7].qvalue = 0.990375 * 64;
data1[8].qvalue = 6.236029 * 64;
data1[9].qvalue = 3.053773 * 64;
data1[10].qvalue = -3.603837 * 64;
data1[11].qvalue = -2.870728 * 64;
data1[12].qvalue = -0.246930 * 64;
data1[13].qvalue = -38.312561 * 64;
data1[14].qvalue = 0.141983 * 64;
data1[15].qvalue = -39.265800 * 64;
data1[16].qvalue = 0.456184 * 64;
data1[17].qvalue = 7.824003 * 64;
data1[18].qvalue = 0.883248 * 64;
data1[19].qvalue = 0.277458 * 64;
data1[20].qvalue = 0.587890 * 64;
data1[21].qvalue = 0.647729 * 64;

data2[0].qvalue = 0.995466 * 64;
data2[1].qvalue = 6.741468 * 64;
data2[2].qvalue = 7.490896 * 64;
data2[3].qvalue = -8.855679 * 64;
data2[4].qvalue = 0.916869 * 64;
data2[5].qvalue = 6.827318 * 64;
data2[6].qvalue = 3.888844 * 64;
data2[7].qvalue = 0.990170 * 64;
data2[8].qvalue = 6.236029 * 64;
data2[9].qvalue = 3.053773 * 64;
data2[10].qvalue = -3.603837 * 64;
data2[11].qvalue = -2.870728 * 64;
data2[12].qvalue = -0.246930 * 64;
data2[13].qvalue = -38.312561 * 64;
data2[14].qvalue = 0.141983 * 64;
data2[15].qvalue = -39.265800 * 64;
data2[16].qvalue = 0.456184 * 64;
data2[17].qvalue = 7.824003 * 64;
data2[18].qvalue = 0.886380 * 64;
data2[19].qvalue = 0.277458 * 64;
data2[20].qvalue = 0.587890 * 64;
data2[21].qvalue = 0.647729 * 64;

data3[0].qvalue = 0.664076 * 64;
data3[1].qvalue = 0.086709 * 64;
data3[2].qvalue = -0.402010 * 64;
data3[3].qvalue = -2.644550 * 64;
data3[4].qvalue = 0.096234 * 64;
data3[5].qvalue = 0.412325 * 64;
data3[6].qvalue = -0.224313 * 64;
data3[7].qvalue = 0.790625 * 64;
data3[8].qvalue = 1.812106 * 64;
data3[9].qvalue = 1.476450 * 64;
data3[10].qvalue = -2.678274 * 64;
data3[11].qvalue = -2.999914 * 64;
data3[12].qvalue = -0.135015 * 64;
data3[13].qvalue = -1.507168 * 64;
data3[14].qvalue = 0.887784 * 64;
data3[15].qvalue = -1.119201 * 64;
data3[16].qvalue = -0.006710 * 64;
data3[17].qvalue = 1.698569 * 64;
data3[18].qvalue = -0.016227 * 64;
data3[19].qvalue = 0.650008 * 64;
data3[20].qvalue = 0.199432 * 64;
data3[21].qvalue = 0.217116 * 64;

data4[0].qvalue = 0.969723 * 64;
data4[1].qvalue = 0.629610 * 64;
data4[2].qvalue = 0.462875 * 64;
data4[3].qvalue = -7.296391 * 64;
data4[4].qvalue = 0.351667 * 64;
data4[5].qvalue = 2.002511 * 64;
data4[6].qvalue = 0.367929 * 64;
data4[7].qvalue = 0.932622 * 64;
data4[8].qvalue = 6.197341 * 64;
data4[9].qvalue = 5.452390 * 64;
data4[10].qvalue = -8.487554 * 64;
data4[11].qvalue = -8.780581 * 64;
data4[12].qvalue = -0.219929 * 64;
data4[13].qvalue = -6.362501 * 64;
data4[14].qvalue = 0.532146 * 64;
data4[15].qvalue = -6.900409 * 64;
data4[16].qvalue = 0.308277 * 64;
data4[17].qvalue = 6.012288 * 64;
data4[18].qvalue = 0.248544 * 64;
data4[19].qvalue = 11.570929 * 64;
data4[20].qvalue = 0.524440 * 64;
data4[21].qvalue = 0.700716 * 64;

data5[0].qvalue = 0.985300 * 64;
data5[1].qvalue = 9.966628 * 64;
data5[2].qvalue = 3.126355 * 64;
data5[3].qvalue = -3.108934 * 64;
data5[4].qvalue = 0.177387 * 64;
data5[5].qvalue = 2.737775 * 64;
data5[6].qvalue = -0.906269 * 64;
data5[7].qvalue = 0.971460 * 64;
data5[8].qvalue = 4.861980 * 64;
data5[9].qvalue = 4.921928 * 64;
data5[10].qvalue = -3.501537 * 64;
data5[11].qvalue = -3.740440 * 64;
data5[12].qvalue = -0.260381 * 64;
data5[13].qvalue = -6.251833 * 64;
data5[14].qvalue = 0.574742 * 64;
data5[15].qvalue = -6.628662 * 64;
data5[16].qvalue = 0.201359 * 64;
data5[17].qvalue = 4.747866 * 64;
data5[18].qvalue = 0.190479 * 64;
data5[19].qvalue = 0.177448 * 64;
data5[20].qvalue = 0.617399 * 64;
data5[21].qvalue = 0.466712 * 64;

data6[0].qvalue = 0.975015 * 64;
data6[1].qvalue = -0.230807 * 64;
data6[2].qvalue = 7.745011 * 64;
data6[3].qvalue = -8.021235 * 64;
data6[4].qvalue = 0.050347 * 64;
data6[5].qvalue = -0.414486 * 64;
data6[6].qvalue = 8.109954 * 64;
data6[7].qvalue = 0.981394 * 64;
data6[8].qvalue = 10.746413 * 64;
data6[9].qvalue = 11.530061 * 64;
data6[10].qvalue = -7.862754 * 64;
data6[11].qvalue = -7.784527 * 64;
data6[12].qvalue = -0.152119 * 64;
data6[13].qvalue = -3.309562 * 64;
data6[14].qvalue = 0.943331 * 64;
data6[15].qvalue = -2.115222 * 64;
data6[16].qvalue = 0.009037 * 64;
data6[17].qvalue = 12.214792 * 64;
data6[18].qvalue = 0.388116 * 64;
data6[19].qvalue = 1.956680 * 64;
data6[20].qvalue = 0.102302 * 64;
data6[21].qvalue = 0.039050 * 64;

data7[0].qvalue = 0.980595 * 64;
data7[1].qvalue = -0.260811 * 64;
data7[2].qvalue = 4.472758 * 64;
data7[3].qvalue = -8.021235 * 64;
data7[4].qvalue = 0.086829 * 64;
data7[5].qvalue = -0.249949 * 64;
data7[6].qvalue = 6.015975 * 64;
data7[7].qvalue = 0.985669 * 64;
data7[8].qvalue = 10.746413 * 64;
data7[9].qvalue = 11.530061 * 64;
data7[10].qvalue = -7.862754 * 64;
data7[11].qvalue = -7.784527 * 64;
data7[12].qvalue = -0.152119 * 64;
data7[13].qvalue = -3.309562 * 64;
data7[14].qvalue = 0.941920 * 64;
data7[15].qvalue = -2.115222 * 64;
data7[16].qvalue = 0.009037 * 64;
data7[17].qvalue = 12.214792 * 64;
data7[18].qvalue = 0.479726 * 64;
data7[19].qvalue = 1.956680 * 64;
data7[20].qvalue = 0.102302 * 64;
data7[21].qvalue = 0.056253 * 64;

data8[0].qvalue = 0.976722 * 64;
data8[1].qvalue = 1.604454 * 64;
data8[2].qvalue = 2.428144 * 64;
data8[3].qvalue = -8.021235 * 64;
data8[4].qvalue = 0.721482 * 64;
data8[5].qvalue = 7.856691 * 64;
data8[6].qvalue = 2.937498 * 64;
data8[7].qvalue = 0.970942 * 64;
data8[8].qvalue = 10.746413 * 64;
data8[9].qvalue = 11.530061 * 64;
data8[10].qvalue = -7.862754 * 64;
data8[11].qvalue = -7.784527 * 64;
data8[12].qvalue = -0.152119 * 64;
data8[13].qvalue = -3.309562 * 64;
data8[14].qvalue = 0.943331 * 64;
data8[15].qvalue = -2.115222 * 64;
data8[16].qvalue = 0.009037 * 64;
data8[17].qvalue = 12.214792 * 64;
data8[18].qvalue = 0.388116 * 64;
data8[19].qvalue = 1.956680 * 64;
data8[20].qvalue = 0.102302 * 64;
data8[21].qvalue = 0.056253 * 64;

data9[0].qvalue = 0.953744 * 64;
data9[1].qvalue = 0.446117 * 64;
data9[2].qvalue = 13.107962 * 64;
data9[3].qvalue = -10.039430 * 64;
data9[4].qvalue = -0.059640 * 64;
data9[5].qvalue = 0.323265 * 64;
data9[6].qvalue = 7.509738 * 64;
data9[7].qvalue = 0.942919 * 64;
data9[8].qvalue = 9.857601 * 64;
data9[9].qvalue = 9.407838 * 64;
data9[10].qvalue = -11.434473 * 64;
data9[11].qvalue = -11.506239 * 64;
data9[12].qvalue = -0.134925 * 64;
data9[13].qvalue = -4.030868 * 64;
data9[14].qvalue = 0.869338 * 64;
data9[15].qvalue = -5.349245 * 64;
data9[16].qvalue = 0.187791 * 64;
data9[17].qvalue = 8.564835 * 64;
data9[18].qvalue = -0.356511 * 64;
data9[19].qvalue = 0.413904 * 64;
data9[20].qvalue = 0.305402 * 64;
data9[21].qvalue = 0.283811 * 64;

data10[0].qvalue = 0.977842 * 64;
data10[1].qvalue = 7.085422 * 64;
data10[2].qvalue = 7.373282 * 64;
data10[3].qvalue = -10.039430 * 64;
data10[4].qvalue = 0.712802 * 64;
data10[5].qvalue = 0.464358 * 64;
data10[6].qvalue = 2.031176 * 64;
data10[7].qvalue = 0.969264 * 64;
data10[8].qvalue = 9.857601 * 64;
data10[9].qvalue = 9.407838 * 64;
data10[10].qvalue = -11.434473 * 64;
data10[11].qvalue = -11.506239 * 64;
data10[12].qvalue = -0.134925 * 64;
data10[13].qvalue = -4.274892 * 64;
data10[14].qvalue = 0.610911 * 64;
data10[15].qvalue = -5.349245 * 64;
data10[16].qvalue = 0.132149 * 64;
data10[17].qvalue = 8.564835 * 64;
data10[18].qvalue = 0.708189 * 64;
data10[19].qvalue = 1.032324 * 64;
data10[20].qvalue = 0.276383 * 64;
data10[21].qvalue = 0.257368 * 64;

data11[0].qvalue = 0.981322 * 64;
data11[1].qvalue = 6.693717 * 64;
data11[2].qvalue = 7.242178 * 64;
data11[3].qvalue = -10.039430 * 64;
data11[4].qvalue = 0.780173 * 64;
data11[5].qvalue = 0.528109 * 64;
data11[6].qvalue = 0.853547 * 64;
data11[7].qvalue = 0.980796 * 64;
data11[8].qvalue = 9.857601 * 64;
data11[9].qvalue = 9.407838 * 64;
data11[10].qvalue = -11.434473 * 64;
data11[11].qvalue = -11.506239 * 64;
data11[12].qvalue = -0.134925 * 64;
data11[13].qvalue = -4.274892 * 64;
data11[14].qvalue = 0.610911 * 64;
data11[15].qvalue = -5.349245 * 64;
data11[16].qvalue = 0.120795 * 64;
data11[17].qvalue = 8.564835 * 64;
data11[18].qvalue = 0.795736 * 64;
data11[19].qvalue = 1.032324 * 64;
data11[20].qvalue = 0.276383 * 64;
data11[21].qvalue = 0.257368 * 64;


    int result_number0, result_number1, result_number2, result_number3, result_number4, result_number5, result_number6, result_number7, result_number8, result_number9, result_number10, result_number11;
    
    long time1,time2;
    long instructions3,instructions4;
    
    time1 = 0;
    time2 = 0;
    instructions3 = 0;
    instructions4 = 0;
    uart_printf("\r\n******************* NUMERO DE CICLOS E INSTRUCÕES DO MODELO *******************\r\n");
    time1 = get_mcycle();
    instructions3 = get_minstret();

    // treelite not quantized
    result_number0 = predict(data0);
    result_number1 = predict(data1);
    result_number2 = predict(data2);
    result_number3 = predict(data3);
    result_number4 = predict(data4);
    result_number5 = predict(data5);
    result_number6 = predict(data6);
    result_number7 = predict(data7);
    result_number8 = predict(data8);
    result_number9 = predict(data9);
    result_number10 = predict(data10);
    result_number11 = predict(data11);

    time2 = get_mcycle();
    instructions4 = get_minstret();
    
    uart_printf("The operation took %d instructions\r\n",instructions4-instructions3);
    uart_printf("The operation took %d cycles\r\n",time2-time1);

    uart_printf("Resultado: %d \r\n", result_number0);
    uart_printf("Resultado: %d \r\n", result_number1);
    uart_printf("Resultado: %d \r\n", result_number2);
    uart_printf("Resultado: %d \r\n", result_number3);
    uart_printf("Resultado: %d \r\n", result_number4);
    uart_printf("Resultado: %d \r\n", result_number5);
    uart_printf("Resultado: %d \r\n", result_number6);
    uart_printf("Resultado: %d \r\n", result_number7);
    uart_printf("Resultado: %d \r\n", result_number8);
    uart_printf("Resultado: %d \r\n", result_number9);
    uart_printf("Resultado: %d \r\n", result_number10);
    uart_printf("Resultado: %d \r\n", result_number11);

    asm volatile("jr x0;");
    return 0;
}
