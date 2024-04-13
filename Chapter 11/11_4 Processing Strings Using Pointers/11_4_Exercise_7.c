/**
 * Write a program using getchar(), toupper() and putchar() library functions that echo
 * back each letter entered in its uppercase form. The program should terminate when the digit
 * 1 key is pressed
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char inputChar;
    do
    {
        inputChar = getchar();
        getchar();

        putchar(toupper(inputChar));
        putchar('\n');

    } while (inputChar != '1');
    
}