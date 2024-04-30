/*
    Write a C program to calculate and display the slope of a line between two points 
    Use the fact that slope can be calculated with
    slope = (y2-y1)/(x2-x1)
*/

#include <stdio.h>

int main(void)
{
    float x1 = 2.0;
    float y1 = 10.0;

    float x2 = 12.0;
    float y2 = 6.0;

    float slope = (y2 - y1) / (x2 - x1);

    printf("The slope of a line between points (%.0f, %.0f) and (%.0f, %.0f) is %f\n", x1, y1, x2, y2, slope);
    return 0;
}