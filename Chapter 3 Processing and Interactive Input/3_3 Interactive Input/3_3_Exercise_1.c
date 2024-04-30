/**
 * Write a C program that displays the following prompt.
 * Enter the radius of a circle:
 * After accepting a value for the radius, your program 
 * should calculate and display the circumference of the circle
 * circumference = 2 * 3.1416 * radius
 * 
 * 
 * Check the value displayed by the program written for the previous exercise by calculating
 * the result manually.
 * After that complete the following table
 * 
 * Radius       Circumference
 * 1.0          6.2832
 * 1.5          9.4248
 * 2.0          12.5664
 * 2.5          15.708
 * 3.0          18.8496
 * 3.7          23.247841
*/

#include <stdio.h>

int main(void)
{
    float radius;

    printf("Enter the radius of a circle:");
    scanf("%f", &radius);

    float circumference = 2 * 3.1416 * radius;

    printf("A circle of radius %f inches has a circumference of %f inches.\n", radius, circumference);

    return 0;
}