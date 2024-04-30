/**
 * Write a C function named days() that determines the number of days from the date 1/1/1900
 * for any date passed as a structure. Use the following Date structure:
 * 
 * struct Date
 * {
 *  int month;
 *  int day;
 *  int year;
 * }
 * 
 * In writing the days() function, use the convention that all years have 360 days and each month
 * consists of 30 days. The function should return the number of days for any date structure
 * passed to it
*/
#include <stdio.h>

struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    void days(struct Date *);

    struct Date date;
    printf("Please provide a date to get the difference from 1/1/1900.\n");

    do
    {
        printf("Please provide the day of the date: ");
        scanf("%d", &date.day);

        if(date.day > 0 && date.day <= 30)
            break;
        
        printf("Invalid day. Must be value between 1-30.\n");
    } while (1);

    do
    {
        printf("Please provide the month of the date: ");
        scanf("%d", &date.month);

        if(date.month > 0 && date.month <= 12)
            break;
        
        printf("Invalid month. Must be value between 1-12.\n");
    } while (1);

    do
    {
        printf("Please provide the year of the date: ");
        scanf("%d", &date.year);

        if(date.year >= 1900)
            break;
        
        printf("Invalid year. Must be greater than or equal to 1900.\n");
    } while (1);
    
    days(&date);
}

void days(struct Date *date)
{
    #define DATEDAY 1
    #define DATEMONTH 1
    #define DATEYEAR 1900

    printf("Day: %d\n", date->day);
    printf("Month: %d\n", date->month);
    printf("Year: %d\n", date->year);

    int dayCounter = 0;

    dayCounter += (date->year - DATEYEAR) * 360;
    dayCounter += (date->month - DATEMONTH) * 30;
    dayCounter += date->day - DATEDAY;

    printf("The number of days between %d/%d/%d and %d/%d/%d is: %d\n", date->month, date->day, date->year, DATEMONTH, DATEDAY, DATEYEAR, dayCounter);
}