/**
 * An automobile travels at an average speed of 55 miles per hour for four hours. Write a C
 * program that displays the distance driven, in miles, by the car every half hour until the
 * end of the trip
*/

#include <stdio.h>

int main(void)
{
    float time = 0.0;
    int mph = 55;

    while(time <= 4)
    {
        printf("The car at %.1f hours has driven %.2f miles.\n", time, mph * time);
        time += 0.5;
    }


    return 0;
}