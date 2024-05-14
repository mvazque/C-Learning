/**
 * Include the CIRCUM(r) macro defined in Short Answer Question 1 in a complete program and
 * run the program to confirm proper operation of the macro for various cases.
*/

#include <stdio.h>
#define CIRCUM(r) (2.0 * 3.1416 * (r))

int main()
{
    int radius1 = 2;
    int radius2 = 10;

    float radius3 = 3.15;
    float radius4 = 7.12;

    printf("The circumference of a circle with radius %d is %.2f\n", radius1, CIRCUM(radius1));
    printf("The circumference of a circle with radius %d is %.2f\n", radius2, CIRCUM(radius2));
    printf("The circumference of a circle with radius %.2f is %.2f\n", radius3, CIRCUM(radius3));
    printf("The circumference of a circle with radius %.2f is %.2f\n", radius4, CIRCUM(radius4));
}