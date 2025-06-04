#include "processing.h"
#include <stdint.h>
#include <inttypes.h>


//vai configurar os 4 SPIs ao mesmo tempo
void CAN_Conv_init() {

	uint32_t busy_aux;
	volatile int delay;
    
	*ADDR_INIT_CONFIG = 0;
	
    for (delay = 0; delay < 10000; delay++){

	}
    
	*ADDR_INIT_CONFIG = 1;
    for (delay = 0; delay < 1000; delay++){

	}

	do{
		busy_aux =  (*ADDR_INIT_STATUS);
	}while(busy_aux != 0x00000000);
	
	*ADDR_INIT_CONFIG = 0;
}

void Read_Data(CanConv * CANconv_pu_spi3, CanConv * CANconv_pu_spi2, CanConv * CANconv_pu_spi1, CanConv * CANconv_pu_spi0, uint32_t *status){

	uint32_t reg0_s0;
	uint32_t reg1_s0;
	uint32_t reg2_s0;
	uint32_t reg3_s0;

	uint32_t reg0_s1;
	uint32_t reg1_s1;
	uint32_t reg2_s1;
	uint32_t reg3_s1;

	uint32_t reg0_s2;
	uint32_t reg1_s2;
	uint32_t reg2_s2;
	uint32_t reg3_s2;

	uint32_t reg0_s3;
	uint32_t reg1_s3;
	uint32_t reg2_s3;
	uint32_t reg3_s3;

	reg0_s0 = (*ADDR_REG0_S0);
	reg1_s0 = (*ADDR_REG1_S0);
	reg0_s1 = (*ADDR_REG0_S1);
	reg1_s1 = (*ADDR_REG1_S1);
	reg0_s2 = (*ADDR_REG0_S2);
	reg1_s2 = (*ADDR_REG1_S2);
	reg0_s3 = (*ADDR_REG0_S3);
	reg1_s3 = (*ADDR_REG1_S3);

	reg2_s0 = (*ADDR_REG2_S0);
	reg3_s0 = (*ADDR_REG3_S0);
	reg2_s1 = (*ADDR_REG2_S1);
	reg3_s1 = (*ADDR_REG3_S1);
	reg2_s2 = (*ADDR_REG2_S2);
	reg3_s2 = (*ADDR_REG3_S2);
	reg2_s3 = (*ADDR_REG2_S3);
	reg3_s3 = (*ADDR_REG3_S3);


	//mede aceleracao para o SPI0, neste caso sao os bits menos significativos
	CANconv_pu_spi0->acc_x = ((reg0_s0 & 0xFFFF0000) >> 16);
	CANconv_pu_spi0->acc_y = ((reg0_s0 & 0x0000FFFF));
	CANconv_pu_spi0->acc_z = ((reg1_s0 & 0xFFFF0000) >> 16);
	*status = ((reg1_s0 & 0x000000FF) << 24);

	//mede aceleracao para o SPI1, neste caso sao os bits menos significativos
	CANconv_pu_spi1->acc_x = ((reg0_s1 & 0xFFFF0000) >> 16);
	CANconv_pu_spi1->acc_y = ((reg0_s1 & 0x0000FFFF));
	CANconv_pu_spi1->acc_z = ((reg1_s1 & 0xFFFF0000) >> 16);
	*status |= ((reg1_s1 & 0x000000FF) << 16);

	//mede aceleracao para o SPI2, neste caso sao os bits menos significativos
	CANconv_pu_spi2->acc_x = ((reg0_s2 & 0xFFFF0000) >> 16);
	CANconv_pu_spi2->acc_y = ((reg0_s2 & 0x0000FFFF));
	CANconv_pu_spi2->acc_z = ((reg1_s2 & 0xFFFF0000) >> 16);
	*status |= ((reg1_s2 & 0x000000FF) << 8);

	//mede aceleracao para o SPI3, neste caso sao os bits menos significativos
	CANconv_pu_spi3->acc_x = ((reg0_s3 & 0xFFFF0000) >> 16);
	CANconv_pu_spi3->acc_y = ((reg0_s3 & 0x0000FFFF));
	CANconv_pu_spi3->acc_z = ((reg1_s3 & 0xFFFF0000) >> 16);
	*status |= (reg1_s3 & 0x000000FF);

	CANconv_pu_spi0->gyr_x = ((reg2_s0 & 0xFFFF0000) >> 16);
	CANconv_pu_spi0->gyr_y = ((reg2_s0 & 0x0000FFFF));
	CANconv_pu_spi0->gyr_z = ((reg3_s0 & 0xFFFF0000) >> 16);

	CANconv_pu_spi1->gyr_x = ((reg2_s1 & 0xFFFF0000) >> 16);
	CANconv_pu_spi1->gyr_y = ((reg2_s1 & 0x0000FFFF));
	CANconv_pu_spi1->gyr_z = ((reg3_s1 & 0xFFFF0000) >> 16);

	CANconv_pu_spi2->gyr_x = ((reg2_s2 & 0xFFFF0000) >> 16);
	CANconv_pu_spi2->gyr_y = ((reg2_s2 & 0x0000FFFF));
	CANconv_pu_spi2->gyr_z = ((reg3_s2 & 0xFFFF0000) >> 16);

	CANconv_pu_spi3->gyr_x = ((reg2_s3 & 0xFFFF0000) >> 16);
	CANconv_pu_spi3->gyr_y = ((reg2_s3 & 0x0000FFFF));
	CANconv_pu_spi3->gyr_z = ((reg3_s3 & 0xFFFF0000) >> 16);

//	printf("Status2 em HX: 0x%08X\r\n", reg1_s2);
//	printf("Status total concatenado em HX: 0x%08X\r\n", *status);
}

void Buffer_acc_g(CanConv * CANconv_pu, CanConv_accg * CANconv_accg_pu){

	int factor = 8192; //Depende do range do sensor

	CANconv_accg_pu->x_acc = ((int16_t)CANconv_pu->acc_x);
	CANconv_accg_pu->y_acc = ((int16_t)CANconv_pu->acc_y);
	CANconv_accg_pu->z_acc = ((int16_t)CANconv_pu->acc_z);

	CANconv_accg_pu->x_acc /= factor;
	CANconv_accg_pu->y_acc /= factor;
	CANconv_accg_pu->z_acc /= factor;
}

void Buffer_gyro_g(CanConv * CANconv_pu, CanConv_gryog * CANconv_gyrog_pu){

	int factor = 262.144;

	if(CANconv_pu->gyr_x > 32767) {
		CANconv_pu->gyr_x = CANconv_pu->gyr_x - 65536;
	}
	if(CANconv_pu->gyr_y > 32767) {
		CANconv_pu->gyr_y = CANconv_pu->gyr_y - 65536;
	}
	if(CANconv_pu->gyr_z > 32767) {
		CANconv_pu->gyr_z = CANconv_pu->gyr_z - 65536;
	}

	CANconv_gyrog_pu->x_gyro = ((int16_t)CANconv_pu->gyr_x);
	CANconv_gyrog_pu->y_gyro = ((int16_t)CANconv_pu->gyr_y);
	CANconv_gyrog_pu->z_gyro = ((int16_t)CANconv_pu->gyr_z);

	CANconv_gyrog_pu->x_gyro /= factor;
	CANconv_gyrog_pu->y_gyro /= factor;
	CANconv_gyrog_pu->z_gyro /= factor;

}


void pre_pre_proc_vectors_acc(uint16_t* acc_vectors, double* acc_vectors_G, int flag_invert){

	int acc_factor = 8192;
	int16_t aux = 0;
	for(int i = 0; i < vector_size; i++){
		aux = (int16_t)acc_vectors[i];
		if(flag_invert == 1){
			aux = aux * (-1);
		}
		acc_vectors_G[i] = aux / acc_factor;
	}
}

void pre_pre_proc_vectors_gyr(uint16_t* gyr_vectors, double* gyr_vectors_G, int flag_invert){

	int gyr_factor = 262.144;
	int16_t aux = 0;
	for(int i = 0; i < vector_size; i++){
		aux = (int16_t)gyr_vectors[i];
		if(flag_invert == 1){
			aux = aux * (-1);
		}
		gyr_vectors_G[i] = aux / gyr_factor;
	}
}

double max(double* vector){

    double max_value = vector[0];
    for (int i = 0; i < vector_size; i++) {
        if(vector[i] > max_value){
            max_value = vector[i];
        }
    }
    return max_value;
}

double min(double* vector){

    double min_value = vector[0];
    for (int i = 0; i < vector_size; i++) {
        if(vector[i] < min_value){
            min_value = vector[i];
        }
    }
    return min_value;
}

double mean(double* vector){

    double sum_values = 0;
    for (int i = 0; i < vector_size; i++) {
        sum_values = sum_values + vector[i];
    }
    return (double)sum_values / vector_size;
}

double kurt(double* vector){

    double aux_signal = 0;
    double div_signal = 0;
    double mean_value = 0;
    double numerator = 0;
    double denominator = 0;
    double aux_return = 0;

    mean_value = mean(vector);
    for (int i = 0; i < vector_size; i++) {
        aux_signal = (vector[i] - mean_value);
        denominator = denominator + (aux_signal * aux_signal);
        numerator = numerator + (aux_signal * aux_signal * aux_signal * aux_signal);
    }
    numerator = numerator / vector_size;
    denominator = denominator / vector_size;

    div_signal = numerator / (denominator * denominator);
    aux_return = div_signal - 3;
    return aux_return;
}

double autocorr(double* vector) {

    double mean_value = 0;
    double variance = 0;
    double autocov = 0;
    double aux_return = 0;

    mean_value = mean(vector);
    for (int i = 0; i < vector_size; i++) {
        variance = variance + ((vector[i] - mean_value) * (vector[i] - mean_value));
    }
    variance = variance / vector_size;

    for (int i = 0; i < vector_size - 1; i++) {
        autocov = autocov + ((vector[i] - mean_value) * (vector[i + 1] - mean_value));
    }
    autocov = autocov / vector_size;
    aux_return = autocov / variance;
    return aux_return;
}
