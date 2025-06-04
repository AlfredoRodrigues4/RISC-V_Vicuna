#include <uart.h>
#include "runtime.h"
#include "processing.h"
#include "led.h"
#include <stddef.h>
#include <stdint.h>
//#include <riscv_vector.h>

// void quantize_function(double* floating_vector, int16_t* fixed_vector, int size_vectors){
// 	double aux = 0;
// 	for(int i = 0; i < size_vectors; i++){
// 		aux = floating_vector[i] * 64;
// 		fixed_vector[i] = (int16_t)aux;
// 	}
// }


int main() {



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
    }

    while(1);
    return 0;
}



