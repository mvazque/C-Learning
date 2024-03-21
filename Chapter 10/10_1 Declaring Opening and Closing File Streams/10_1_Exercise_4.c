/** 
 * Enter and execute Program 10.3b on your computer
 * 
 * Add an fclose() function to program 10.3b and then execute the program
*/

#include <stdio.h>
#include <stdlib.h> /* needed for exit() */

int main()
{
    void trimNewLine(char[]);
    FILE *inFile;
    char fileName[13];

    printf("\nEnter a file name: ");
    fgets(fileName, 13, stdin);

    trimNewLine(fileName);
    
    inFile = fopen(fileName, "r"); /* open the file */
    if(inFile == NULL)
    {
        printf("\nThe file %s was not successfully opened.", fileName);
        printf("\nPlease check that the file currently exists.\n");
        exit(1);
    }

    printf("\nThe file has been successfully opened for reading.\n");

    fclose(inFile);
    printf("\nThe file has been successfully closed.\n");

    return 0;
}

void trimNewLine(char str[])
{
    int i = 0;
    while(str[i])
        i++;

    str[i-1] = '\0';
}