/**
 * Write a C function that uses pointers to delete a single character from the end of the string.
 * This is effectively achieved by moving the \0 one position closer to the start of the string
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

    *(strInput + strlen(strInput) - 2) = '\0';

    printf("%s\n", strInput);

}