/**
 * Write a function that checks each digit as it is entered, rather than checking the completed
 * string as done in program 9.8
*/

#include <stdio.h>
#include <stdlib.h> /* Needed to convert a string to an integr*/
#define MAXCHARS 40
#define TRUE 1
#define FALSE 0
#define POSITIVE 2
#define NEGATIVE 1

int isvalidInt(char, int, int); /* function prototype */

int main()
{
    char value[MAXCHARS];
    int number, i = 0;
    char c;
    int valid = TRUE;
    int sign = FALSE;
    int signValue = 0;

    printf("Please type in an integer: \n");
    while(i < MAXCHARS && (c = getchar()) != '\n'){
        if(0 == i)
        {
            if('-' == c)
            {
                sign = TRUE;
                signValue = NEGATIVE;
                i++;
                continue;
            }else if('+' == c)
            {
                sign = TRUE;
                signValue = POSITIVE;
                i++;
                continue;
            }
        }

        if(sign == TRUE && '1' == i && c == '\0')
        {
            valid = FALSE;
            break;
        } 

        if(isvalidInt(c, i, FALSE) == TRUE)
        {
            value[i - sign] = c;
            i++;
        }
        else
        {
            valid = FALSE;
            break;
        }
    }
    value[i] = '\0';

    if(i == 0)
    {
        printf("Empty string, not a valid integer.\n");
        valid = FALSE;
    }

    if(valid == TRUE)
    {
        number = atoi(value);
        if(NEGATIVE == signValue)
        {
            printf("The number you entered is -%d\n", number);
        }
        else{
            printf("The number you entered is %d\n", number);
        }
        
    }
    else
        printf("The number you entered is not a valid integer.\n");

    return 0;
}



int isvalidInt(char val, int position, int sign)
{
    int valid = TRUE;

    if(val < '0' || val > '9') /* check for a non-digit */
        valid = FALSE;

    return valid;
}