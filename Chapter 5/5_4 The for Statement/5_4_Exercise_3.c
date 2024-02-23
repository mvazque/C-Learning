/**
 * Write and run a C program that displays a table of 20 temperature conversions from Fahrenheit
 * to Celsius. The table should start with a Fahrenheit value of 20 degrees and be incremented
 * in values of 4 degrees. Recall that Celsius = (5.0/9.0) * (Fahrenheit - 32.0)
*/

#include <stdio.h>
#define MAXCOUNT 20
#define DEGREEINCREMENT 4

int main(void)
{
    float fahrenheit = 20.0, celsius;
    printf("Degrees Degrees\n");
    printf("FAHRENHEIT CELSIUS \n");
    printf("---------- -------\n");

    for(int i = 0; i < MAXCOUNT; i++)
    {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%5.2f%11.2f\n",fahrenheit, celsius );

        fahrenheit += DEGREEINCREMENT;
    }

    return 0;
}