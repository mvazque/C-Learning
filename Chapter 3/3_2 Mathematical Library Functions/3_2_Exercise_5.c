/**
 * The time T in seconds that a donut sized space station must make one rotation in gravity
 * free space to provide a human with the same gravitational force as the experienced on Earth
 * is given by the equation T = 2*pi*sqrt(r/g), where g is the gravitational force on the earths
 * surface and r is the outside radius of the space station in meters
 * Using the formula write a C program that calculates and displays the rotation time for a space
 * station that has an outer radius of 700 meters and g = 9.81 m/s^2
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float radius = 700.0;
    float gravitationalConstant = 9.81;

    float time = 2 * M_PI * sqrt(radius / gravitationalConstant);

    printf("The time for a space station of radius %f to complete a rotation and exert %f gravity is %fsec.\n", radius, gravitationalConstant, time);
}