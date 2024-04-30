/**
 * Using scanf() statements, write, compile and execute a C program that accepts the x
 * and y coordinates of two points, have your program determine and display the midpoints
 * of the two points (use the formula given in Exercise 2). Verify your program using the following test data
 * (0, 0) (16,0)        (8, 0)
 * (0, 0) (0, 16)       (0, 8)
 * (0, 0) (-16, 0)      (-8, 0)
 * (0, 0) (0, -16)      (0, -8)
 * (-5, -5) (5, 5)      (0, 0)
 * 
 * When you have completed the verifications use your program for the following table
 * Point1       point2      Midpoint
 * (4, 6)       (16, 18)    (10, 12)
 * (22, 3)      (8, 12)     (15, 7.5)
 * (-10, 8)     (14, 4)     (2, 6)
 * (-12, 2)     (14, -31)   (1, -14.5)
 * (2, -6)      (20, 16)    (11, 5)
 * (2, -6)      (-16, -18)  (-7, -12)
 * 
*/

#include <stdio.h>

int main(void)
{
    int x1;
    int y1;
    int x2;
    int y2;

    printf("Please enter the x and y coordinates of the first point separated by a space: ");
    scanf("%d %d", &x1, &y1);

    printf("Please enter the x and y coordinates of the second point separated by a space: ");
    scanf("%d %d", &x2, &y2);

    float midpointX = (x1 + x2)/2.0;
    float midpointY = (y1 + y2)/2.0;

    printf("The x midpoint coordinate is %5.2f\n", midpointX);
    printf("The y midpoint coordinate is %5.2f\n", midpointY);

    return 0;
}