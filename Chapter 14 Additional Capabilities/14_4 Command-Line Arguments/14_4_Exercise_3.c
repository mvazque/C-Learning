/**
 * Write a program that accepts a command-line argument as the name of a data file. Given
 * the name, your program should display he number of characters in the file.
 * Hint: Use the fseek() and ftell() functions discussed in Section 10.3
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        printf("Error, no input file provided.\n");
        return 0;
    }
        

    FILE *readFile = fopen(argv[1], "r");

    if(readFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    fseek(readFile, 0L, SEEK_END);
    printf("There are %ld characters in the file %s\n", ftell(readFile), argv[1]);

    fclose(readFile);

}