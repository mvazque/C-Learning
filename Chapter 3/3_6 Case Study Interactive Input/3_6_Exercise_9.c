/**
 * When a particular rubber ball is dropped from a given height (in meters), its impact
 * speed (m/s) when it hits the ground is given by the formula speed = sqrt(2*g*height)
 * The ball then rebounds to 2/3 height from which it last fell. Using this
 * information write, test, and run a C program that calculates and displays the impact speed
 * of the first three bounces and the rebound height of each bounce. Test your program
 * using an initial height of 2.0 meters. Run the program twice and compare the results for
 * dropping the ball on Earth (G = 9.81) and on the moon (g = 1.667)
*/

#include <stdio.h>
#include <math.h>

#define HEIGHTDECAY 2.0/3.0

int main(void)
{
    float initialHeight, gravityA;

    printf("Please provide the initial height of the ball: ");
    scanf("%f", &initialHeight);

    printf("Please provide the gravitational acceleration: ");
    scanf("%f", &gravityA);

    float height2, height3;
    height2 = initialHeight * HEIGHTDECAY;
    height3 = height2 * HEIGHTDECAY;

    float speed1, speed2, speed3;

    speed1 = sqrt(2 * gravityA * initialHeight);
    speed2 = sqrt(2 * gravityA * height2);
    speed3 = sqrt(2 * gravityA * height3);

    printf("The first bounce from height %f has a speed of %f.\n", initialHeight, speed1);
    printf("The second bounce from height %f has a speed of %f.\n", height2, speed2);
    printf("The third bounce from height %f has a speed of %f.\n", height3, speed3);

    return 0;
}