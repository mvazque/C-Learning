/**
 * Write a C function that uses pointers to add a single character at the end of an existing
 * string. The function should replace the existing \0 character with the new character and
 * append a new \0 to the end of hte string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    #define NUMELEMS 80
    char strInput[NUMELEMS];
    char charInput;

    printf("Please provide a string to modify: \n");
    fgets(strInput, NUMELEMS, stdin);

    *(strInput + strlen(strInput) - 1) = '\0';

    printf("Please provide a character to place at the end of the string: \n");
    charInput = getchar();
    getchar();

    int strLength = strlen(strInput);
    *(strInput + strLength) = charInput;
    *(strInput + strLength + 1) = '\0';


    printf("%s\n", strInput);

}