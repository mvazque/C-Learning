/**
 * Write a C function that displays the day of the week corresponding to a user-entered input number
 * between 1 and 7. That is, in response to an input of 2, the program displays the name Monday.
 * Use an array of pointers in the function.
 * 
 * Include the function in a complete working program
*/

#include <stdio.h>

int main()
{
    void dateConvert(int);

    int input;
    printf("Please provide an integer 1 - 7 to see its day of the week equivalent: ");
    do
    {
        scanf("%d", &input);
    } while (input > 7 || input < 1);
    
    dateConvert(input);

    return 0;
}

void dateConvert(int dateInput)
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
}