/**
 * Write a program that displays the following two prompts:
 * 
 * Enter a month (use a 1 for Jan, etc.):
 * Enter a day of the month:
 * 
 * Your program should accept and store a number in a variable named month in response to the
 * first prompt, and accept and store a number in a variable named day in response to the
 * second prompt. If the month entered is not between 1 and 12 inclusive, the program should 
 * print a message informing the user that an invalid month has been entered. If the day entered
 * is not between 1 and 31 inclusive, the program should print a message informing the user that 
 * an invalid day has been entered.
 * 
 * What will your program do if the user types a number with a decimal point for the month?
 * How can you ensure that your if statements check for an integer number? 
 * 
 * If a float is provided the decimal seems to split the two numbers into looking like two
 * inputs and the program takes and scans both. What can be done is take in a float value
 * but then cast it into an int value.
 * 
 * In a non-leap year, February has 28 days; the months January, March, May, July, August,
 * October and December have 31 days and all other months have 30 days.
 * Using this information modify the program written in Exercise 1a to display a message when
 * an invalid day is entered for a user entered month. For this program ignore leap years.
*/

#include <stdio.h>

int main(void)
{
    int month, day;
    float monthInput, dayInput;
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
            printf("An invalid day of the month was provided.\n");
        else if(((month == 4) || (month == 6) || (month = 9) || (month == 11)) && (day > 30))
            printf("An invalid day of the month was provided.\n");
        else
            printf("A valid month and day was provided for month %d and day %d.\n", month, day);

    return 0;
}