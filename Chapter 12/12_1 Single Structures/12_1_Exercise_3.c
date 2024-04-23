/**
 * Write a C program that accepts a user-entered time in hours and minutes. Have the program 
 * calculate and display the time one minute later.
*/

#include <stdio.h>

int main()
{
    struct timeHM
    {
        int hour;
        int min;
    } inputTime;

    char stringMin[] = "00";
    char stringHour[] = "00";

    printf("Please provide a time (HH MM):");
    scanf("%d %d", &inputTime.hour, &inputTime.min);

    if(59 == inputTime.min)
    {
        inputTime.hour += 1;
        inputTime.min = 0;
    }
    else
    {
        inputTime.min++;
    }

    if(inputTime.hour >= 24)
    {
        inputTime.hour -= 24;
    }

    if(inputTime.min < 10)
        sprintf(stringMin, "0%d", inputTime.min);
    else
        sprintf(stringMin, "%d", inputTime.min);

    if(inputTime.hour < 10)
        sprintf(stringHour, "0%d", inputTime.hour);
    else
        sprintf(stringHour, "%d", inputTime.hour);

    printf("The time one minute from the provided time will be: %s:%s\n", stringHour, stringMin);
}