/**
 * Write a function hypotenuse() that accepts the lengths of two sides of a right triangle
 * as the parameters a and b respectively. The function should determine and display the hypotenuse
 * c of the triangle
 * 
 * Hint: Use Pythagoras theorem
 * c^2 = a^2 + b^2
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    void hypotenuse(float, float);
    float a, b;

    printf("Please provide the two sides to the triangle: "),
    scanf("%f %f", &a, &b);

    hypotenuse(a, b);
}

void hypotenuse(float a, float b)
{
    float c = sqrt(a * a + b * b);

    printf("The hypotenuse for a triangle with sides %f and %f is %f.\n", a, b, c);
}