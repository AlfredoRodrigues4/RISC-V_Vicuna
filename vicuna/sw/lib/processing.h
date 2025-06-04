#ifndef PROCESSING_H
#define PROCESSING_H

#include <stdint.h>
#include <inttypes.h>

#define vector_size 100

typedef struct {        //para cada SPI uma estrutura destas Ã© necessÃ¡ria
    uint16_t acc_x;
    uint16_t acc_y;
    uint16_t acc_z;
    uint16_t gyr_x;
    uint16_t gyr_y;
    uint16_t gyr_z;
    uint16_t temp;
} CanConv;

typedef struct {
    float x_acc;
    float y_acc;
    float z_acc;
} CanConv_accg;

typedef struct {
    float x_gyro;
    float y_gyro;
    float z_gyro;
} CanConv_gryog;

static volatile long *const ADDR_INIT_CONFIG   = (volatile long *const) 0xFF00000C;
static volatile long *const ADDR_INIT_STATUS   = (volatile long *const) 0xFF000010;
static volatile long *const ADDR_READ_CONFIG   = (volatile long *const) 0xFF000014;
static volatile long *const ADDR_READ_STATUS   = (volatile long *const) 0xFF000018;
static volatile long *const ADDR_REG0_S0       = (volatile long *const) 0xFF00001C;
static volatile long *const ADDR_REG1_S0       = (volatile long *const) 0xFF000020;
static volatile long *const ADDR_REG2_S0       = (volatile long *const) 0xFF000024;
static volatile long *const ADDR_REG3_S0       = (volatile long *const) 0xFF000028;
static volatile long *const ADDR_REG0_S1       = (volatile long *const) 0xFF00002C;
static volatile long *const ADDR_REG1_S1       = (volatile long *const) 0xFF000030;
static volatile long *const ADDR_REG2_S1       = (volatile long *const) 0xFF000034;
static volatile long *const ADDR_REG3_S1       = (volatile long *const) 0xFF000038;
static volatile long *const ADDR_REG0_S2       = (volatile long *const) 0xFF00003C;
static volatile long *const ADDR_REG1_S2       = (volatile long *const) 0xFF000040;
static volatile long *const ADDR_REG2_S2       = (volatile long *const) 0xFF000044;
static volatile long *const ADDR_REG3_S2       = (volatile long *const) 0xFF000048;
static volatile long *const ADDR_REG0_S3       = (volatile long *const) 0xFF00004C;
static volatile long *const ADDR_REG1_S3       = (volatile long *const) 0xFF000050;
static volatile long *const ADDR_REG2_S3       = (volatile long *const) 0xFF000054;
static volatile long *const ADDR_REG3_S3       = (volatile long *const) 0xFF000058;


void CAN_Conv_init();

void Read_Data(CanConv * CANconv_pu_spi3, CanConv * CANconv_pu_spi2, CanConv * CANconv_pu_spi1, CanConv * CANconv_pu_spi0, uint32_t *status);

void Buffer_acc_g(CanConv * CANconv_pu, CanConv_accg * CANconv_accg_pu);
void Buffer_gyro_g(CanConv * CANconv_pu, CanConv_gryog * CANconv_gyrog_pu);

void pre_pre_proc_vectors_acc(uint16_t* acc_vectors, double* acc_vectors_G, int flag_invert);

void pre_pre_proc_vectors_gyr(uint16_t* gyr_vectors, double* gyr_vectors_G, int flag_invert);

double max(double* vector);

double min(double* vector);

double mean(double* vector);

double kurt(double* vector);

double autocorr(double* vector);


#endif