/**
 * Include the array created in Short Answer Question 3 in a program that displays the names and 
 * number of days in each month
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

    for(int i = 0; i < NUMMONTHS; i++)
    {
        printf("%s has %d days\n", convert[i].name, convert[i].days);
    }
}