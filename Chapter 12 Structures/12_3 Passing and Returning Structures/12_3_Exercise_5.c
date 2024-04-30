/**
 * Modify the function days() written for programming Exercise 1 to account for the actual number 
 * of days in each month. Assume, however, that each year contains 365 (that is dod not account for
 * leap years).
 * 
 * Modify the function to account for leap years
*/

#include <stdio.h>

int datesInMonth(int, int);
int febDateCalc(int);

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
        printf("Please provide the year of the date: ");
        scanf("%d", &date.year);

        if(date.year >= 1900)
            break;
        
        printf("Invalid year. Must be greater than or equal to 1900.\n");
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
        printf("Please provide the day of the date: ");
        scanf("%d", &date.day);

        if(date.day > 0 && date.day <= datesInMonth(date.month, date.year))
            break;
        
        printf("Invalid day. Must be value between 1-30.\n");
    } while (1);
    
    days(&date);
}

void days(struct Date *date)
{
    #define DATEDAY 1
    #define DATEMONTH 1
    #define DATEYEAR 1900

    int dayCounter = 0;
    int monthDiff = date->month - DATEMONTH;

    dayCounter += (date->year - DATEYEAR) * 365;
    printf("Day Counter 1 %d\n", dayCounter);

    dayCounter += (date->year - DATEYEAR) / 4;
    printf("Day Counter 2 %d\n", dayCounter);

    if(((date->year - DATEYEAR) % 4 != 0) && febDateCalc(date->year) == 29)
        dayCounter++;
    printf("Day Counter 3 %d\n", dayCounter);

    if(monthDiff != 0)
    {
        for(int i = 1; i <= monthDiff; i++)
            dayCounter += datesInMonth(i, date->year);
    }

    dayCounter += date->day - DATEDAY;

    printf("The number of days between %d/%d/%d and %d/%d/%d is: %d\n", date->month, date->day, date->year, DATEMONTH, DATEDAY, DATEYEAR, dayCounter);
}

int datesInMonth(int month, int year)
{
    printf("Month value %d\n", month);
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 2:
            return febDateCalc(year);
            break;
        default:
            return 30;
    }
}

int febDateCalc(int year)
{
    if(((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0)))
        return 29;

    return 28;
}