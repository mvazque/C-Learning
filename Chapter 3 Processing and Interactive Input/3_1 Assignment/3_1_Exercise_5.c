/**
 * Write a C program to calculate the dollar amount contained ina piggy bank.
 * 12 half dollars, 20 quarters, 32 dimes 45 nickles and 27 pennies
*/

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int halfDollars = 12;
    int quarters = 20;
    int dimes = 32;
    int nickles = 45;
    int pennies = 27;

    sum += halfDollars * 50;
    sum += quarters * 25;
    sum += dimes * 10;
    sum += nickles * 5;
    sum += pennies;

    float dollarTotal = (float) sum / 100.0;

    printf("The total in the piggy bank with %d half dollars, %d quarters, \n%d dimes, %d nickles and %d pennies is $%.2f\n", halfDollars, quarters, dimes, nickles, pennies, dollarTotal);
    return 0;
}