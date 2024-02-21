/**
 * The interest rate used on funds deposited in a bank is determined by the amount of time
 * the money is left on deposit. For a particular bank the following shedule is used. Write a 
 * C program that accepts the time that funds are left on deposit and displays the interest
 * rate corresponding to the time entered
 * 
 * yearsDeposited >= 5 years                0.045
 * 4 years <= yearsDeposited < 5 years      0.04
 * 3 years <= yearsDeposited < 4 years      0.035
 * 2 years <= yearsDeposited < 3 years      0.03
 * 1 years <= yearsDeposited < 2 years      0.025
 * yearsDeposited < 1 year                  0.02
*/

#include <stdio.h>

int main(void)
{
    float yearsDeposited;

    printf("Please enter the number of years your money has been deposited: ");
    scanf("%f", &yearsDeposited);

    float interestRate;
    if(yearsDeposited >= 5)
        interestRate = 0.045;
    else if(yearsDeposited >= 4)
        interestRate = 0.04;
    else if(yearsDeposited >= 3)
        interestRate = 0.035;
    else if(yearsDeposited >= 2)
        interestRate = 0.03;
    else if(yearsDeposited >= 1)
        interestRate = 0.025;
    else if(yearsDeposited < 1)
        interestRate = 0.02;
    
    printf("The interest rate for your money is %.3f.\n", interestRate);

    return 0;

}