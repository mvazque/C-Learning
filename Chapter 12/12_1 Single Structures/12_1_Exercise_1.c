/**
 * Write a C program that prompts a user to input the current month, day and year. Store the data
 * entered in a suitably defined structure and display the date in an appropriate manner.
 * 
 * Modify the program to accept the current time in hours, minutes and seconds.
*/

#include <stdio.h>

int main()
{
    struct DateTime {
        int month;
        int day;
        int year;
        int hours;
        int minutes;
        int seconds;
    } date;

    printf("Please provide the date (mm dd yyyy): ");
    scanf("%d %d %d", &date.month, &date.day, &date.year);

    printf("Please provide the time (hh mm ss): ");
    scanf("%d %d %d", &date.hours, &date.minutes, &date.seconds);

    printf("The date and time are %d/%d/%d %d:%d:%d.\n", date.month, date.day, date.year, date.hours, date.minutes, date.seconds);
}