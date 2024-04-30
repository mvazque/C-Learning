/**
 * Given an initial deposit of money denoted as deposit, a bank that pays interest
 * annually, the amount of money, amount at a time n years later is given by the formlua
 * amount = deposit * (1 + i) ^n where i is the interest rate as a decimal number (for example
 * 9.5% is 0.095).
 * Using this formula write a C program that determines the amount of money that will be 
 * available in four years if $10,000 is deposited in a bank that pays 10% interest
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float deposit = 10000.0;
    float interest = 0.01;
    float years = 4.0;

    float amount = deposit * pow((1 + interest), years);
    printf("The amount for a deposit of %f, with interest of %f over %f years is %f", deposit, interest, years, amount);

    return 0;
}