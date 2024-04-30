/**
 * If money is left in a particular bank for more than five years, the interest rate given by the
 * the bank is 7.5 percent, else the interest rate is 5.4 percent. Write a C program that uses
 * the scanf() function to accept the number of years into the variable numYrs and display the 
 * appropiate interest rate depending on the value input into numYrs
 * 
 * How many runs should you make for hte program written in Exercise 1a to verify that it is
 * operating correctly? What data should you input in each of the program runs?
 * 
 * Without worrying about validation and such one would need to test at least twice to get the
 * if statement and the else statement
 * 
*/

#include <stdio.h>

int main(void)
{
    int numYrs;

    printf("How many years has the money been in the bank? ");
    scanf("%d", &numYrs);

    float interestRate;
    if(numYrs > 5)
        interestRate = 7.5;
    else
        interestRate = 5.4;

    printf("The interest rate for your money is: %0.2f.\n", interestRate);

    return 0;
}