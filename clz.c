//Program: Counting Leading Zero's
//Program Description: This program (clz.c) is the source code for Group 8's Major 1 Project 3/6/26

#include <stdio.h>
#include <stdint.h>

int countLeadingZeros(uint32_t num)
{
    if (num == 0)
    {
        return 32;
    }

    int count = 0;
    uint32_t mask = 1U << 31;

    while ((num & mask) == 0)
    {
        count++;
        mask = mask >> 1;
    }

    return count;
}

