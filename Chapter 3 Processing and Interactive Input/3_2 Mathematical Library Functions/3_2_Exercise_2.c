/**
 * Write compile and execute a C program that calculates the distance 
 * between two points whose coordinates are (7, 12) and (3,9). Use
 * the fact that the distance between two points having coordinate
 * (x1, y1) and (x2, y2) is distance = sqrt((x1-x2)^2 + (y1-y2)^2)
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1 = 7.0;
    float x2 = 3.0;
    float y1 = 12;
    float y2 = 9.0;

    float xDistance = fabs(x1 - x2);
    float yDistance = fabs(y1 - y2);

    float totalDistance = sqrt(pow(xDistance, 2) + pow(yDistance, 2));

    printf("The distance between coordinates (%.0f, %.0f) and (%.0f, %.0f) is %f.\n", x1, y1, x2, y2, totalDistance);

    return 0;
}