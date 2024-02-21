/**
 * The area of any triangle with sides a, b, and c can be computed using Herons formula
 * area = sqrt(s * (s - a) * (s - b) * (s - c)) where s = (a + b + c) / 2
 * 
 * Using these formulas write a C program that accepts values for the sides a, b, abd c from the
 * user. Then calculate and display the are for the case where the value of s(s-a)(s-b)(s-c) is
 * positive. If the value of the expression is negative your program should display a message
 * indicating that the three sides do not represent the sides of a triangle.
 * 
 * 
 * I am unsure of the origins of the formula but the values 1 15 10 are considered incorrect by
 * the program. S would be 13 which when doing s-b is 13 - 15 resulting in -2 and thus the expression
 * in the square root is a negative. Resulting in the message stating it isn't a triangle
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, s;

    printf("Please provide the three sides of a triangle separated by spaces: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    float sProduct = s * (s - a) * (s - b) * (s - c);
    float area;

    if(sProduct > 0)
    {
        area = sqrt(sProduct);
        printf("The area of the triangle is %f.\n", area);
    }
    else
        printf("The three sides entered do not represent a triangle.\n");
    
    return 0;
}