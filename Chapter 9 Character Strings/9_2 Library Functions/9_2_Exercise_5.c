/**
 * Write C function named chartype() that determines the ASCII type of any integer in the range 0
 * to 127. If the number represents a printable ASCII character print the character with one of
 * the following appropriate messages:
 * 
 * The ASCII character is a lowercase letter.
 * The ASCII character is an uppercase letter.
 * The ASCII character is a digit.
 * The ASCII character is a punctuation mark
 * The ASCII Character is a space
 * 
 * If the ASCII character is a nonprintable character, display its ASCII code in decimal format and
 * the message. 
 * 
 * The ASCII character is a nonprintable character.
 * 
 * 
 * Write a main() function to test the function written. The main() function should generate 20
 * random numbers in the range 0 to 127 and call chartype() for each generated number
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    void generateData(char[], int);
    void processCharacters(char[], int);
    #define NUMELEM 20

    char testData[NUMELEM];

    generateData(testData, NUMELEM);

    processCharacters(testData, NUMELEM);
}

void generateData(char str[], int numElem)
{
    srand(time(NULL));
    for(int i = 0; i < numElem; i++)
        str[i] = rand() % 128;
}

void processCharacters(char str[], int numElem)
{
    char chr;
    for(int i = 0; i < numElem; i++)
    {
        chr = str[i];
        if(!isprint(chr))
        {
            printf("The character has ASCII code %d.\n", chr);
            printf("The ASCII character is a nonprintable character.\n");
            continue;
        }

        printf("The printable ASCII character %c.\n", chr);
        if(islower(chr))
        {
            printf("The ASCII character is a lowercase letter.\n");
        } else if(isupper(chr))
        {
            printf("The ASCII character is an uppercase letter.\n");
        } else if(isdigit(chr))
        {
            printf("The ASCII character is a digit.\n");
        } else if(ispunct(chr))
        {
            printf("The ASCII character is a punctuation mark.\n");
        } else if(isspace(chr))
        {
            printf("The ASCII Character is a space.\n");
        }
    }
}