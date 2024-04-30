/**
 * Rewrite Program 10.7 so that the origin for the fseek() function used in the for loop is the
 * start of the file rather than the end. The program should still print the file in reverse order.
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
    for(offset = last; offset >= 0; offset--)
    {
        fseek(inFile, offset, SEEK_SET); /* move back to the next character */
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
