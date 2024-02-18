/**
 * Write a C program to convert temperature in degrees Fahrenheit to degrees Celsius.
 * The equation is Celsius = 5.0/9.0 * (Fahrenheit - 32.0)
 * Do the calculation for 98.6 degrees
*/

#include <stdio.h>

int main(void)
{
    float fahrenheit = 98.6;
    float celsius = (5.0/9.0) * (fahrenheit - 32.0);

    printf("The conversion of %f degrees fahrenheit to degrees Celsius is %f\n", fahrenheit, celsius);
    return 0;
}
