/**
 * Write a C program that will read and display every second character in a file named
 * test.dat.
*/
// Use fseek, SEEK_CUR and an offset of 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *readFile = fopen("test.dat", "r");

    int last;
    fseek(readFile, 0L, SEEK_END);
    last = ftell(readFile);

    fseek(readFile, 0L, SEEK_SET);
    char c;
    do
    {
        c = fgetc(readFile);
        printf("%c", c);
        fseek(readFile, 1L, SEEK_CUR);
    } while (ftell(readFile) + 1 <= last);
    // Bulbs 3.12 Test Data
    printf("\n");
    fclose(readFile);
}