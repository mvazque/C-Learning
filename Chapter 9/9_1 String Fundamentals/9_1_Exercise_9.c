/**
 * Write a C function named toUpper() that converts individual lowercase letters into uppercase
 * letter. The expresion ch - 'a' + 'A' can be used to make the conversion for any lowercase 
 * character stored in ch.
 * 
 * Add a data input check to the function written to verify that a valid lowercase letter is passed
 * to the function. A character is lowercase if it is greater than or equal to 'a and less than
 * or equal to 'z'. If the character is not a valid lowercase letter, have the function return the
 * passed character unaltered
 * 
 * Write a C program that accepts a string from a terminal and converts all lowercase letters in 
 * the string to uppercase letters.
*/

#include <stdio.h>

char toUpper(char);
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
        str[i] = toUpper(str[i]);
        i++;
    }
}

char toUpper(char charToConvert)
{
    if(charToConvert >= 'a' && charToConvert <= 'z')
    {
        return charToConvert - 'a' + 'A';
    }
    return charToConvert;
}