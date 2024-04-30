/**
 * Using the fseek() and ftell() functions, write a C function named totChars() that returns
 * the total number of characters in a file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totChars(FILE*);
    FILE *readFile = fopen("test.dat", "r");

    printf("Total characters are: %d.\n", totChars(readFile));

    fclose(readFile);
}

int totChars(FILE* readFile)
{
    fseek(readFile, 0L, SEEK_END);
    return ftell(readFile);
}