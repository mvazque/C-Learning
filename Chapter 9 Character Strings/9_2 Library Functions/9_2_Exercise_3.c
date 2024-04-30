/**
 * Write a C function named trimfrnt() that deletes all leading blanks from a string.
 * 
 * Write a simple main() function to test the trimfrnt() function written for the above exercise
*/

#include <stdio.h>

int main()
{
    void trimfrnt(char[]);
    char testString[] = "         Test string";

    printf("Starting String.\n");
    printf("%s\n", testString);

    trimfrnt(testString);

    printf("The trimmed string.\n");
    printf("%s\n", testString);

    return 0;

}

void trimfrnt(char str[])
{
    int i = 0;
    while(str[i] == ' ')
    {
        i++;
    }
    int j = 0;
    while(str[i + j])
    {
        str[j] = str[i + j];
        j++;
    }

    str[j] = '\0';

}