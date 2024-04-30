/**
 * A model of world population in billions of people, after 2000 is given by the equation
 * population = 6 * e ^ (0.02 * (year - 2000))
 * Using this formula write, compile and execute a C program to estimate the world 
 * population in the year 2010
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float year = 2010.0;
    float expValue = 0.02 * (year - 2000.0);
    printf("%f", expValue);
    float population = 6.0 * exp(expValue);

    printf("The population of the year %.0f is %f.\n", year, population);

    return 0;
}