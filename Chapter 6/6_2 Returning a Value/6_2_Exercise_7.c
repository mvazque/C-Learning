/**
 * A second-degree polynomial in x is given by the expression ax^2 + bx + c, where a, b, and c are
 * known numbers in and a is not equal to 0. Write a C function named polyTwo(a,b,c,x) that computes
 * and returns the  value of a second-degree polynomial for any passed values of a,b,c, and x
 * 
 * 
 * Include the function written in the exercise in a working program. Make sure your function is
 * called from main() and correctly returns a value to main(). Have main() display the value
 * returned. Test the function by passing various data to it
*/

#include <stdio.h>

int main()
{
    float polyTwo(float, float, float, float);
    float a, b, c, x, y;

    printf("Please provide the values of the polynomial ax^2 + bx + c (a, b, c and x): ");
    scanf("%f %f %f %f", &a, &b, &c, &x);

    printf("The y value for polynomial %.3f * %.3f ^ 2 + %.3f * %.3f + %.3f is %.3f.\n", a, x, b, x, c, polyTwo(a, b, c, x));
}

float polyTwo(float a, float b, float c, float x)
{
    return a * x * x + b * x + c;
}