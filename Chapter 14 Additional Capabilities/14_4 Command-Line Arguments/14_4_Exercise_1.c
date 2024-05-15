/**
 * Write a program that accepts the name of a data file as a command-line argument.
 * Have your program open the data file and display its contents, line by line, on the 
 * monitor screen.
 * 
 * Would the program written for Exercise 1a work correctly for a program file?
 * I am not entirely suer what the question is asking her. I don't think we can run a program
 * file using a command line argument since I don't think we can run a program within a
 * program. But I know header file and such exist so I wonder if there is a way to include
 * the command line argument.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    #define MAXCHARS 80
    FILE *readFile = fopen(argv[1], "r");

    if(readFile == NULL)
    {
        printf("File was not found.\n");
        return 0;
    }

    char line[MAXCHARS];

    while(fgets(line, MAXCHARS, readFile) != NULL)
        printf("%s", line);

    fclose(readFile);
    printf("\n");
}
