/**
 * The function fseek() returns 0 if the position specified has been reached, or 1 if the
 * position specified was beyond the file's boundaries. Modify Program 10.7 to display
 * an error message if fseek() returns 1.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch, n;
    long int offset, last;
    FILE *inFile;

    inFile = fopen("text.dat", "r");
    if(inFile == NULL)
    {
        printf("\nFailed to open the test.dat file.\n");
        exit(1);
    }
    fseek(inFile, 0L, SEEK_END);
    last = ftell(inFile);
    for(offset = 0; offset <= last; offset++)
    {
        /**
         * I'm pretty sure this block of code does it.
         * But I am unsure of how to get out of bounds because it seems the code just loops
         * back if the number is too high in the range. So like if I asked for index 12
         * but the file is a range of 0 - 10 it will get to 10 and then loop back 2
        */
        if(fseek(inFile, -offset, SEEK_END) == 1)
        {
            printf("Error: Out of bounds, could not access offset %ld", offset);
        }
        ch = getc(inFile); /* get the character */
        switch (ch)
        {
        case '\n':
            printf("LF : ");
            break;
        case EOF :
            printf("EOF: ");
            break;
        default:
            printf("%c : ", ch);
            break;
        }
    }

    printf("\n");

    fclose(inFile);
    return 0;
}
