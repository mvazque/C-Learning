/**
 * A value that is sometimes useful is the greatest common divisor (GCD) of two integers n1 and
 * n2, which is the largest integer that can be evenly divided into the two integers. A famous
 * mathematician, Euclid, discovered an efficient method to find the GCD of two integers more than
 * 2000 years ago. Right now, however, we'll settle for a stub. Write the integer functions 
 * stubgcd(n1, n2). Simply have it return a value that suggests it received the parameters correctly.
 * 
 * Hint: n1 + n2 is a good choice of return values. Why isn't n1/n2 a good choice?
 * Addition is better due to division having the possibility of dividing by 0. Summation
 * is also probably an easier function to do in your head.
*/

#include <stdio.h>

int main()
{
    int stubgcd(int, int);

    int num1, num2;

    printf("Please provide the two numbers to try and find the greatest common divisor of: ");
    scanf("%d %d", &num1, &num2);

    printf("The greatest common divisor is %d.\n", stubgcd(num1, num2));
}

int stubgcd(int num1, int num2)
{
    printf("The values received are %d and %d.\n", num1, num2);
    return num1 + num2;
}