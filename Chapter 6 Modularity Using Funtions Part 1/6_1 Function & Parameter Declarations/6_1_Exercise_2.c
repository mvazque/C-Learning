/**
 * Write a function named findAbs() that accepts a double precision number passed to it,
 * computes its absolute value, and displays the absolute value. The absolute value of a 
 * number is the number itself if the number is positive and the negative of the number if 
 * the number is negative
 * 
*/

#include <stdio.h>

int main(void)
{
    void findAbs(double, double);

    findAbs( 12.5121, -42.121);

    return 0;
}

void findAbs(double num1, double num2)
{
    if(num1 < 0)
        num1 *= -1;
    
    if(num2 < 0)
        num2 *= -1;

    printf("The absolute values for number 1 and 2 are %lf and %lf.\n", num1, num2);
}