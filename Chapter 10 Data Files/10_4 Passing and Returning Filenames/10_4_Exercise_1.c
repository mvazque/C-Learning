/**
 * Write a function named fcheck() that checks whether a file exists. The function should be passed
 * a filename. If the file exists, the function should return a value of 1; otherwise the function
 * should return a value of 0;
*/

#include <stdio.h>
#include <string.h>

int main()
{
    #define NUMELEM 80
    
    int fcheck(char[]);

    char inputStr[NUMELEM];

    printf("Please provide the file name to look for.\n");
    fgets(inputStr, NUMELEM, stdin);
    // Removing the carriage return since fgets places it in the string instead of replacing it
    // with \0.
    inputStr[strlen(inputStr) - 1] = '\0';

    if(fcheck(inputStr))
    {
        printf("File %s was found\n", inputStr);
    }
    else
    {
        printf("File %s was not found\n", inputStr);
    }
}

/**
 * Attempts to read the passed file name. If it does not exist it will return a 0, it will 
 * return a 1 if the file is found
 * 
 * @param fileName: A character array that represents a string with the file name to check for
*/
int fcheck(char fileName[])
{
    FILE *readFile = fopen(fileName, "r");

    if(readFile == NULL)
    {
        return 0;
    }

    return 1;
}