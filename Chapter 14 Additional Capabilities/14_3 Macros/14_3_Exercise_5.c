/**
 * Include the MAX(x, y) macro defined in Short Answer Question 1 in a complete program and
 * run the program to confirm proper operation of the macro for various cases.
*/

#include <stdio.h>
#define MAX(x, y) ( (x) > (y)) ? (x) : (y)

int main()
{
    int testNum1_1 = 14;
    int testNum1_2 = 5;

    float testNum2_1 = 13.21;
    float testNum2_2 = 13.22;

    printf("The bigger of the two numbers between %d and %d is %d.\n", testNum1_1, testNum1_2, MAX(testNum1_1, testNum1_2));

    printf("The bigger of the two numbers between %.2f and %.2f is %.2f.\n", testNum2_1, testNum2_2, MAX(testNum2_1, testNum2_2));
}