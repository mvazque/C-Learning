/**
 * Write a C program that accepts a number followed by one space and then a letter. If the
 * letter following the number is f, the program is to treat the number entered as a temperature
 * in degrees Fahrenheit, convert the number to the equivalent degrees Celsius, and print a suitable
 * display message. If the letter following the number is c, the program is to treat the number
 * entered as a temperature in Celsius, convert the number to the equivalent degrees Fahrenheit, and
 * print a suitable display message. If the letter is neither f nor c, the program should print 
 * a message indicating that the data entered is incorrect and terminate. Use an id-else chain in
 * your program and make use of the conversion formulas
 * 
 * Celsius = (5.0/9.0) * (Fahrenheit - 32.0);
 * Fahrenheit = (9.0/5.0) * Celsius + 32.0;
*/

#include <stdio.h>

int main(void)
{
    float temp, convertedTemp;
    char degrees;

    printf("Please provided the degrees as well as the unit (c or f) separated by a space: ");
    scanf("%f %c", &temp, &degrees);

    if('f' == degrees)
    {
        convertedTemp = (5.0/9.0) * (temp - 32.0);
        printf("The converted temperature is %.2f degrees Celsius.\n", convertedTemp);
    }
    else if('c' == degrees)
    {
        convertedTemp = (9.0/5.0) * temp + 32.0;
        printf("The converted temperature is %.2f degrees Fahrenheit.\n", convertedTemp);
    }
    else
        printf("Please input either f or c for the degrees.\n");

    return 0;
}