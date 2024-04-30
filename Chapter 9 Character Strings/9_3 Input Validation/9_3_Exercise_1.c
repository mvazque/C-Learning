/**
 * Enter an execute Program 9.8 five times. The first time you run the program, enter a valid integer
 * number, the second time enter a double-precision number, and the third time enter a character.
 * Next enter the value 12e34 and then 31234
*/

#include <stdio.h>
#include <stdlib.h> /* Needed to convert a string to an integr*/
#define MAXCHARS 40
#define TRUE 1
#define FALSE 0

int isvalidInt(char[]); /* function prototype */

int main()
{
    char value[MAXCHARS];
    int number;

    printf("Enter an integer: ");
    fgets(value, MAXCHARS, stdin);

    if(isvalidInt(value) == TRUE)
    {
        number = atoi(value);
        printf("The number you entered is %d\n", number);
    }
    else
        printf("The number you entered is not a valid integer.\n");

    return 0;
}

int isvalidInt(char val[])
{
    int start = 0;
    int i;
    int valid = TRUE;
    int sign = FALSE;

    /* check for an empty string */
    if(val[0] == '\0') valid = FALSE;
    // printf("Past the first check %d\n", valid);

    /* check for a leading sign */
    if(val[0] == '-' || val[0] == '+')
    {
        sign = TRUE;
        start = 1; /* start checking for digits after the sign */
    }

    /* check that there is at least one character after the sign */
    if(sign == TRUE && val[1] == '\0') valid = FALSE;
    // printf("Past the second check %d\n", valid);

    /* now check the string, which we know has at least one non-sign char */
    i = start;
    while(valid == TRUE && val[i] != '\0' && val[i] != 10)
    {
        // printf("Num to check %d\n", val[i]);
        if(val[i] < '0' || val[i] > '9') /* check for a non-digit */
            valid = FALSE;
        i++;
        // printf("Validity result %d\n", valid);
    }
    // printf("Past the third check %d\n", valid);

    return valid;
}