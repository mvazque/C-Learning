/**
 * Write a function named totamt() that accepts four integer arguments named quarters, dimes,
 * nickels and pennies, which represents the number of quarters, dimes, nickels, and pennies in a 
 * piggybank. The function should determine and return the dollar value of the number of quarters
 * , dimes, nickels, and pennies passed to it.
 * 
 * 
 * Include the function written for the exercise in a working program. The main() function
 * should correctly call and pass the values of 26 quarters, 80 dimes, 100 nickels, and 216
 * pennies to totamt. Do a hand calculation to verify the result
 * 
*/

#include <stdio.h>

int main()
{
    float totamt(int, int, int, int);

    printf("The total amount in the piggybank currently is %.2f.\n", totamt(26, 80, 100, 216));

    return 0;
}

float totamt(int quarters, int dimes, int nickels, int pennies)
{
    return quarters * 0.25 + dimes * 0.1 + nickels * 0.05 + pennies * 0.01;
}