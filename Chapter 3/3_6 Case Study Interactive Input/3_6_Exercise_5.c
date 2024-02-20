/**
 * Write, compile and execute a program that calculates and displays the fourth root of a
 * number entered by a user. Recall from elementary algebra that the fourth root of a number
 * can be found by raising the number to the 1/4 power
 * 
 * Verify your program bt calculating the fourth root of the following
 * 81       3
 * 16       2
 * 1        1
 * 0        0
 * 
 * When you have completed verification use your program to determine the fourth root of 
 * 42       2.5457
 * 121      3.3166
 * 256      4
 * 587      4.9222
 * 1240     5.9341
 * 16256    11.2915
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float number, fourthRoot;

    printf("Please provide a number to find the fourth root of: ");
    scanf("%f", &number);

    fourthRoot = pow(number, 0.25);

    printf("The fourth root of the number %5.2f is %5.4f\n", number, fourthRoot);

    return 0;
}