/**
 * Write and run a C program that calculates and displays the amount of money available in a bank
 * account that initially has $1000 deposited in it and earns 8% interest a year. Your program
 * should display the amount available at the end of each year for a period of 10 years. Use the 
 * relationship that the money available at the end of each year equals the amount of money in the
 * account at the start of the year plus .08 times the amount available at the start of the year.
*/

#include <stdio.h>

int main(void)
{
    #define MAXYEARS 8
    #define INTERESTRATE 0.08

    float bankAmount = 1000;

    for(int i = 0; i < MAXYEARS; i++)
    {
        bankAmount *= 1.08;
        printf("At the end of year %d, the amount available is %.2f.\n", i + 1, bankAmount);
    }

    return 0;
}