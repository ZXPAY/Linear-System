#ifndef MATRIX_H
#define MATRIX_H

#include <stdint.h>

float minusOnePow(uint32_t degree);
float *transpose(float *M, uint16_t row, uint16_t col);
float *det(float *M, uint16_t row, uint16_t col);
float *calculateCofactor(float *M, uint16_t row, uint16_t col);


#endif
