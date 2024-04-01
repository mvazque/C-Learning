/**
 * Rewrite the function getOpen() used in Program 10.9 to incorporate the file-checking procedures
 * described in the text. Specifically, if the entered filename exists, an appropriate message 
 * should be displayed. The user should then be presented with the option of entering a new filename
 * or allowing the program to overwrite the existing file, append to it, or exit.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *getOpen();

    FILE *writeFile;

    writeFile = getOpen();

    fputs("Test Response\n", writeFile);
}

/**
 * Will ask the user for a file name. It then checks if it can be read to see if it exists or not.
 * If it exists user will be prompted on whether they wish to overwrite or append to the file or
 * exit the program. If it does not exist the file is created
 * 
 * The resulting file in these cases is returned to the calling function
 * 
*/
FILE *getOpen()
{
    #define NUMELEM 80
    FILE *fname;
    char name[NUMELEM];
    char input;
    char carriageReturn;

    printf("\nEnter a file name: ");
    fgets(name, NUMELEM, stdin);

    name[strlen(name) - 1] = '\0';

    fname = fopen(name,"r");
    if(fname != NULL)
    {
        fclose(fname);
        printf("File name %s, already exists.\n", name);
        printf("Would you like to overwrite (w), append (a) or exit the program (x)? \n");

        input = fgetc(stdin);
        carriageReturn = fgetc(stdin);


        switch (input)
        {
        case 'w':
            fname = fopen(name, "w");
            break;
        case 'a':
            fname = fopen(name, "a");
            break;
        
        default:
            exit(1);
            break;
        }
    }
    else{
        fclose(fname);
        fname = fopen(name, "w");
    }

    
    if(fname == NULL)
    {
        printf("Failed to open the file %s.\n", name);
        exit(1);
    }

    return fname;
}