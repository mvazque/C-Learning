/**
 * Write a program that opens a file and displays the contents of the file with associated line 
 * numbers. That is, the program should print 1 before displaying the first line, 2 before 
 * displaying the second line and so on for each ine in the file.
 * 
 * Modify the program written to list the contents of the file on the printer assigned to your
 * computer
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    #define NUMELEM 80
    FILE *readFile = fopen("employee.dat", "r");

    if(readFile == NULL)
    {
        printf("File was not found.\n");
        exit(1);
    }

    char line[NUMELEM];
    int lineCounter = 1;

    while(fgets(line, NUMELEM, readFile) != NULL)
    {
        line[strlen(line) - 1 ] = '\0';
        printf("%d. %s\n", lineCounter, line);
        lineCounter++;
    }
}