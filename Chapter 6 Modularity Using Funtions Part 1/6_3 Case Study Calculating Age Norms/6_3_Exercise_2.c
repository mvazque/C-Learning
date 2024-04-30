/**
 * Write a function that calculates the area a, of a circle when its circumference, c, is given.
 * This function should call a second function which returns the radius, r, of the circle, given
 * c. The relevant formulas are: 
 * 
 * r = c/(2pi) and a = pi* R ^ 2
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float radiusCalc(float);
    float circArea(float);

    float circumference, radius;

    printf("Please provide the circumference of a circle: ");
    scanf("%f", &circumference);

    radius = radiusCalc(circumference);
    printf("The area of a circle of radius %f, is %f.\n",radius, circArea(radius));
}

float radiusCalc(float circumference)
{
    return circumference/(2 * M_PI);
}

float circArea(float radius)
{
    return M_PI * pow(radius, 2);
}