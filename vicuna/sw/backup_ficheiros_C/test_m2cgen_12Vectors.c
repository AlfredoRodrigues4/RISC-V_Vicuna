#include <uart.h>
#include "runtime.h"
#include "model_m2cgen_editado.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>

#define N 256

/*
Mede o tempo de inferencia do modelo usando o treelite e nao estando quantizado
*/

int main() {

    // Quando declarado assim ele não está a usar a RVV mas quando uso o Treelite está a usar
    const float factor = 64.0f;

    float predict_0[22] = {0.995264, 7.147018, 7.492387, -8.855679, 0.906971, 7.814970, 3.963229, 0.990296, 6.236029, 3.053773, -3.603837, -2.870728, -0.246930, -38.312561, 0.141983, -39.265800, 0.456184, 7.824003, 0.887755, 0.277458, 0.587890, 0.647729};
    float predict_1[22] = {0.995495, 6.608595, 7.509595, -8.855679, 0.904904, 6.892552, 3.883321, 0.990375, 6.236029, 3.053773, -3.603837, -2.870728, -0.246930, -38.312561, 0.141983, -39.265800, 0.456184, 7.824003, 0.883248, 0.277458, 0.587890, 0.647729};
    float predict_2[22] = {0.995466, 6.741468, 7.490896, -8.855679, 0.916869, 6.827318, 3.888844, 0.990170, 6.236029, 3.053773, -3.603837, -2.870728, -0.246930, -38.312561, 0.141983, -39.265800, 0.456184, 7.824003, 0.886380, 0.277458, 0.587890, 0.647729};
    float predict_3[22] = {0.664076, 0.086709, -0.402010, -2.644550, 0.096234, 0.412325, -0.224313, 0.790625, 1.812106, 1.476450, -2.678274, -2.999914, -0.135015, -1.507168, 0.887784, -1.119201, -0.006710, 1.698569, -0.016227, 0.650008, 0.199432, 0.217116};
    float predict_4[22] = {0.969723, 0.629610, 0.462875, -7.296391, 0.351667, 2.002511, 0.367929, 0.932622, 6.197341, 5.452390, -8.487554, -8.780581, -0.219929, -6.362501, 0.532146, -6.900409, 0.308277, 6.012288, 0.248544, 11.570929, 0.524440, 0.700716};
    float predict_5[22] = {0.985300, 9.966628, 3.126355, -3.108934, 0.177387, 2.737775, -0.906269, 0.971460, 4.861980, 4.921928, -3.501537, -3.740440, -0.260381, -6.251833, 0.574742, -6.628662, 0.201359, 4.747866, 0.190479, 0.177448, 0.617399, 0.466712};
    float predict_6[22] = {0.975015, -0.230807, 7.745011, -8.021235, 0.050347, -0.414486, 8.109954, 0.981394, 10.746413, 11.530061, -7.862754, -7.784527, -0.152119, -3.309562, 0.943331, -2.115222, 0.009037, 12.214792, 0.388116, 1.956680, 0.102302, 0.039050};
    float predict_7[22] = {0.980595, -0.260811, 4.472758, -8.021235, 0.086829, -0.249949, 6.015975, 0.985669, 10.746413, 11.530061, -7.862754, -7.784527, -0.152119, -3.309562, 0.941920, -2.115222, 0.009037, 12.214792, 0.479726, 1.956680, 0.102302, 0.056253};
    float predict_8[22] = {0.976722, 1.604454, 2.428144, -8.021235, 0.721482, 7.856691, 2.937498, 0.970942, 10.746413, 11.530061, -7.862754, -7.784527, -0.152119, -5.256049, 0.700708, -6.527109, 0.043899, 12.214792, 0.635424, 1.956680, 0.169547, 0.231678};
    float predict_9[22] = {0.953744, 0.446117, 13.107962, -10.039430, -0.059640, 0.323265, 7.509738, 0.942919, 9.857601, 9.407838, -11.434473, -11.506239, -0.134925, -4.030868, 0.869338, -5.349245, 0.187791, 8.564835, -0.356511, 0.413904, 0.305402, 0.283811};
    float predict_10[22] = {0.977842, 7.085422, 7.373282, -10.039430, 0.712802, 0.464358, 2.031176, 0.969264, 9.857601, 9.407838, -11.434473, -11.506239, -0.134925, -4.274892, 0.610911, -5.349245, 0.132149, 8.564835, 0.708189, 1.032324, 0.276383, 0.257368};
    float predict_11[22] = {0.981322, 6.693717, 7.242178, -10.039430, 0.780173, 0.528109, 0.853547, 0.980796, 9.857601, 9.407838, -11.434473, -11.506239, -0.134925, -4.274892, 0.610911, -5.349245, 0.120795, 8.564835, 0.795736, 1.032324, 0.276383, 0.257368};

    int16_t predict_int0[22];
    int16_t predict_int1[22];
    int16_t predict_int2[22];
    int16_t predict_int3[22];
    int16_t predict_int4[22];
    int16_t predict_int5[22];
    int16_t predict_int6[22];
    int16_t predict_int7[22];
    int16_t predict_int8[22];
    int16_t predict_int9[22];
    int16_t predict_int10[22];
    int16_t predict_int11[22];

    for(int i = 0; i < 22; i++){
        predict_int0[i] = (int16_t)(predict_0[i] * factor);
        predict_int1[i] = (int16_t)(predict_1[i] * factor);
        predict_int2[i] = (int16_t)(predict_2[i] * factor);
        predict_int3[i] = (int16_t)(predict_3[i] * factor);
        predict_int4[i] = (int16_t)(predict_4[i] * factor);
        predict_int5[i] = (int16_t)(predict_5[i] * factor);
        predict_int6[i] = (int16_t)(predict_6[i] * factor);
        predict_int7[i] = (int16_t)(predict_7[i] * factor);
        predict_int8[i] = (int16_t)(predict_8[i] * factor);
        predict_int9[i] = (int16_t)(predict_9[i] * factor);
        predict_int10[i] = (int16_t)(predict_10[i] * factor);
        predict_int11[i] = (int16_t)(predict_11[i] * factor);
    }

    int16_t result_number0, result_number1, result_number2, result_number3, result_number4, result_number5, result_number6, result_number7, result_number8, result_number9, result_number10, result_number11;
    
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
    result_number0 = score(predict_int0);
    result_number1 = score(predict_int1);
    result_number2 = score(predict_int2);
    result_number3 = score(predict_int3);
    result_number4 = score(predict_int4);
    result_number5 = score(predict_int5);
    result_number6 = score(predict_int6);
    result_number7 = score(predict_int7);
    result_number8 = score(predict_int8);
    result_number9 = score(predict_int9);
    result_number10 = score(predict_int10);
    result_number11 = score(predict_int11);

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
