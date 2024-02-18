/**
 * Write a C program to determine the distance an airplane travels on a runway before takeoff.
 * The equation for determining the distance, d, in meters, is d = (1/2)*a*t^2
 * a is the acceleration 3.5 m/s^2
 * t is the time on the runway 30 seconds
*/

#include <stdio.h>

int main(void)
{
    float accel = 3.5;
    float time = 30;

    float distance = 0.5 * accel * time * time;

    printf("The distance the plane traveled before take off is %.2f\n", distance);

    return 0;
}