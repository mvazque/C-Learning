/**
 * The x and y coordinates, as an equation of time, t, of a projectile fired with an initial
 * velocity v at an angle of theta with respect to the ground is given by
 * 
 * x = v * t * cos(theta);
 * 
 * y = v * t * sin(theta);
 * 
 * Using the formulas, write a C program that displays a table of x and y values for a projectile
 * fired with an initial velocity of 500 ft/sec at an angle of 22.8 degrees.
 * Hint: Remember to convert to radian measure.
 * 
 * The table should contain values corresponding to the time interval 1 to 10 seconds in increments
 * of 0.5 s
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    #define STARTTIME 1
    #define ENDTIME 10
    #define INCREMENTS 0.5

    float v = 500.0, theta = 22.8 * (M_PI/180), x, y;
    printf("x value     y value\n");
    printf("--------   --------\n");

    for(float t = STARTTIME; t < ENDTIME; t += INCREMENTS)
    {
        x = v * t * cos(theta);
        y = v * t * sin(theta);
        printf("%8.3f %10.3f\n", x, y);
    }

    return 0;
}