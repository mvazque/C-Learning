/**
 * Write and run a C program that requests both a month and day value. Only month values between
 * 1 and 12 should be accepted. Further, day values between 1 and 28 should be accepted for month
 * 2 (Feb); day values between 1 and 30 should only be accepted for months 4, 6, 9 and 11; and
 * only day values between 1 and 31 should be accepted for all remaining months 
 * Hint, use a switch statement;
*/

#include <stdio.h>

int main(void)
{
    #define TRUE 1
    int month, date;

    while(TRUE)
    {
        printf("Please enter a month (1 Jan, 2 Feb...): ");
        scanf("%d", &month);

        if(month >= 1 && month <= 12)
            break;
        
        printf("Invalid Month. Month must be in the range of 1 - 12\n");
    }

    while (TRUE)
    {
        printf("Please enter a date: ");
        scanf("%d", &date);

        if(date < 1){
            printf("Date can't be negative.\n");
            continue;
        }

        switch (month)
        {
        case 2:
            if(date > 28)
            {
                printf("Invalid date for the month of %d. Please choose a valid date for the month.\n", month);
                continue;
            }
            break;
        
        case 4: case 6: case 9: case 11:
            if(date > 30)
            {
                printf("Invalid date for the month of %d. Please choose a valid date for the month.\n", month);
                continue;
            }
            break;

        default:
            if(date > 31)
            {
                printf("Invalid date for the month of %d. Please choose a valid date for the month.\n", month);
                continue;
            }   
            break;
        }

        break;
    }

    printf("The valid date provided is %d-%d.\n", date, month);
    return 0;
}