/**
 * Assume that a data file consisting of a group of individual lines has been created. Write a 
 * C function named printLine() that will read and display any desired line of the file.
 * For example the function call printLine(fileName, 5); should display the fifth line of
 * the filename passed to it.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void printLine(char[], int);

    char fileName[] = "exercise6.dat";

    printLine(fileName, 5);
    
}

/**
 * This will print the line indicated by the input of the file being input
 * @param fileName: A string / character array that contains the name of the file to read
 * @param lineNumber: The line number ot print
*/
void printLine(char fileName[], int lineNumber)
{
    #define NUMELEM 80
    char lineToPrint[NUMELEM];
    FILE *readFile = fopen(fileName, "r");

    for(int i = 1; i < lineNumber; i++)
    {
        /** 
         * Looked it up online
         * %*[^\n]%*c
         * is a sort of special code. From what I understand in fscanf it will grab everything
         * up to a new line "\n" listed by %*[^\n] and then grab the next character which will be
         * the new line %*c
        */
        fscanf(readFile, "%*[^\n]%*c");
    }
    fgets(lineToPrint, NUMELEM, readFile);
    printf("%s", lineToPrint);
}
