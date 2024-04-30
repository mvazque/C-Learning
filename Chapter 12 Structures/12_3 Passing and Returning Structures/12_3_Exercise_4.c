/**
 * Write a C function named larger() that returns the later date of any two dates passed to it.
 * For example if the dates 10/9/2001 and 11/3/2001 are passed to larger(), the second date would 
 * be returned
 * 
 * Include the larger() function that was written in a complete program. Store the date structure 
 * returned by larger() in a separate date structure and display the member values of the returned
 * date
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
    struct Date getDay();
    struct Date larger(struct Date *, struct Date *);

    struct Date dates[2];
    struct Date largerDate;

    for(int i = 0; i < 2; i++)
        dates[i] = getDay();
    
    largerDate = larger(&dates[0], &dates[1]);

    printf("The larger of two dates is %d/%d/%d\n", largerDate.month, largerDate.day, largerDate.year);
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


struct Date larger(struct Date *date1, struct Date *date2)
{
    if(date1->year != date2->year)
    {
        if(date1->year > date2->year)
            return *date1;
        else
            return *date2;
    }

    if(date1->month != date2->month)
    {
        if(date1->month > date2->month)
            return *date1;
        else
            return *date2;
    }

    if(date1->day != date2->day)
    {
        if(date1->day > date2->day)
            return *date1;
        else
            return *date2;
    }

    /** If we make it here the dates are equal so we'll just send day1 since their equal */
    return *date1;
}