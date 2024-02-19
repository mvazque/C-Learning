/**
 * The number of bacteria B, in a certain culture that is subject to refrigeration can be
 * approximated by the equation B = 300000 * e ^(-0.032*t), where t is the time in hours that the 
 * culture has been refrigerated
 * Using this equation, write a C program that calculates the number of bacteria in the culture after
 * it has been refrigerated for 8 hours
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int time = 8;

    float bacteria = 300000 * exp(-0.032 * time);

    printf("The amount of bacteria in a culture that has been refrigerated for %d hours is %f.\n", time, bacteria);
}