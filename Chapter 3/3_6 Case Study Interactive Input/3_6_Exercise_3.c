/**
 * Redo exercise 2a but change the ouput produced by your program to
 * The x coordinate of the midpoint is xxx.xx
 * The y coordinate of the midpoint is xxx.xx
 * 
 * where xxx.xx denotes that the calculated value should be placed in a field wide enough
 * for three places to the left of the decimal point and two places to the right of it
*/

#include <stdio.h>

int main(void)
{
    int x1 = 2;
    int y1 = 10;
    int x2 = 12;
    int y2 = 6;

    float midpointX = (x1 + x2)/2.0;
    float midpointY = (y1 + y2)/2.0;

    printf("The x midpoint coordinate is %5.2f\n", midpointX);
    printf("The y midpoint coordinate is %5.2f\n", midpointY);

    return 0;
}