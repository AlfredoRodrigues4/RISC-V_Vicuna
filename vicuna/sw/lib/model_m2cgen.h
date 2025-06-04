#ifndef MODEL_M2CGEN_H
#define MODEL_M2CGEN_H

#include <stdint.h>
#include <string.h>
//#include <math.h>

// Fun��o que calcula x^n / n! para n de 0 a 5
double my_exp(double expoente);

void softmax(double *x, int size, double *result);

void score(double * input, double * output);

#endif