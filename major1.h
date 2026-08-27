#ifndef MAJOR1_H
#define MAJOR1_H


#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/* csce 3600, header file that has all the functions and libraries for the operations. */


unsigned int endianSwap(unsigned int F);
int countLeadingZeros(uint32_t num);
unsigned int rotate_right(unsigned int x, int n);
int parity(uint32_t x);


#endif
