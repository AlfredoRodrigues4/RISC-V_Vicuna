#include <uart.h>
#include "runtime.h"
#include "processing.h"
#include "led.h"
#include <stddef.h>
#include <stdint.h>
#include "model_m2cgen_editado.h"
//#include <riscv_vector.h>

// void quantize_function(double* floating_vector, int16_t* fixed_vector, int size_vectors){
// 	double aux = 0;
// 	for(int i = 0; i < size_vectors; i++){
// 		aux = floating_vector[i] * 64;
// 		fixed_vector[i] = (int16_t)aux;
// 	}
// }


int main() {

    // uint16_t Data_NiclaSense_RL_ACC_X[100];
    // uint16_t Data_NiclaSense_RL_ACC_Z[100];
    // uint16_t Data_NiclaSense_RL_RATE_X[100];
    // uint16_t Data_NiclaSense_RL_RATE_Y[100];

    // uint16_t Data_NiclaSense_RR_ACC_X[100];
    // uint16_t Data_NiclaSense_RR_ACC_Y[100];
    // uint16_t Data_NiclaSense_RR_ACC_Z[100];
    // uint16_t Data_NiclaSense_RR_RATE_X[100];
    // uint16_t Data_NiclaSense_RR_RATE_Y[100];

    // uint16_t Data_NiclaSense_FR_ACC_X[100];
    // uint16_t Data_NiclaSense_FR_RATE_X[100];
    // uint16_t Data_NiclaSense_FR_RATE_Y[100];

    // uint16_t Data_NiclaSense_FL_ACC_Z[100];
    // uint16_t Data_NiclaSense_FL_RATE_X[100];
    // uint16_t Data_NiclaSense_FL_RATE_Z[100];
    // /////////

    // double G_Data_NiclaSense_RL_ACC_X[100];
    // double G_Data_NiclaSense_RL_ACC_Z[100];
    // double G_Data_NiclaSense_RL_RATE_X[100];
    // double G_Data_NiclaSense_RL_RATE_Y[100];

    // double G_Data_NiclaSense_RR_ACC_X[100];
    // double G_Data_NiclaSense_RR_ACC_Y[100];
    // double G_Data_NiclaSense_RR_ACC_Z[100];
    // double G_Data_NiclaSense_RR_RATE_X[100];
    // double G_Data_NiclaSense_RR_RATE_Y[100];

    // double G_Data_NiclaSense_FR_ACC_X[100];
    // double G_Data_NiclaSense_FR_RATE_X[100];
    // double G_Data_NiclaSense_FR_RATE_Y[100];

    // double G_Data_NiclaSense_FL_ACC_Z[100];
    // double G_Data_NiclaSense_FL_RATE_X[100];
    // double G_Data_NiclaSense_FL_RATE_Z[100];

    // double Data_NiclaSense_FR_RATE_Y_autocorr;
    // double Data_NiclaSense_RL_ACC_X_kurtosis;
    // double Data_NiclaSense_FL_ACC_Z_kurtosis;
    // double Data_NiclaSense_RL_RATE_X_min;
    // double Data_NiclaSense_RR_ACC_Z_autocorr;
    // double Data_NiclaSense_RR_ACC_X_kurtosis;
    // double Data_NiclaSense_FR_RATE_Y_kurtosis;
    // double Data_NiclaSense_RR_RATE_Y_autocorr;
    // double Data_NiclaSense_RR_RATE_X_max;
    // double Data_NiclaSense_FR_RATE_X_max;
    // double Data_NiclaSense_FR_RATE_X_min;
    // double Data_NiclaSense_FL_RATE_X_min;
    // double Data_NiclaSense_RR_ACC_Y_min;
    // double Data_NiclaSense_FR_RATE_Y_min;
    // double Data_NiclaSense_RR_ACC_Z_min;
    // double Data_NiclaSense_RL_RATE_Y_min;
    // double Data_NiclaSense_FR_ACC_X_max;
    // double Data_NiclaSense_RL_RATE_X_max;
    // double Data_NiclaSense_RL_ACC_Z_autocorr;
    // double Data_NiclaSense_FL_RATE_Z_max;
    // double Data_NiclaSense_RL_ACC_X_max;
    // double Data_NiclaSense_RR_ACC_X_max;

    // int16_t features_fixed_vector[22];

    // CanConv CANconv_pu_spi3;
	// CanConv CANconv_pu_spi2;
	// CanConv CANconv_pu_spi1;
	// CanConv CANconv_pu_spi0;

	// CanConv_accg CANconv_accg_spi2;
    // uint32_t status;
    volatile int delay;


    // uart_printf("\r\n ******************* HELLO WORLD! ******************* \r\n");
    // int led = 5;

    // for(int i = 0; i < 10; i++){
    
    //     define_led_value(1);
    //     led = get_led_value();
    //     uart_printf("valor do led: %d \r\n", led);

    //     for (delay = 0; delay < 100; delay++){

    //     }

    //     define_led_value(0);
    //     led = get_led_value();
    //     uart_printf("valor do led: %d \r\n", led);

    //     for (delay = 0; delay < 100; delay++){

    //     }
    // }
    
    // uart_printf("\r\n******************* NUMERO DE CICLOS *******************\r\n");
    // long time1,time2;
    // time1 = get_mcycle();
	// for (delay = 0; delay < 100; delay++){

    //     }
    // time2 = get_mcycle();
    // uart_printf("The operation took %d cycles\r\n",time2-time1);

    // time1 = get_mcycle();
	// for (delay = 0; delay < 1000; delay++){

    //     }
    // time2 = get_mcycle();
    // uart_printf("The operation took %d cycles\r\n",time2-time1);

    // time1 = get_mcycle();
	// for (delay = 0; delay < 10000; delay++){

    //     }
    // time2 = get_mcycle();
    // uart_printf("The operation took %d cycles\r\n",time2-time1);



    // CAN_Conv_init();
    // *ADDR_READ_CONFIG = 0;
    // for (delay = 0; delay < 500; delay++){

    // }
    // *ADDR_READ_CONFIG = 1;
	
	int led = 5;
	define_led_value(1);
	for (delay = 0; delay < 3000000; delay++){

        }
    while(1){
		uart_printf("hello world! \r\n");
		for (delay = 0; delay < 1000000; delay++){

        }

		define_led_value(1);
		led = get_led_value();
		uart_printf("valor do led: %d \r\n", led);

		for (delay = 0; delay < 1000000; delay++){

		}

		define_led_value(0);
		led = get_led_value();
		uart_printf("valor do led: %d \r\n", led);

		for (delay = 0; delay < 1000000; delay++){
		}


        // Read_Data(&CANconv_pu_spi3, &CANconv_pu_spi2, &CANconv_pu_spi1, &CANconv_pu_spi0, &status);
		// Buffer_acc_g(&CANconv_pu_spi2, &CANconv_accg_spi2);
		// CANconv_accg_spi2.x_acc = CANconv_accg_spi2.x_acc * 1000;
		// CANconv_accg_spi2.y_acc = CANconv_accg_spi2.y_acc * 1000;
		// CANconv_accg_spi2.z_acc = CANconv_accg_spi2.z_acc * 1000;
		
        // uint8_t spi3_status = (status & 0x000000FF);
		// uint8_t spi2_status = ((status & 0x0000FF00) >> 8);
		// uint8_t spi1_status = ((status & 0x00FF0000) >> 16);
		// uint8_t spi0_status = ((status & 0xFF000000) >> 24);
        
        // for (delay = 0; delay < 1000000; delay++){

        // }
        // uart_printf("status dos sensores: %d %d %d %d \r\n", spi0_status, spi1_status, spi2_status, spi3_status);
		// uart_printf("%d, %d, %d \r\n", (int)(CANconv_accg_spi2.x_acc), (int)CANconv_accg_spi2.y_acc, (int)CANconv_accg_spi2.z_acc);
		// uart_printf("%d, %d, %d \r\n", CANconv_pu_spi2.acc_x, CANconv_pu_spi2.acc_y, CANconv_pu_spi2.acc_z);
    }
/*
		for (int i = 0; i < 100; i++){
			// ele demora 4.5uS a ler os dados do IP AXI, logo aqui \E9 colocado 10 000uS para dar 10ms que sao 100Hz, porque os 4.5uS
			// s\E3o praticamente insignificantes
			for (delay = 0; delay < 1000; delay++);
//			XTime_GetTime(&tStart);

			Read_Data(&CANconv_pu_spi3, &CANconv_pu_spi2, &CANconv_pu_spi1, &CANconv_pu_spi0, &status);

			// sensor 0
			Data_NiclaSense_RL_ACC_X[i] = CANconv_pu_spi0.acc_z;
			Data_NiclaSense_RL_ACC_Z[i] = CANconv_pu_spi0.acc_y;
			Data_NiclaSense_RL_RATE_X[i] = CANconv_pu_spi0.gyr_z; //(* -1) (depois de passar int)
			Data_NiclaSense_RL_RATE_Y[i] = CANconv_pu_spi0.gyr_x; //(* -1) (depois de passar int)

			// sensor 1
			Data_NiclaSense_RR_ACC_X[i] = CANconv_pu_spi1.acc_z;
			Data_NiclaSense_RR_ACC_Y[i] = CANconv_pu_spi1.acc_x; // * -1
			Data_NiclaSense_RR_ACC_Z[i] = CANconv_pu_spi1.acc_y;
			Data_NiclaSense_RR_RATE_X[i] = CANconv_pu_spi1.gyr_z; // * -1
			Data_NiclaSense_RR_RATE_Y[i] = CANconv_pu_spi1.gyr_y; // * - 1

			// sensor 2
			Data_NiclaSense_FR_ACC_X[i] = CANconv_pu_spi2.acc_y;
			Data_NiclaSense_FR_RATE_X[i] = CANconv_pu_spi2.gyr_y; // * - 1
			Data_NiclaSense_FR_RATE_Y[i] = CANconv_pu_spi2.gyr_x;

			// sensor 3
			Data_NiclaSense_FL_ACC_Z[i] = CANconv_pu_spi3.acc_z;
			Data_NiclaSense_FL_RATE_X[i] = CANconv_pu_spi3.gyr_y; // *-1
			Data_NiclaSense_FL_RATE_Z[i] = CANconv_pu_spi3.gyr_z; // *-1

//			XTime_GetTime(&tEnd);
//			printf("Output took %.2f us.\n", 1.0 * (tEnd - tStart) / (COUNTS_PER_SECOND/1000000));
		}

		pre_pre_proc_vectors_acc(Data_NiclaSense_RL_ACC_X, G_Data_NiclaSense_RL_ACC_X, 0);
		pre_pre_proc_vectors_acc(Data_NiclaSense_RL_ACC_Z, G_Data_NiclaSense_RL_ACC_Z, 0);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_RL_RATE_X, G_Data_NiclaSense_RL_RATE_X, 1);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_RL_RATE_Y, G_Data_NiclaSense_RL_RATE_Y, 1);

		pre_pre_proc_vectors_acc(Data_NiclaSense_RR_ACC_X, G_Data_NiclaSense_RR_ACC_X, 0);
		pre_pre_proc_vectors_acc(Data_NiclaSense_RR_ACC_Y, G_Data_NiclaSense_RR_ACC_Y, 1);
		pre_pre_proc_vectors_acc(Data_NiclaSense_RR_ACC_Z, G_Data_NiclaSense_RR_ACC_Z, 0);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_RR_RATE_X, G_Data_NiclaSense_RR_RATE_X, 1);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_RR_RATE_Y, G_Data_NiclaSense_RR_RATE_Y, 1);

		pre_pre_proc_vectors_acc(Data_NiclaSense_FR_ACC_X, G_Data_NiclaSense_FR_ACC_X, 0);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_FR_RATE_X, G_Data_NiclaSense_FR_RATE_X, 1);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_FR_RATE_Y, G_Data_NiclaSense_FR_RATE_Y, 0);

		pre_pre_proc_vectors_acc(Data_NiclaSense_FL_ACC_Z, G_Data_NiclaSense_FL_ACC_Z, 0);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_FL_RATE_X, G_Data_NiclaSense_FL_RATE_X, 1);
		pre_pre_proc_vectors_gyr(Data_NiclaSense_FL_RATE_Z, G_Data_NiclaSense_FL_RATE_Z, 1);

	    Data_NiclaSense_RL_ACC_X_max 		= max(G_Data_NiclaSense_RL_ACC_X);
	    Data_NiclaSense_RL_ACC_X_kurtosis 	= kurt(G_Data_NiclaSense_RL_ACC_X);
	    Data_NiclaSense_RL_ACC_Z_autocorr 	= autocorr(G_Data_NiclaSense_RL_ACC_Z);
	    Data_NiclaSense_RL_RATE_X_max 		= max(G_Data_NiclaSense_RL_RATE_X);
	    Data_NiclaSense_RL_RATE_X_min 		= min(G_Data_NiclaSense_RL_RATE_X);
	    Data_NiclaSense_RL_RATE_Y_min 		= min(G_Data_NiclaSense_RL_RATE_Y);

	    Data_NiclaSense_RR_ACC_X_max 		= max(G_Data_NiclaSense_RR_ACC_X);
	    Data_NiclaSense_RR_ACC_X_kurtosis 	= kurt(G_Data_NiclaSense_RR_ACC_X);
	    Data_NiclaSense_RR_ACC_Y_min 		= min(G_Data_NiclaSense_RR_ACC_Y);
	    Data_NiclaSense_RR_ACC_Z_min 		= min(G_Data_NiclaSense_RR_ACC_Z);
	    Data_NiclaSense_RR_ACC_Z_autocorr 	= autocorr(G_Data_NiclaSense_RR_ACC_Z);
	    Data_NiclaSense_RR_RATE_X_max 		= max(G_Data_NiclaSense_RR_RATE_X);
	    Data_NiclaSense_RR_RATE_Y_autocorr 	= autocorr(G_Data_NiclaSense_RR_RATE_Y);

		Data_NiclaSense_FR_ACC_X_max 		= max(G_Data_NiclaSense_FR_ACC_X);
		Data_NiclaSense_FR_RATE_X_max 		= max(G_Data_NiclaSense_FR_RATE_X);
		Data_NiclaSense_FR_RATE_X_min 		= min(G_Data_NiclaSense_FR_RATE_X);
	    Data_NiclaSense_FR_RATE_Y_autocorr 	= autocorr(G_Data_NiclaSense_FR_RATE_Y);
	    Data_NiclaSense_FR_RATE_Y_kurtosis 	= kurt(G_Data_NiclaSense_FR_RATE_Y);
	    Data_NiclaSense_FR_RATE_Y_min 		= min(G_Data_NiclaSense_FR_RATE_Y);

	    Data_NiclaSense_FL_ACC_Z_kurtosis 	= kurt(G_Data_NiclaSense_FL_ACC_Z);
	    Data_NiclaSense_FL_RATE_X_min 		= min(G_Data_NiclaSense_FL_RATE_X);
	    Data_NiclaSense_FL_RATE_Z_max 		= max(G_Data_NiclaSense_FL_RATE_Z);

	    double features_floating_vector[22] = {	Data_NiclaSense_FR_RATE_Y_autocorr,
	    										Data_NiclaSense_RL_ACC_X_kurtosis,
												Data_NiclaSense_FL_ACC_Z_kurtosis,
												Data_NiclaSense_RL_RATE_X_min,
												Data_NiclaSense_RR_ACC_Z_autocorr,
												Data_NiclaSense_RR_ACC_X_kurtosis,
												Data_NiclaSense_FR_RATE_Y_kurtosis,
												Data_NiclaSense_RR_RATE_Y_autocorr,
												Data_NiclaSense_RR_RATE_X_max,
												Data_NiclaSense_FR_RATE_X_max,
												Data_NiclaSense_FR_RATE_X_min,
												Data_NiclaSense_FL_RATE_X_min,
												Data_NiclaSense_RR_ACC_Y_min,
												Data_NiclaSense_FR_RATE_Y_min,
												Data_NiclaSense_RR_ACC_Z_min,
												Data_NiclaSense_RL_RATE_Y_min,
												Data_NiclaSense_FR_ACC_X_max,
												Data_NiclaSense_RL_RATE_X_max,
												Data_NiclaSense_RL_ACC_Z_autocorr,
												Data_NiclaSense_FL_RATE_Z_max,
												Data_NiclaSense_RL_ACC_X_max,
												Data_NiclaSense_RR_ACC_X_max};

	    quantize_function(features_floating_vector, features_fixed_vector, 22);

	    int class_result = score(features_fixed_vector);

		uint8_t spi3_status = (status & 0x000000FF);
		uint8_t spi2_status = ((status & 0x0000FF00) >> 8);
		uint8_t spi1_status = ((status & 0x00FF0000) >> 16);
		uint8_t spi0_status = ((status & 0xFF000000) >> 24);

		uart_printf("*************************** nova leitura *************************** \r\n");
		uart_printf("feature: %d %d %d \r\n", features_fixed_vector[0], features_fixed_vector[1], features_fixed_vector[2]);
		uart_printf("feature: %d %d %d \r\n", (int)(features_floating_vector[0] * 1000), (int)(features_floating_vector[1] * 1000), (int)(features_floating_vector[2] * 1000));
		uart_printf("status dos sensores: %d %d %d %d \r\n", spi0_status, spi1_status, spi2_status, spi3_status);
		uart_printf("%d, %d, %d \r\n", CANconv_pu_spi2.acc_x, CANconv_pu_spi2.acc_y, CANconv_pu_spi2.acc_z);
		uart_printf("classe prevista: %d \n\r", class_result);
		uart_printf("\r\n");

    }
*/
    while(1);
    return 0;
}



