/**
 * Write a C program that converts gallons to liters. The program should display gallons
 * from 10 to 20 in 1-gallon increments and the corresponding liter equivalents. Use the 
 * relationship that 1 gallon contains 3.785 liters.
*/

#include <stdio.h>
#define LITERSPERGALLON 3.785

int main(void)
{
    int gallons = 10;

    printf("GALLONS     LITERS\n");
    printf("-------------------------\n");
    while(gallons <= 20)
    {
        printf("%d gallons %7.3f liters\n", gallons, gallons * LITERSPERGALLON);
        gallons++;
    }
    return 0;
}