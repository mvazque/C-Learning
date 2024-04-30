/**
 * Write a C function named change() that accepts a single-precision number and the addresses
 * of the integer variables named quarters, dimes, nickels, and pennies. The function should
 * determine the number of quarters, dimes, nickels and pennies in the number passed to it and
 * write these values directly into the respective variables declared in its calling function. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float change(float, int *, int *, int *, int *);
    int quarters, dimes, nickels, pennies;
    float total;

    printf("Please provide a total number to get change for: ");
    scanf("%f", &total);

    change(total, &quarters, &dimes, &nickels, &pennies);
    printf("The number of quarters is %d.\n", quarters);
    printf("The number of dimes is %d.\n", dimes);
    printf("The number of nickels is %d.\n", nickels);
    printf("The number of pennies is %d.\n", pennies);

    return 0;
}

float change(float total, int *quarters, int *dimes, int *nickels, int *pennies)
{
    total *= 100.00;
    *quarters = total / 25;
    total -= *quarters * 25;
    *dimes = total / 10;
    total -= *dimes * 10;
    *nickels = total / 5;
    total -= *nickels * 5;
    *pennies = round(total * 1);

    return total;
}