/**
 * Write a C function named trimrear() that deletes all trailing blanks from a string.
 * 
 * Write a simple main() function to test the trimrear() function
*/

#include <stdio.h>
#include <string.h>

int main()
{
    void trimrear(char[]);
    char testString[] = "Test string         ";

    printf("Starting String.\n");
    printf("%s\n", testString);
    printf("Length of %lu.\n", strlen(testString));

    trimrear(testString);

    printf("The trimmed string.\n");
    printf("%s\n", testString);
    printf("Length of %lu.\n", strlen(testString));

    return 0;

}

void trimrear(char str[])
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    i--;

    while(str[i] == ' ')
    {
        i--;
    }

    str[i] = '\0';

}