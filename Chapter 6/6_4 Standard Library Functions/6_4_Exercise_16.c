/**
 * Write a C program that uses the getchar() function to input a character from the terminal into
 * the variable inChar. Include the function call within a do-while loop that continues to prompt
 * the user for an additional character until the + key is pressed. After each character is entered
 * print the decimal value used to store the character using the function call printf("%d", inChar)
 * 
 * There does seem to be a bug here to do with input validation. I think it has to do with how
 * getChar is implemented, if two characters are provided the return statement doesn't get caught
 * and it overrides unless another double char is found.
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char inChar = '0';

    do
    {
        printf("\nPush any key (type a + to stop)");
        inChar = getchar(); /*Get the next character typed*/
        inChar = tolower(inChar); /* convert to lowercase */
        getchar(); /* get and ignore the ENTER key*/
        printf("%d", inChar);
    } while (inChar != '+');
    printf("\n");
}