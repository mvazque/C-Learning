/**
 * Include the NEGATE(x) macro defined in Short Answer Question 1 in a complete program and
 * run the program to confirm proper operation of the macro for various cases.
*/
#include <stdio.h>

#define NEGATE(x) -(x)

int main()
{
    int testNum1 = 2;
    int testNum2 = -16;
    float testNum3 = 5.21;
    float testNum4 = -4.11;

    printf("The negated version of %d is %d\n", testNum1, NEGATE(testNum1));
    printf("The negated version of %d is %d\n", testNum2, NEGATE(testNum2));
    printf("The negated version of %.2f is %.2f\n", testNum3, NEGATE(testNum3));
    printf("The negated version of %.2f is %.2f\n", testNum4, NEGATE(testNum4));
}