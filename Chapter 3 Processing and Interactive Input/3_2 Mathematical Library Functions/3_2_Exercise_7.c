/**
 * Newtons law of cooling states that when an object with initial temp itemp
 * is placed in a surrounding substance of temperature a, it will reach a temperature
 * tfin in t minutes according to the formula tfin = a + (itemp - a) * e ^(-kt)
 * k is a thermal coefficient
 * Using this formula write a C program to determine the temperature reached by 20 minutes
 * when an object is placed in a glass of water whose temperature is 60 degrees.
 * Assume initial temp is 150 and a thermal constant of 0.0367
 * 
 * 
 * Modify the program to determine the temperature of the same object with an initial 
 * temperature of 150 degrees after 10 minutes when placed in water at 50 degrees
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 50.0;
    float itemp = 150;
    float time = 10;
    float thermalCoefficient = 0.0367;

    float tFinal = a + (itemp - a) * exp(-thermalCoefficient * time);

    printf("The final temperature of an object with initial temp %f degrees, surrounded by water at %f degrees\n", itemp, a);
    printf("and having a thermal coefficient value of %f over time %f is %f.\n", thermalCoefficient, time, tFinal);

    return 0;
}