/**
 * Write a C function named isvalidReal() that checks for a valid double-precision number. This kind
 * of number can have an optional + or - sign, at most one decimal point, which can also be the 
 * first character and at least one digit between 0 and 9 inclusive. The function should return an
 * integer value of 1 if the entered number is a real number. Otherwise it should return an integer 
 * value of 0.
*/

#include <stdio.h>
#include <stdlib.h> /* Needed to convert a string to an integr*/
#define MAXCHARS 40
#define TRUE 1
#define FALSE 0

int isvalidReal(char[]); /* function prototype */

int main()
{
    char value[MAXCHARS];
    float number;

    printf("Enter an integer: ");
    fgets(value, MAXCHARS, stdin);

    if(isvalidReal(value) == TRUE)
    {
        number = atof(value);
        printf("The number you entered is %f\n", number);
    }
    else
        printf("The number you entered is not a valid real number.\n");

    return 0;
}

int isvalidReal(char val[])
{
    int start = 0;
    int i;
    int valid = TRUE;
    int sign = FALSE;
    int existingDecimal = FALSE;

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
        if(val[i] == '.' && !existingDecimal)
        {
            existingDecimal = TRUE;
            i++;
            continue;
        }
        if(val[i] < '0' || val[i] > '9') /* check for a non-digit */
            valid = FALSE;
        i++;
        // printf("Validity result %d\n", valid);
    }
    // printf("Past the third check %d\n", valid);

    return valid;
}