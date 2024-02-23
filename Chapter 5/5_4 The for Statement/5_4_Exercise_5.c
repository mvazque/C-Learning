/**
 * Write and run a C program that accepts 10 individual values of gallons, one at a time, and 
 * converts each value entered to its liter equivalent before the next value is requested. Use a 
 * for loop in your program. There are 3.785 liters in 1 gallon.
*/

#include<stdio.h>

int main(void)
{
    #define MAXCOUNT 10
    float gallons;

    for(int i = 0; i < MAXCOUNT; i++)
    {
        printf("Please provide the amount of gallons to convert: ");
        scanf("%f", &gallons);

        printf("%.2f gallons is equal to %.3f liters.\n", gallons, gallons * 3.785);
    }

    return 0;
}