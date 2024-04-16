/**
 * Modify the function written in Exercise 1 so that the function returns hte address of the 
 * character string containing the proper day to be displayed
*/

#include <stdio.h>

int main()
{
    char* dateConvert(int);

    int input;
    printf("Please provide an integer 1 - 7 to see its day of the week equivalent: ");
    do
    {
        scanf("%d", &input);
    } while (input > 7 || input < 1);
    
    char *convertedDate = dateConvert(input);
    printf("The address of the date string is %p.\n", &convertedDate);

    return 0;
}

char* dateConvert(int dateInput)
{
    char *dates[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };

    printf("That date of the week is %s.\n", dates[dateInput - 1]);

    return dates[dateInput - 1];
}