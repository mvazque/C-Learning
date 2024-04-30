/* Calculate the elapsed time of a 150 mile trip assuming average speed of 65 mph*/

#include <stdio.h>

int main(void)
{
    float distance = 204.0;
    float avgSpeed = 68.0;
    float time = distance / avgSpeed;

    printf("The elapsed time of a %.0f trip at the average speed of %.0f is %f hours.\n", distance, avgSpeed, time);
    return 0;
}