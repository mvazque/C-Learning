/**
 * Modify the program written for Exercise 1a so that each line displayed is preceded by a line
 * number.
 * 
 * Modify the program written for exercise 2a so that the command-line argument -p
 * will cause the program to list the contents of the file on the printer attached to your 
 * system
 * 
 * Don't quite get about going to printer but did set a statement to check for the flag
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    #define MAXCHARS 80
    FILE *readFile = fopen(argv[1], "r");

    if(readFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    char line[MAXCHARS];
    int lineCount = 1;

    while(fgets(line, MAXCHARS, readFile) != NULL)
    {
        if(argc == 3 && strcmp(argv[2], "-p") == 0)
            printf("Would print to printer here\n");
        else
            printf("%d. %s", lineCount++, line);
    }

    printf("\n");
    fclose(readFile);

}