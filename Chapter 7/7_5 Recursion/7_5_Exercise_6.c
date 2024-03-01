/**
 * The following algorithm, discovered by Euclid, provides a simple means of determining the
 * greatest common divisor (GCD) of two positive integers a and b (the FCD is the largest number
 * that divides evenly into both numbers with no remainders)
 * 
 * a. Divide the larger number by the smaller and retain the remainder
 * b. Divide the smaller number by the remainder, again retaining the remainder
 * c. Continue dividing the prior remainder by the current remainder until the remainder is
 *    0 at which point the last non-0 remainder is the GCD.
 * 
 * Write a recursive function named gcd() that implements this algorithm
*/

#include <stdio.h>


int main()
{
    int gcd(int, int);
    int num1, num2, temp;

    printf("Please provide the two numbers to find the GCD (Greatest Common Divisor) of: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("The greatest common divisor of %d and %d is %d.\n", num1, num2, gcd(num2, num1));

    return 0;

}

int gcd(int smallerNum, int biggerNum)
{
    int remainder = biggerNum % smallerNum;

    if(0 == remainder)
    {
        return smallerNum;
    }
    else
    {
        return gcd(remainder, smallerNum );
    }
}