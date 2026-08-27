#include "major1.h"


/* 
CSCE 3600
3/6/26
endian swap
swaps bytes of 32 bit unsigned int
B0 <---> B3
B1 <---> B2
*/

unsigned int endianSwap(unsigned int F) {


    unsigned int b0, b1, b2, b3;

    b0 = (F & 0x000000FF) << 24;
    
    b1 = (F & 0x0000FF00) << 8;
    
    b2 = (F & 0x00FF0000) >> 8;
    
    b3 = (F & 0xFF000000) >> 24;

    return b0 | b1 | b2 | b3;
}


