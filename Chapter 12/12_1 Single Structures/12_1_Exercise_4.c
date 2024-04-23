/**
 * Write a C program that accepts a user-entered date. Have the program calculate and display the
 * date of the next day. For purposes of this exercises, assume that all months consist of 30 days
 * 
 * Modify the program to account for the actual number of days in each month
*/

#include <stdio.h>

int main()
{
    int datesInMonth(int, int);
    struct Date
    {
        int year;
        int month;
        int day;
    } inputDate;

    printf("Please provide a date dd mm yyyy: ");
    scanf("%d %d %d", &inputDate.day, &inputDate.month, &inputDate.year);

    printf("Max dates for month %d\n", datesInMonth(inputDate.month, inputDate.year));
    if(inputDate.day == datesInMonth(inputDate.month, inputDate.year))
    {
        inputDate.month += 1;
        inputDate.day = 1;
    }
    else
    {
        inputDate.day += 1;
    }

    if(inputDate.month > 12)
    {
        inputDate.year += 1;
        inputDate.month = 1;
    }

    printf("The next date is (dd/mm/yyyy): %d/%d/%d\n", inputDate.day, inputDate.month, inputDate.year);

}

int datesInMonth(int month, int year)
{
    int febDateCalc(int);
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