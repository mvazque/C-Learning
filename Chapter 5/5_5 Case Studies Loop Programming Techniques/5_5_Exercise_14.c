/**
 * Modify the program for Exercise 6 in section 5.4 to initially prompt the user for the amount of
 * money originally deposited in the account
 * 
 * Modify the program to initially prompt the user for both the amount of money originally deposited
 * and the number of years that should be displayed
 * 
 * Modify the program to initially prompt for the amount of money originally deposited, the interest
 * rate to be used and the number of years to display
*/


#include <stdio.h>

int main(void)
{
    int maxYears;
    float bankAmount, interestRate;

    printf("Please provide the amount of money initially deposited: ");
    scanf("%f", &bankAmount);

    printf("Please provide the interest rate: ");
    scanf("%f", &interestRate);

    printf("Please provide the number of years to display: ");
    scanf("%d", &maxYears);

    for(int i = 0; i < maxYears; i++)
    {
        bankAmount *= (1 + interestRate);
        printf("At the end of year %3d, the amount available is %8.2f.\n", i + 1, bankAmount);
    }

    return 0;
}