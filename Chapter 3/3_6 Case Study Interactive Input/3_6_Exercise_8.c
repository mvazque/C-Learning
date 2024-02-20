/**
 * The roads of Kansas are laid out in a rectangular grid at exactly 1-mile intervals.
 * Lonesome armer Pete drives his 1939 Ford pickup x miles east and y miles north
 * to get to widow Sally's farm. Boy x and y are integer numbers. Using this information
 * write test and run a C program that prompts the user for the values of x and y and
 * then uses the formula
 * 
 * distance = sqrt(x * x + y * y);
 * 
 * to find the shortest driving distance across the fields to Sally's farm. Since Pete does not
 * understand fractions or decimals very well, the answer must be rounded to the nearest integer 
 * value before being displayed
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;

    printf("Please provide the distance traveled east in miles: ");
    scanf("%d", &x);

    printf("Please provide the distance traveled north in miles: ");
    scanf("%d", &y);

    float shortestDistance = sqrt(x * x + y * y);

    printf("The shortest distance to travel is %.0f.\n", shortestDistance);

    return 0;
}