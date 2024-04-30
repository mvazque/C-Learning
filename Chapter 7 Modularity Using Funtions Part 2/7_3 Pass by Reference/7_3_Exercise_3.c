/**
 * Write a function named secs() that accepts teh time in hours, minutes and seconds and determines
 * the total number of seconds in the passed data. Write this function so that the total number of
 * seconds is returned by the function as an integer number
 * 
 * Repeat the exercise but also pass the address of the variable totSec to the to the function
 * secs(). Using this passed address, have secs() directly alter the value of totSec
*/

#include <stdio.h>

int main()
{
    int secs(int, int, int, int *);
    int hours, minutes, seconds, totSec, convertedSec;

    printf("Please provide the number of hours, minutes and seconds to convert: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    convertedSec = secs(hours, minutes, seconds, &totSec);

    printf("Value returned from function is %d.\n", convertedSec);
    printf("Value altered by function %d.\n", totSec);

    return 0;
}


int secs(int hours, int minutes, int seconds, int *totSec)
{
    int total = 0;
    total += hours * 60 * 60;
    total += minutes * 60;
    total += seconds;

    *totSec = total;

    return total;
}