/**
 * Write a C function named addChar() to insert one string of characters into another string. The
 * function should accept three arguments: the string to be inserted, the original string, and the
 * position in the original string where the insertion should begin. For example the call 
 * addChar("for all", message, 6) should insert the character fo all in message starting at 
 * message[5]
*/

#include <stdio.h>
#include <string.h>

int main()
{
    void addChar(char[], char[], int, int);

    #define NUMELEM 80

    char inputStr[NUMELEM];
    char addStr[NUMELEM];
    int index;

    printf("Please provide a string to start with: ");
    fgets(inputStr, NUMELEM, stdin);

    printf("Please provide a string to add to it:");
    fgets(addStr, NUMELEM, stdin);

    printf("Please provide the position of where to place this string: ");
    scanf("%d", &index);

    int stringLength = strlen(inputStr);

    if(stringLength < index)
    {
        printf("Error: Index is not within string length");
        return 0;
    }

    addChar(addStr, inputStr, index, NUMELEM);
}

void addChar(char strToAdd[], char origStr[], int startIndex, int maxStringLength)
{
    int i, j, k;
    char tempStr[maxStringLength];

    for(i = 0; origStr[i + startIndex + 1]; i++)
    {
        tempStr[i] = origStr[startIndex + i];
    }

    i -= 2;

    for(j = 0; strToAdd[j + 1]; j++)
    {
        origStr[i + j] = strToAdd[j];
    }

    for(k = 0; tempStr[k]; k++)
    {
        origStr[i + j + k] = tempStr[k];
    }

    origStr[i + j + k] = '\n';
    origStr[i + j + k + 1] = '\0';

    printf("%s", origStr);
}