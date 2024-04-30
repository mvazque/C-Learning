/**
 * Write a C program using getchar(), toupper() and putchar() functions that echo back all the letters
 * entered in their uppercase form. The program should terminate when either an x or X is entered
 * Hint Convert all letters to uppercase and test only for an X
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    do
    {
        printf("\nPlease provide a character: ");
        input = getchar();
        getchar();
        input = toupper(input);
        putchar(input);
    } while (input != 'X');
    printf("\nProgram has ended.\n");

    return 0;
}