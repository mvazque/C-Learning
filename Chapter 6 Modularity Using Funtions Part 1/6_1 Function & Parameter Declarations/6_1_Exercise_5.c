/**
 * Write a function named powfun() that raises an integer number passed to it to a positive
 * integer power and displays the result. THe positive integer should be the second value 
 * passed to the function.
*/

#include <stdio.h>

int main(void)
{
    void powFun(int, int);

    powFun(5, 3);

    return 0;
}

void powFun(int num, int power)
{
    int product = num;
    for(int i = 1; i < power; i++)
    {
        product *= num;
    }

    printf("%d to the power of %d is %d.\n", num, power, product);
}