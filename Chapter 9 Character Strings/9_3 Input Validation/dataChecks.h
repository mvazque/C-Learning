#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXCHARS 40


int getanInt();
int isvalidInt(char[]);

int getanInt()
{

    int isanInt = FALSE;
    char value[MAXCHARS];

    do
    {
        fgets(value, MAXCHARS, stdin);
        if(isvalidInt(value) == FALSE)
        {
            printf("Invalid Integer - Please re-enter");
            continue; /* send control to the do-while expression test */
        }
        isanInt = TRUE;
    } while (isanInt == FALSE);

    return atoi(value);
    
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