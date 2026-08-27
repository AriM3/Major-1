#include "major1.h"

/*
 Task: Parity 3/6/26
 Description:
 Computes the parity of a 32-bit integer.
 Returns:
 0 -> even number of 1 bits
 1 -> odd number of 1 bits
*/



int parity(uint32_t x) {




    int plus = 0;


    while (x !=0) {


        plus ^= (x & 1);

        x = x >> 1;
    }

    return plus;
}
