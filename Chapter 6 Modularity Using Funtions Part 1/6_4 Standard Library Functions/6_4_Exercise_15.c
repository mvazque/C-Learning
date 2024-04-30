/**
 * Rewrite program 6.10 using a while statement in place of a do-while statement 
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char inChar = '0';

    while(inChar != 'x')
    {
        printf("\nPush any key (type an x to stop)");
        inChar = getchar(); /*Get the next character typed*/
        inChar = tolower(inChar); /* convert to lowercase */
        getchar(); /* get and ignore the ENTER key*/

        if(isalpha(inChar))
            printf("\nThe character entered is a letter.\n");
        else if(isdigit(inChar))
            printf("\nThe character entered is a digit.\n");
    }
}