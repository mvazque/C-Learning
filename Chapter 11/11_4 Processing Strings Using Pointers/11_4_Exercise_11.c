/**
 * Write a C function named trimrear() that deletes all trailing blanks from a string. Write the
 * function using pointers.
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

    char *strPtr = (strInput + strlen(strInput) - 1);

    while (strPtr != strInput && *strPtr == ' ')
        *strPtr--;
    
    if(*strPtr == ' ')
        *strPtr = '\0';
    else
        // Pointer will be pointing at the final non ' ' character which we want to keep
        // so we add the NULL terminating character to the space next to it.
        *(strPtr + 1) = '\0';

    printf("Trimmed string \n");
    printf("%s.\n", strInput);
}