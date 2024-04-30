/**
 * Write a C program to calculate the volume of a pool.
 * volume = length * width * depth
 * Assumptions
 * length = 25
 * width = 10
 * depth = 6
*/
#include <stdio.h>

int main(void)
{
    int length = 25, width = 10, depth = 6;
    int volume = length * width * depth;

    printf("The volume of a pool of length %d, width %d and depth %d is %d.\n", length, width, depth, volume);
}