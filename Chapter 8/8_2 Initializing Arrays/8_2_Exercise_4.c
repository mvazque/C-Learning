/**
 * Write a C program that uses a declaration statement to store the following numbers in an array
 * named rates: 18.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92
 * 
 * Your program should then locate and display both the minimum and maximum values of the array
*/

#include <stdio.h>

int main()
{
    #define NUMELEMENTS 9
    #define MAXVALUE 2147483647
    #define MINVALUE -2147483647
    float rates[NUMELEMENTS] = {18.24, 25.63, 5.94, 33.92, 
                                3.71, 32.84, 35.93, 18.24, 6.92};

    float minimum = MAXVALUE, maximum = MINVALUE;

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        float tempValue = rates[i];
        if(tempValue > maximum)
            maximum = tempValue;

        if(tempValue < minimum)
            minimum = tempValue;   
    }

    printf("The max value is %.2f and the min value is %.2f.\n", maximum, minimum);

    return 0;
}