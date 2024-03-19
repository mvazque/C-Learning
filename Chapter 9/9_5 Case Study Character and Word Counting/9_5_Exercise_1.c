/**
 * Modify the countchar() function in Program 9.10 to omit blank spaces from the count
*/

#include <stdio.h>
#define MAXNUM 1000

int countchar(char []); /* function prototype */

int main()
{
    char message[MAXNUM];
    int numchar;

    printf("\nType in any number of characters: ");
    fgets(message, MAXNUM, stdin);

    numchar = countchar(message);
    printf("The number of characters just entered is %d\n", numchar);

    return 0;
}

/** 
 * This will not count the spaces in a string but it would count the carriage return which is
 * something to consider
*/
int countchar(char list[])
{
    int i, count = 0;
    for(i = 0; list[i] != '\0'; i++)
    {
        if(list[i] != ' ')
            count++;
    }

    return count;
}