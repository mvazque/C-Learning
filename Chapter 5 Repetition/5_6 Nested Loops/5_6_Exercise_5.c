/**
 * Write a C program that calculates and displays the yearly amount available if $1000 is invested
 * in a bank account for 10 years. Your program should display the amounts available for interest 
 * rates from 6% to 12% inclusively at 1% increments. Use a nested loop, with the outer loop
 * having a fixed count of 7 and the inner loop a fixed count of 10. The first iteration of the
 * outer loop should use an interest rate of 6 percent and display the amount of money available
 * at the end of the first 10 years. In each subsequent pass through the outer loop, the interest
 * rate should be increased by 1%. Use the relationship that the money available at the end of 
 * each year equals the amount of money in the account at the start of the year plus the interest
 * rate times the amount available at the start of the year
*/


#include <stdio.h>

int main(void)
{
    #define INITIALAMOUNT 1000
    #define OUTERCOUNT 7
    #define INNERCOUNT 10

    float amountAvailable, interestRate;

    for(int i = 0; i < OUTERCOUNT; i++)
    {
        amountAvailable = INITIALAMOUNT;
        interestRate = 1.0 + (6.0 + i) / 100;
        printf("Interest Rate %.2f\n\n", interestRate);
        for(int j = 0; j < INNERCOUNT; j++)
        {
            amountAvailable *= interestRate;
            printf("%10.2f\n", amountAvailable);
        }
        printf("--------------\n");
    }
    return 0;
}