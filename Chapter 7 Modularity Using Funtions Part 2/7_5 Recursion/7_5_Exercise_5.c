/**
 * The value of x ^ n can be defined recursively as
 * 
 * x ^ 0 = 1
 * x^n = x * x^(n-1)
 * 
 * Write a recursive function that returns the computes and returns the value of x^n.
 * 
 * Rewrite the function so it uses repetition to calculate x ^ n
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int recursPow(int, int);

    int power, number;

    printf("Please provide the number to raise to a power: ");
    scanf("%d", &number);

    printf("Please provide the power you would like to see: ");
    scanf("%d", &power);

    printf("%d to the power %d is %d.\n", number, power, recursPow(number, power));
    
    return 0;
}

int recursPow(int number, int power)
{
    if( 0 == power )
    {
        return 1;
    }
    else
    {
        return number * recursPow(number, power - 1);
    }
}