/**
 * Write a function named squareIt() that computes the square of the value passed to it
 * and displays the result. The function should be capable of squaring numbers with decimal points.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    void squareIt(float);

    squareIt(9);

    return 0;
}

void squareIt(float num1)
{
    printf("The square root of the number %f, is %f.\n", num1, sqrt(num1));
}