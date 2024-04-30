/**
 * Enter and execute Program 9.6 on your computer
*/

#include <stdio.h>
#include <ctype.h> /* required for the character function library */

int main()
{
    #define MAXCHARS 100
    char message[MAXCHARS];
    void convertToUpper(char[]); /* function prototype */

    printf("\nType in any sequence of characters:\n");
    fgets(message, MAXCHARS, stdin);
    
    convertToUpper(message);

    printf("The characters just enetered, in uppercase are: \n%s\n", message);

    return 0;
}

// this function converts all lowercase characters to uppercase
void convertToUpper(char message[])
{
    int i;
    for(i = 0; message[i] != '\0'; i++)
        message[i] = toupper(message[i]);
}