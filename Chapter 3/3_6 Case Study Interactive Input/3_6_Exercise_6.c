/**
 * Write compile and execute a C program that calculates and displays the amount of
 * money A available in N years when an inital deposit of  dollars is deposited in a bank
 * account paying an annual interest rate of R percent. Use the relationship that
 * A = X * (1.0 + R/100) ^ N
 * The program should prompt the user to enter appropriate values and use
 * scanf statements to accept the data. In constructing your prompts, use strings such as
 * Enter the amount of the initial deposit
 * Verify the operation of your program by calculated by hand and using your program the
 * following test cases
 * 
 * $1000 invested for 10 years at 0% interest       1000
 * $1000 invested for 10 years at 6% interest       1790.85
 * 
 * When you have completed verification use your program for the following
 * $1000 invested for 10 years at 8% interest       2158.93
 * $1000 invested for 10 years at 10% interest      2593.74
 * $1000 invested for 10 years at 12% interest      3105.85
 * $5000 invested for 15 years at 8% interest       15860.86
 * $5000 invested for 15 years at 10% interest      20886.25
 * $5000 invested for 15 years at 12% interest      27367.83
 * $24 invested for 300 years at 4% interest        3091777.75
 * 
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    float initialM, interestR, yearsN, totalAmount;

    printf("Enter the amount of the initial deposit: ");
    scanf("%f", &initialM);

    printf("Enter the interest rate: ");
    scanf("%f", &interestR);

    printf("Enter the years to analyze: ");
    scanf("%f", &yearsN);

    totalAmount = initialM * pow(1 + interestR/100, yearsN);

    printf("The total amount after %f years for an initial deposit of %.2f\n", yearsN, initialM);
    printf("in an account with %% %.2f interest rate is %.2f.\n", interestR, totalAmount);

    return 0;
}