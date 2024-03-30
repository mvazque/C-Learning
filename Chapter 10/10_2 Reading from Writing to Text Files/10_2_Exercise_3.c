/**
 * Create a file named employee.dat containing the following data:
 * 
 * Anthony A.J. 10031 7.82 12/18/62
 * Burrows W.K. 10067 9.14 6/9/63
 * Fain B.D 10083 8.79 5/18/59
 * Janney P 10095 10.57 9/28/62
 * Smith G.J. 10105 8.50 12/20/61
 * 
 * Write a program cal fcopy to read the employ.dat file created 
 * 3a and produce a duplicate copy of the file named employ.bak
 * 
 * Modify the program written in 3b to accept the names of the original and duplicate files as user
 * input.
 * 
 * d) Since fcopy always copies data from an original file to a duplicate file, can you think of a
 * better method of accepting the original and duplicate filenames than prompting the user for them
 * each time the program is executed?
 * I am not quite sure honestly. Like the main thing would be to embed the file names to avoid
 * asking the user every time but that remove dynamic functionality. You could also ask for just
 * one file name since the backup file should have the same name but a different extension.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    #define NUMELEM 81
    void setupBackupFileName(char *, char *);
    FILE *readFile;
    FILE *writeFile;

    char readFileName[] = "employee.dat";
    char writeFileName[] = "employee.bak";
    char line[NUMELEM];
    char inputFileName[NUMELEM];
    char backupFileName[NUMELEM];

    printf("Please provide the name of the file to read.\n");
    fgets(inputFileName, NUMELEM, stdin);

    inputFileName[strlen(inputFileName) - 1] = '\0';
    strcpy(backupFileName, inputFileName);
    setupBackupFileName(backupFileName, inputFileName);

    readFile = fopen(readFileName, "r");

    if(readFile == NULL)
    {
        printf("File %s was not found", readFileName);
        exit(1);
    }

    writeFile = fopen("employee.bak", "w");

    while(fgets(line, NUMELEM, readFile) != NULL)
        fputs(line, writeFile);

    return 0;
    
}

void setupBackupFileName(char *fileName, char *backupFileName)
{
    int stringLength = strlen(fileName);
    backupFileName[stringLength - 3] = 'b';
    backupFileName[stringLength - 2] = 'a';
    backupFileName[stringLength - 1] = 'k';
}