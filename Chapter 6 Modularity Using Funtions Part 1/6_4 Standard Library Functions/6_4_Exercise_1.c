/**
 * Write a function named root4() that returns the fourth root of the argument passed to it
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float root4(float);
    float input;

    printf("Please provide a number to get the 4th root of: ");
    scanf("%f", &input);

    printf("The fourth root of %f is %f.\n", input, root4(input));
    return 0;
}


float root4(float num)
{
    return pow(num, 0.25);
}