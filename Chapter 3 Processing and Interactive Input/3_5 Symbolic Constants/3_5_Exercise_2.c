/**
 * Determine the purpose of the program below. Then rewrite it using #define statements
 * for appropriate literals
 * 
 * #include <stdio.h>
 * int main()
 * {
 *  float prime, amount, interest;
 *  prime = 0.08; // prime interest rate
 *  printf("\nEnter the amount: ");
 *  scanf("%f", &amount);
 *  interest = prime * amount; 
 *  printf("\nThe interest earned is %f dollars.\n", interest);
 * 
 *  return 0;
 * }
*/

#include <stdio.h>
#define PRIME_INTEREST_RATE 0.08

int main()
{
    float amount, interest;
    printf("\nEnter the amount: ");
    scanf("%f", &amount);
    interest = PRIME_INTEREST_RATE * amount;
    printf("\nThe interest earned is %f dollars.\n", interest);

    return 0;
}