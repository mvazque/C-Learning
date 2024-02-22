/**
 * A quadratic equation is an equation that either has the form ax^2 + bx + c = 0 or an equation
 * that can be algebraically manipulated into this form. In this equation, x is the unknown
 * variable, and a, b, and c are known constants. Although the constants b and c can be any numbers
 * including 0, the value of the constant a cannot be 0 (if a is 0, the equation would become a 
 * linear equation in x). 
 * 
 * Examples of quadratic equations are
 * 5x^2 + 6x + 2 = 0
 * x^2 - 7x + 20 = 0
 * 34x^2 + 16 = 0
 * 
 * in the first equation a = 5, b = 6, and c = 2 in the second a = 1, b = -7 and c = 20
 * and in the third a = 34 b = 0 and c = 16.
 * 
 * The real roots of a quadratic equation can be calculated using the quadratic formula as follows
 * 
 * root one
 * (-b + sqrt(b^2 - 4*a*c))/(2*a)
 * 
 * root two
 * (-b - sqrt(b^2 - 4*a*c))/(2*a)
 * 
 * 
 * Using these equations write a C program to solve for the roots of a quadratic equation
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, root1, root2, sqrtCalc;

    printf("Please provide the three values for the quadratic formula: ");
    scanf("%f %f %f", &a, &b, &c);

    if(0 == a){
        printf("Invalid value for a (a can not be 0.\n)");
        return 0;
    }

    sqrtCalc = (b * b) - (4 * a * c);

    if(sqrtCalc < 0)
    {
        printf("No real roots exist or this formula.\n");
        return 0;
    }

    root1 = (-b + sqrt(sqrtCalc))/(2 * a);
    root2 = (-b - sqrt(sqrtCalc))/(2 * a);

    printf("The two roots for this quadratic formula are %f and %f.\n", root1, root2);

    return 0;
}
