#include "major1.h"

// CSCE 3600, 3/6/2026
// This program uses a 32-bit integer to do a bitwise rotate-right operation.

unsigned int rotate_right(unsigned int num, int positions) {
    unsigned int result;

    if (positions == 0) {
        result = num;
    } else {
        result = (num >> positions) | (num << (32 - positions));
    }

    return result;

}
