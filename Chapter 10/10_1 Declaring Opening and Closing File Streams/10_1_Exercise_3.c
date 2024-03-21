/**
 * Enter and execute Program 10.3a on your computer.
 * 
 * Add an fclose() function to Program 10.3a and then execute the program.
*/

#include <stdio.h>
#include <stdlib.h> /* needed for exit() */

int main()
{
    FILE *inFile;
    char fileName[13] = "prices.dat";

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