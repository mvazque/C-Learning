/**
 * Write a C function named difDays() that calculates and returns the difference between two dates.
 * Each date is passed to the function as a structure using the following global structure:
 * 
 * struct Date
 * {
 *  int month;
 *  int day;
 *  int year;
 * };
 * 
 * The difDays() function should make two calls to the days() function written in the previous
 * programming exercises
 * 
 * 
 * Note: I don't quite get or know how or why days() would be called twice as I days only provided
 * the difference between two dates. Unless its meant to be what got the days?
*/


#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    void daysDif(struct Date *, struct Date *);
    struct Date getDay();

    struct Date dates[2];

    for(int i = 0; i < 2; i++)
        dates[i] = getDay();
    
    daysDif(&dates[0], &dates[1]);
}

struct Date getDay()
{
    struct Date date;
    printf("Please provide a date to get the difference.\n");

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

    return date;
}

void daysDif(struct Date *date1, struct Date *date2)
{
    int dayCounter = 0;

    dayCounter += (date1->year - date2->year) * 360;
    dayCounter += (date1->month - date2->month) * 30;
    dayCounter += date1->day - date2->day;

    printf("The number of days between %d/%d/%d and %d/%d/%d is: %d\n", date1->month, date1->day, date1->year, date2->month, date2->day, date2->year, abs(dayCounter));
}