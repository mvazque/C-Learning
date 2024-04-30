/**
 * Write a C program that accepts a string from a terminal and converts all uppercase letters in
 * a string to lowercase letters
*/

#include <stdio.h>

char toLower(char);
void stringHandler(char[]);

int main()
{
    #define NUMELEM 80

    char inputString[NUMELEM];

    printf("Please provide a string to turn to uppercase: \n");
    fgets(inputString, NUMELEM, stdin);

    stringHandler(inputString);

    printf("Resulting String.\n");
    printf("%s", inputString);
    
}

void stringHandler(char str[])
{
    int i = 0;
    while(str[i])
    {
        str[i] = toLower(str[i]);
        i++;
    }
}

char toLower(char charToConvert)
{
    if(charToConvert >= 'A' && charToConvert <= 'Z')
    {
        return charToConvert - 'A' + 'a';
    }
    return charToConvert;
}