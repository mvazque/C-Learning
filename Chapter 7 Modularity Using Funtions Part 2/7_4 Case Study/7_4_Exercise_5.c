/**
 * Write a C function named yrCalc() that accepts a longer integer representing the total number
 * of days from the data 1/1/1900 and the addresses of the variables year, month and day. The 
 * function is to calculate the current year, month, and day for the given number of days and
 * write these values directly in the respective variables using the passed addresses. For this
 * problem assume that each year has 365 days and each month has 30 days
*/

#include <stdio.h>

int main()
{
    void yrCalc(long int, int *, int *, int *);

    int year, month, day, dayInput;

    printf("Please provide the number of days after 1/1/1900: ");
    scanf("%d", &dayInput);

    yrCalc(dayInput, &year, &month, &day);

    printf("After %d days, the date is %d/%d/%d.\n", dayInput, month, day, year);

    return 0;
}

void yrCalc(long int days, int *yearPtr, int *monthPtr, int *dayPtr)
{
    #define STARTDAY 1
    #define STARTMONTH 1
    #define STARTYEAR 1900

    *yearPtr = days / 365;
    days -= *yearPtr * 365;
    *yearPtr += STARTYEAR;

    *monthPtr = days / 30;
    days -= *monthPtr * 30;
    *monthPtr += STARTMONTH;

    *dayPtr = days + STARTDAY;
}