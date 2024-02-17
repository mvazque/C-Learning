/* Calculate the dollar amount in a piggy bank */

#include <stdio.h>

int main(void)
{
    int halfDollars = 0;
    int quarters = 17;
    int dimes = 19;
    int nickles = 10;
    int pennies = 42;

    int halfDollarAmount = halfDollars * 50;
    int quartersAmount = quarters * 25;
    int dimesAmount = dimes * 10;
    int nicklesAmount = nickles * 5;
    int penniesAmount = pennies;

    float dollarAmount = (halfDollarAmount + quartersAmount + dimesAmount + nicklesAmount + penniesAmount );
    printf("Dollar amount: $%2.2f\n", dollarAmount / 100);
    int dollars = dollarAmount / 100;
    int cents = dollarAmount - dollars * 100;

    printf("The total in the piggy bank is currently %d dollars and %d cents.\n",dollars, cents);
    return 0;
}