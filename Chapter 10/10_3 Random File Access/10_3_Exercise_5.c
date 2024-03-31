/**
 * a) Write a C function named readBytes() that reads and displays n characters starting from any
 * position in a file. The function should accept three arguments a file pointer, the offset of the
 * first character to be read, and the number of characters to be read.
 * 
 * b) Modify the readBytes() function written to store the characters read into a string or an
 * array. The function should accept the address of the storage area as a fourth argument
*/
// Bulbs 3.12 Test Data

#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define NUMELEM 80
    void readBytes(FILE *, int, int, char[]);
    char fileName[] = "test.dat";
    FILE *readFile = fopen(fileName, "r");

    char str[NUMELEM];

    if(readFile == NULL)
    {
        printf("File %s was not found.\n", fileName);
        exit(1);
    }

    readBytes(readFile, 2, 5, str);

    printf("Stored array is: %s.\n", str);
}

void readBytes(FILE *readFile, int startIndex, int numCharsToDisplay, char storageArray[])
{
    fseek(readFile, 0L, SEEK_END);
    int last = ftell(readFile);

    if((startIndex + numCharsToDisplay) > last)
    {
        numCharsToDisplay = last - startIndex;
        printf("%d\n", numCharsToDisplay);
    }

    fseek(readFile, startIndex, SEEK_SET);
    char c;
    int i;
    for(i = 0; i < numCharsToDisplay ; i++)
    {
        c = fgetc(readFile);
        storageArray[i] = c;
        printf("%c", c);
    }

    storageArray[i] = '\0';
    printf("\n");
}