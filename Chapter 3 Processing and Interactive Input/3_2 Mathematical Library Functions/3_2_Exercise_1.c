/**
 * Write, compile and execute a C program that calculates 
 * and returns the fourth root of the number 81.0, which is 3.
 * 
 * Once verified find the fourth root of 1,728.896400
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float num = 1728.896400;
    float fourthRoot = pow(num, 0.25);

    printf("The fourth root of the number %f is %f.\n", num, fourthRoot);

    return 0;
}