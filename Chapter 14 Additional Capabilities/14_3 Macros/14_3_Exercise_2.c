/**
 * Include the ABSVAL(x) macro defined in Short Answer Question 1 in a complete program and
 * run the program to confirm proper operation of the macro for various cases.
*/

#include <stdio.h>
#define ABSVAL(x) ((x) < 0 ? (-x) : (x))

int main()
{
    int testNum1 = 2;
    int testNum2 = -16;
    float testNum3 = 5.21;
    float testNum4 = -4.11;

    printf("The absolute value of %d is %d\n", testNum1, ABSVAL(testNum1));
    printf("The absolute value of %d is %d\n", testNum2, ABSVAL(testNum2));
    printf("The absolute value of %.2f is %.2f\n", testNum3, ABSVAL(testNum3));
    printf("The absolute value of %.2f is %.2f\n", testNum4, ABSVAL(testNum4));
}