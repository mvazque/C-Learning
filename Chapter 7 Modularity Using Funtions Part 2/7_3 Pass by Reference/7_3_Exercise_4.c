/**
 * Write a C function named time() that accepts an integer number of second and the addresses of 
 * three variables named hours, min and sec. The function is to convert the passed number of seconds
 * into an equivalent number of hours, minutes and seconds and directly alter the value of the 
 * respective variables using their passed addresses
*/

#include <stdio.h>

int main()
{
    void time(int, int *, int *, int *);

    int hours, minutes, seconds, totalSeconds;

    printf("Please provide the total number of seconds: ");
    scanf("%d", &totalSeconds);

    time(totalSeconds, &hours, &minutes, &seconds);

    printf("The seconds are equivalent to %d hours, %d minutes, %d seconds.\n", hours, minutes, seconds);

    return 0;
}

void time(int totSecs, int *hourPntr, int *minutePtr, int *secPntr)
{
    *hourPntr = totSecs /(60 * 60);
    totSecs -= *hourPntr * 60 * 60;
    *minutePtr = totSecs /(60);
    totSecs -= *minutePtr * 60;
    *secPntr = totSecs;

    return;
}