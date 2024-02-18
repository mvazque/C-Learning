/**
 * Write a C program to calculate the distance, in feet of a trip that is 2.36 miles long.
 * 1 mile = 5280 feet
*/

#include <stdio.h>

int main(void)
{
    float miles = 2.36;
    float feet = miles * 5280.0;

    printf("The number of feet in %f miles is %f\n", miles, feet);

    return 0;
}