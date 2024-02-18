/**
 * The work W in joules required to stretch a spring of distance d in meters is given by the equation
 * W = 0.5 * k * d ^ 2
 * Using the equation write a C program to determin the work required in stretching a spring .55 meters for
 * a spring with constant 300 n/m
*/

#include <stdio.h>

int main(void)
{
    float k = 300.0;
    float distance = 0.55;

    float work = 0.5 * k * distance * distance;

    printf("The work needed to move a spring of coefficient %.0f a distance of %f is %f.\n", k, distance, work);

    return 0;
}