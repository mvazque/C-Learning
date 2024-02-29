/**
 * Write a function named date() that accepts an integer of the form yyyymmdd, such as 20120411;
 * determines the corresponding month, day, and year and returns these three values to the calling 
 * function. For example, if date is called using the statement
 * 
 * date(20120411, &month, &day, &year)
 * 
 * the number 4 should be returned in month, the number 11 in day and the number 2012 in year;
 * 
 * Include the date() subroutine in a working program. The main() function should correctly call
 * date and display the three values returned by the function
 * 
*/

#include <stdio.h>

int main()
{
    void date(int, int *, int *, int *);
    int dateNum, year, month, day;

    printf("Please provide a number to convert. It should be in format yyyymmdd: ");
    scanf("%d", &dateNum);

    date(dateNum, &year, &month, &day);

    printf("The converted date is day %d, month %d, year %d.\n", day, month, year);

    return 0;
}

void date(int dateNum, int *year, int *month, int *day)
{
    *day = dateNum % 100;
    dateNum = dateNum / 100;
    *month = dateNum % 100;
    dateNum = dateNum / 100;
    *year = dateNum;
    
    return;
}