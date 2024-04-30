/**
 * The formula for calculating the are of a triangle with sides a,b and c can be calculated using
 * Heron's formula: area = sqrt(s * (s - a) * (s - b) * (s - c))
 * Where s = (a + b + c) /2
 * Using this formula, write, compile and execute a C program that calculates and displays the 
 * area of a triangle having sides of 3, 4 and 5 inches.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 3.0;
    float b = 4.0;
    float c = 5.0;

    float s = (a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s -c));

    printf("The area of a triangle with sides %f, %f and %f is %f.\n", a, b, c, area);

    return 0;
}