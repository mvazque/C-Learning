/**
 * Write a C program that stores the following prices in a global array: 9.92, 6.32, 12.63, 5.95,
 * 10.29. Your program should also create two automatic arrays named units and amounts,
 * each capable of storing 5 double precision numbers. Using a for loop and a scanf() function call
 * have your program accept five user-input numbers into the units array when the program is run. Your
 * program should store the product of the corresponding values in the prices and units arrays in the
 * amounts array (for example, amounts[1] = prices[1] * units[1]) and display the following output
 * 
 * Price Units Amount
 * ----- ----- ------
 * ...
 * 
 * ----- ----- -----
 * Total:        *
*/

#include <stdio.h>
#define NUMELEMENTS 5
float prices[NUMELEMENTS] = {9.92, 6.32, 12.63, 5.95, 10.29};

int main()
{
    int units[NUMELEMENTS];
    float amounts[NUMELEMENTS];
    float total = 0;

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("Please provide the number of units for item %d: ", i + 1);
        scanf("%d", &units[i]);

        amounts[i] = units[i] * prices[i];
        total += amounts[i];
    }

    printf("Price Units Amount\n");
    printf("----- ----- ------\n");
    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("%5.2f %5d %6.2f\n", prices[i], units[i], amounts[i]);
    }
    printf("----- ----- ------\n");
    printf("Total:      %.2f\n", total);
    
}