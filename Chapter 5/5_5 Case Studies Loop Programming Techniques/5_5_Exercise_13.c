/**
 * Write a C program that converts Fahrenheit to Celsius temperature in increments of 5 degrees.
 * The initial value of the Fahrenheit temperature and the total conversions to be made are to be
 * requested as user input during program execution. Recall that 
 * Celsius = (5.0/9.0) * (Fahrenheit - 32.0)
*/

#include <stdio.h>

int main(void)
{
    #define DEGREEINCREMENT 5
    int maxCount;
    float fahrenheit, celsius;

    printf("Please enter the starting Fahrenheit value: ");
    scanf("%f", &fahrenheit);

    printf("Please enter the number of conversion you would like to see: ");
    scanf("%d", &maxCount);


    printf("Degrees Degrees\n");
    printf("FAHRENHEIT CELSIUS \n");
    printf("---------- -------\n");

    for(int i = 0; i < maxCount; i++)
    {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%5.2f%11.2f\n",fahrenheit, celsius );

        fahrenheit += DEGREEINCREMENT;
    }

    return 0;
}