#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stddef.h>
#include <riscv_vector.h>

#if defined(__clang__) || defined(__GNUC__)
#define LIKELY(x)   __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
#define LIKELY(x)   (x)
#define UNLIKELY(x) (x)
#endif

#define N_TARGET 1
#define MAX_N_CLASS 4

union Entry {
  int16_t qvalue;
};

int32_t get_num_target(void);
void get_num_class(int32_t* out);
int32_t get_num_feature(void);
const char* get_threshold_type(void);
const char* get_leaf_output_type(void);
int16_t predict(union Entry* data);
int argmax(int16_t *x, int size);
//int argmax_float(float *x, int size);



#endif
