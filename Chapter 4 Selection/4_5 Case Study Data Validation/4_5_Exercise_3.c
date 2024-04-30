/**
 * All years that are evenly divisible by 400 or are evenly divisible by 4 and not evenly divisible
 * by 100 are leap years. For example, since 1600 is evenly divisible by 400, the
 * year 1600 was a leap year. Similarly, since 1988 is evenly divisible by 4 but not by
 * 100, the year 1988 was also a leap year. Using this information, write a C program that
 * accepts the year as a user input, determines if the year is a leap year, and displays an 
 * appropriate message that tells the user if the entered year is or is not a leap year
 * 
 * 
 * Using the code written redo exercise 1e such that leap years are taken into account
*/

#include <stdio.h>

// int main(void)
// {
//     int year;

//     printf("Please enter the year to test for leap year: ");
//     scanf("%d", &year);

//     if(((year % 400) == 0) ||
//        (((year % 4) == 0) && ((year % 100) != 0)))
//         printf("The year %d is a leap year.\n", year);
//     else
//         printf("The year %d is not a leap year.\n", year);
    
//     return 0;
// }

int main(void)
{
    int month, day, year;
    float monthInput, dayInput, yearInput;
    printf("Enter a year: ");
    scanf("%f", &yearInput);
    year = (int) yearInput;

    printf("Enter a month (use a 1 for Jan, etc.): ");
    scanf("%f", &monthInput);
    month = (int) monthInput;


    printf("Enter a day of the month: ");
    scanf("%f", &dayInput);
    day = (int) dayInput;

    if(month < 1 || month > 12)
        printf("An invalid month was provided.\n");
    else if(day < 1 || day > 31)
    {
        printf("An invalid day of the month was provided.\n");        
    }
    else
        if(month == 2 && day > 28 )
        {
            if(day == 29){
                if(((year % 400) == 0) ||
                (((year % 4) == 0) && ((year % 100) != 0)))
                    printf("A valid year, month, day was provided for year %d, month %d and day %d.\n", year, month, day);
                else
                    printf("An invalid day of the month was provided.\n");
            }
            else
                printf("An invalid day of the month was provided.\n");
        }
        else if(((month == 4) || (month == 6) || (month = 9) || (month == 11)) && (day > 30))
            printf("An invalid day of the month was provided.\n");
        else
            printf("A valid month and day was provided for month %d and day %d.\n", month, day);

    return 0;
}