/**
 * Write the function named payment() that has three parameters named principal,
 * which is hte amount financed; inRate, which is the monthly interest rate;
 * andmonths which is the number of months the loan is for. The function should return the 
 * monthly payment according to the following formula
 * 
 * Payment = Principal/((1/intRate) - (1/(1 + intRate)^months));
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float payment(float, float, float);

    float principal, intRate, months;

    printf("Please provide the value of the principal: ");
    scanf("%f", &principal);

    printf("Please provide the value of the interest rate: ");
    scanf("%f", &intRate);

    printf("Please provide the number of months for the loan: ");
    scanf("%f", &months);

    printf("The monthly payment for a the loan is $%.2f.\n", payment(principal, intRate, months));
}

float payment(float principal, float intRate, float months)
{
    return principal/((1/intRate) - (1/(pow(1 + intRate, months))));
}