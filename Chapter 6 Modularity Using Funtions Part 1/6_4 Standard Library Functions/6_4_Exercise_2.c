/**
 * Write two C functions named dist() and angle(), respectively, to be used in converting the 
 * rectangular (x,y) coordinates of a point into polar form. That is given an x and y position
 * on a Cartesian coordinate system, the dist() function must calculate and return the distance
 * from the origin, r, and the angle() function must calculate and return the angle from the
 * x-acis, theta, specified by the point. The values of r and theta are referred to as the points
 * polar coordinates. Use the relationship that
 * 
 * r = sqrt(x^2 + y^)
 * theta = tan^-1(y/x), x != 0
*/

#include <stdio.h>
#include <math.h>

int main()
{
    #define TRUE 1
    float dist(float, float);
    float angle(float, float);

    float x, y;

    printf("Please provide x and y coordinates: ");
    scanf("%f %f", &x, &y);
    
    printf("For point (%f, %f) the polar form is %f with angle %f.\n", x, y, dist(x,y), angle(x,y));

    return 0;
}

float dist(float x, float y)
{
    return sqrt(x * x + y * y);
}

float angle(float x, float y)
{
    if(0 == x)
    {
        if(y >= 0)
            return 90;
        else
            return -90;
    }
    return atan(y/x) * 180 /M_PI;
}