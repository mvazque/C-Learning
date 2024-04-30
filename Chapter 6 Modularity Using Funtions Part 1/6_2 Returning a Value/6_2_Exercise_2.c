/**
 * Write a function named distance() that accepts the rectangular coordinate of two points x1, y1
 * and x2, y22 and calculates and returns the distance between the two points. The distance, d, 
 * between two points is given by the formula
 * 
 * d = sqrt((x2-x1)^2 + (y2-y1)^2)
 * 
 * Include the function in a working C program. Make sure the function returns 0 when both points
 * are the same 
 * 
 * Example
 * (5,2) (5,2)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float distance(int, int, int, int);

    int x1, y1, x2, y2;

    printf("Please provide the x and y coordinates of the first point: ");
    scanf("%d%d", &x1, &y1);

    printf("Please provide the x and y coordinates of the second point: ");
    scanf("%d%d", &x2, &y2);

    printf("The distance between the two points is %f.\n", distance(x1, y1, x2, y2));
}

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}