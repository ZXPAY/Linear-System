#include "matrix.h"

float minusOnePow(uint32_t degree) {
	if (degree % 2 == 0) {
		return 1;
	}
	else {
		return -1;
	}
}

float *transpose(float *M, uint16_t row, uint16_t col) {
	float *new_M = (float *)malloc(sizeof(float)*row*col);
	for (uint16_t i = 0; i < row; i++) {
		for (uint16_t j = 0; j < col; j++) {
			new_M[i+j*row] = M[j+i*col];
		}
	}
	return new_M;
}

float *det(float *M, uint16_t row, uint16_t col) {
	float *return_data;
	if (row != col) return NULL;
	uint16_t n = row;
	if (n == 1) {
		return_data[0] = M[0];
		return return_data;
	}
	uint16_t *index_p = (uint16_t *)malloc(sizeof(uint16_t)*n);
	uint16_t *index_m = (uint16_t *)malloc(sizeof(uint16_t)*n);
	for (uint16_t c = 0; c < n; c++) {
		index_p[c] = c;
		index_m[c] = (n-1) - c;
	}
	uint16_t n_step = 1;
	for (uint16_t i = 1; i < n; i++) n_step *= i;
	
	float sum_p = 0;
	for (uint16_t step = 0; step < (uint16_t)(n_step / 2); step++) {
		uint16_t j = 0;
		float temp = 1;
		for (uint16_t i = 0; i < n; i++) {
			temp *= M[index_p[j] + i * col];
			if (index_p[j] + 1 >= n)
				index_p[j] = 1;
			else
				index_p[j]++;
			j++;
		}
		sum_p += temp;
	}

	float sum_m = 0;
	for (uint16_t step = 0; step < (uint16_t)(n_step / 2); step++) {
		uint16_t j = 0;
		float temp = 1;
		for (uint16_t i = 0; i < n; i++) {
			temp *= M[index_m[j] + i * col];
			if (index_m[j] == 0)
				index_m[j] = 1;
			else
				index_p[j]++;
			j++;
		}
		sum_p += temp;
	}


}

float *calculateCofactor(float *M, uint16_t row, uint16_t col) {

}

