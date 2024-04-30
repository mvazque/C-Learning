/**
 * Write a function named remove() that deletes all occurrences of a character from a string.
 * The function should take two arguments: the string name and the character to be removed
 * 
 * For example, if message contains the string HappyHolidays, the function call 
 * remove(message, 'H') should place the string appolidays into message.
 * 
 * Update, named the function removec() as remove() might be a reserved function and was throwing
 * errors.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    void removec(char*, char);
    #define NUMELEM 80
    char message[NUMELEM];
    char filterLetter;

    printf("Please provide a string to modify:");
    fgets(message, NUMELEM, stdin);
    message[strlen(message) - 1] = '\0';

    printf("Please provide a letter to filter out: ");
    filterLetter = getchar();
    getchar();

    removec(message, filterLetter);

    printf("%s\n", message);
}

void removec(char *str, char filterLetter)
{
    int offset = 0, i = 0;
    while(*(str + i + offset))
    {
        if(*(str + i + offset) == filterLetter)
            offset++;
        *(str + i) = *(str + i + offset);

        i++;
    }

    str[i] = '\0';
}