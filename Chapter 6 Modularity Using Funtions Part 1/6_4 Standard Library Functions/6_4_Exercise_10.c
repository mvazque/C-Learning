/**
 * Euclid's method for finding the GCD of two positive integers consists of the following steps
 * 
 * 1. Divide the larger number by the smaller and retain the remainder
 * 2. Divide the smaller number by the remainder, again retaining the remainder
 * 3. Continue dividing the prior remainder by the current remainder until the remainder is 0
 * at which point the last non-0 remainder is the GCD
 * 
 * For example
 * Integers 84 and 49
 * Step1: 84/49 yields a remainder of 35
 * Step2: 49/35 yields a remainder of 14
 * Step3: 35/14 yields a remainder of 7
 * step4: 14/7 yields a remainder of 0
 * 
 * The last non-0 remainder, which is 7 is the gcd of 84 and 49
 * 
 * 
 * Using Euclid's algorithm, replace the stub function written for exercise 9 with an actual function
 * that determines and returns the GCD of its two integer parameters
 * 
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
    int remainder1, remainder2, tempNum;
    tempNum = num1 + num2;
    num2 = (num1 < num2) ? num1 : num2;
    num1 = tempNum - num2;

    while(num1 % num2 != 0)
    {
        tempNum = num1 % num2;
        num1 = num2;
        num2 = tempNum;
    }
    
    return num2;
}