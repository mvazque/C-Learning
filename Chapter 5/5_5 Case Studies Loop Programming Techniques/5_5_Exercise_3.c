/**
 * Enter and run either Program 5.14 or 5.15
 * 
 * Determine what happens when you enter a floating point number instead of an integer
 * number when executing 5.14 or 5.15
 * We end up with an infinite loop of error messages. My guess is it has to do with how 
 * floats in a decimal count as multiple inputs and somehow that ends up with a loop.
 * 
 * Determine what happens when you enter a letter instead of an integer number when executing 
 * either Program 5.14 or 5.15
 * We also end up with an infinite loop although I am not sure why. It might have to do with
 * ghost carriage returns
*/

#include <stdio.h>
int main()
{
    #define TRUE 1
    int month;

    while (TRUE)
    {
        printf("\nEnter a month between 1 and 12: ");
        scanf("%d", &month);

        if(month > 1 && month < 12)
            break;

        printf("Error - the month you entered is not valid.\n");
    }

    printf("The month accepted is %d\n", month);

    return 0;
}