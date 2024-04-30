/**
 * Write a C program to calculate and display the coordinates of the midpoint of the line
 * segment connecting the points (3, 4) and (10, 12). Use the fact that the coordinates of
 * the midpoint between two points having coordinates (x1, y1) and (x2, y2) are 
 * (x1 + x2)/2, (y1 + y2)/2
 * Your program should produce the following display
 * 
 * The x midpoint coordinate is ______
 * The y midpoint coordinate is ______
 * 
 * where the blank spaces are replaced with the values calculated by your program
 * 
 * b. How do you know that the midpoint values calculated by your program are correct?
 * Doing yhe math by hand allows us to test program. It gives expected values.
 * 
 * c. Once you have verified the ouput produced by your program, modify it to determine
 * the midpoint coordinates of the line connecting the two points (2, 10) and (12, 6)
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

    printf("The x midpoint coordinate is %f\n", midpointX);
    printf("The y midpoint coordinate is %f\n", midpointY);

    return 0;
}