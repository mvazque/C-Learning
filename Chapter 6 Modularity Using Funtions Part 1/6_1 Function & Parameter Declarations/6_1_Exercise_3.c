/**
 * Write a function called mult() hat accepts two floating-point numbers as arguments, 
 * multiplies these two numbers and displays the results.
*/

#include <stdio.h>

int main(void)
{
    void mult(float, float);

    mult(20.5, 4.5);

    return 0;
}

void mult(float num1, float num2)
{
    printf("The product of %f and %f is %f.\n", num1, num2, num1 * num2);
}