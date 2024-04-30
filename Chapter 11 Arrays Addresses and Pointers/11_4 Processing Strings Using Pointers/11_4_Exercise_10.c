/**
 * Write a C function named trimfrnt() that deletes all leading blanks from a string
 * Write the function using pointers
*/

#include <stdio.h>
#include <string.h>

int main()
{
    #define NUMELEM 80
    char strInput[NUMELEM];

    printf("Please input a string to clear the leading spaces from.\n");

    fgets(strInput, NUMELEM, stdin);

    *(strInput + strlen(strInput) - 1) = '\0';

    char *strPtr = strInput;

    while (*strPtr && *strPtr == ' ')
        *strPtr++;
    

    printf("Trimmed string \n");
    printf("%s\n", strPtr);
}