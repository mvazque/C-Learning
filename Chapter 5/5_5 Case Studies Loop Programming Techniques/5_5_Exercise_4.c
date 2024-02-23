/**
 * Write and run a C program that requests a day value. Have your program accept only day
 * values between 1 and 31
*/

#include <stdio.h>
int main()
{
    #define TRUE 1
    int day;

    while (TRUE)
    {
        printf("\nEnter a date between 1 and 31: ");
        scanf("%d", &day);

        if(day > 1 && day < 31)
            break;

        printf("Error - the daye you entered is not valid.\n");
    }

    printf("The date accepted is %d\n", day);

    return 0;
}