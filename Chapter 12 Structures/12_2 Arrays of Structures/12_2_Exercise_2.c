/**
 * Using the structure defined in Short Answer Question 3, write a C program that accepts a month
 * form a user in numeric form and displays the name of the month and the number of days in the 
 * month. Thus, in response to an input of 3 the program displays March has 31 days
*/

#include <stdio.h>

struct MonthDays
{
    char name[10];
    int days;
};

int main()
{
    #define NUMMONTHS 12
    struct MonthDays convert[] =
    {
        {"January", 31},
        {"February", 28},
        {"March", 31},
        {"April", 30},
        {"May", 31},
        {"June", 30},
        {"July", 31},
        {"August", 31},
        {"September", 30},
        {"October", 31},
        {"November", 30},
        {"December", 31},
    };

    int userMonthInput;
    printf("Please provide a numerical equivalent for a month (1 for January, 2 February... 12 December): ");
    scanf("%d", &userMonthInput);

    /* Decreasing by one to match index-0 of arrays */
    userMonthInput--;

    printf("%s has %d days\n", convert[userMonthInput].name, convert[userMonthInput].days);
}