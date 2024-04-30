/**
 * Write a C program that declares three one-dimensional arrays named price, quantity, and amount
 * Each array should be capable of holding 10 elements. Using a for loop, input values for the 
 * price and quantity arrays. The entries in the amount array should be the product of the 
 * corresponding values in the price and quantity arrays (this amount[i] = quantity[i] * price[i]);
 * After all of the data ha been entered, display the following output
 * 
 * Quantity Price Amount
 * -------- ----- ------
 * 
 * Under each column heading display the appropriate value.
*/

#include <stdio.h>

int main()
{
    #define NUMELEMENTS 10
    float price[NUMELEMENTS], amount[NUMELEMENTS];
    int quantity[NUMELEMENTS];

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("Please provide an item price and quantity: ");
        scanf("%f %d", &price[i], &quantity[i]);

        amount[i] = price[i] * quantity[i];
    }

    printf("Quantity    Price    Amount\n");
    printf("--------    -----    ------\n");

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("%8d %8.2f %8.2f\n", quantity[i], price[i], amount[i]);
    }

    return 0;
}