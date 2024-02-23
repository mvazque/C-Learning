/**
 * Print the decimal, octal and hexadecimal of all characters between the start and stop characters
 * entered by a user. For example, if the use enters an a and z, the program should print all the 
 * characters between a and z and their respective numerical values. Make sure that the second
 * character entered by the user occurs later in the alphabet than the first character. If it does
 * not write a loop that repeatedly asks the user for a valid second character until on is entered.
*/

#include <stdio.h>

int main(void)
{
    #define TRUE 1
    char character, endingCharacter;

    do
    {
        printf("Please provide start and end characters: ");
        scanf("%c %c", &character, &endingCharacter);

        if(endingCharacter - character < 0)
        {
            printf("Invalid combination. Ending character must come after starting character.\n");
            continue;
        }
        break;
    } while (TRUE);
    
    do
    {
        printf("%3c %3d %3o %3x\n", character, character, character, character);
        character++;
    } while (character <= endingCharacter);
    
    return 0;
}