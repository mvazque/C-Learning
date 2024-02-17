/*
    Calculate the length of a pendulum in a clock in order for it to complete a swing in a second
    Use the formula length = g * (time / (2 * pi)) ^ 2
    Where g is gravitational constant 32.2 ft/sec^2
    pi is 3.1416
*/

#include <stdio.h>

int main(void)
{
    float gravity = 32.2;
    float pi = 3.1416;
    float time = 1.0;
    float timeAndPiCalc = time / (2 * pi);

    float length = gravity * timeAndPiCalc * timeAndPiCalc;

    printf("The length to complete one swing in one second is: %f ft\n", length);
    return 0;
}