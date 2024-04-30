/**
 * Write a C program that first displays the following prompt
 * Enter the temperature in degrees Fahrenheit:
 * Have your program accept a value entered from the keyboard and convert the temperature
 * entered to degrees Celsius, using the equation Celsius = (5.0/9.0)*(Fahrenheit - 32.0)
 * Your program should then display the temperature in degrees Celsius using an 
 * appropriate output message
 * 
 * Compile and execute the program and verify the using the Fahreheit equivalent of the following 
 * 0 degrees Celsius = 32 F
 * 50 degrees Celsius = 122 F
 * 100 degrees Celsius = 212 F
 * 
 * When the program has been verified find the following values
 * Celsius  Fahrenheit
 * 45       113
 * 50       122
 * 55       131
 * 60       140
 * 65       149
 * 70       167
*/

#include <stdio.h>

int main(void)
{
    float fahrenheit;

    printf("Enter the temperature in degrees Fahrenheit:");
    scanf("%f", &fahrenheit);

    float celsius = (5.0 / 9.0 ) * (fahrenheit - 32.0);

    printf("The temperature %f degrees F is equivalent to %f degrees C.\n", fahrenheit, celsius);

    return 0;
}