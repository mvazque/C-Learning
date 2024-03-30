/**
 * a. Using the gets() and fputs() functions write a C program that accepts lines of text from the
 * keyboard and writes each line to a file named text.dat until an empty line is entered. An empty 
 * line is a line with no text -- just a new line caused by pressing the Enter key.
 * At the time of doing this gets is deprecated so will be jumping to part b from the start.
 * 
 * b. Replace the gets() function in the program with an equivalent call to fgets()
 * 
 * c. Modify program 10.6 to read and display the data stored in the txt.dat file created in exercise
 * a
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define NUMELEM 80
    void readFile();

    char inputStr[NUMELEM];
    char fileName[] =  "text.dat";

    FILE *inFile;
    inFile = fopen(fileName, "w");

    printf("Please provide text. End the process by providing an empty line.\n");
    do
    {
        /* code */
        fgets(inputStr, NUMELEM, stdin);

        if(inputStr[0] == '\n')
        {
            break;
        }

        fputs(inputStr, inFile);

    } while (1);
    
    fclose(inFile);

    readFile();

    return 0;
}


void readFile()
{
    char line[81], descrip[10];
    double price;
    FILE *inFile;

    inFile = fopen("text.dat", "r");
    if(inFile == NULL)
    {
        printf("\nFailed to open the file.\n");
        exit(1);
    }

    while(fgets(line, 81, inFile) != NULL)
        printf("%s", line);
    
    fclose(inFile);
    printf("\nThe file has been successfully written.\n");
}