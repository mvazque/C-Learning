/**
 * Using pointers repeat Programming Exercise 6 from Section 9.1.
 * 
 * 
 * Write a C function that reverses the characters in a string.
 * Hint: This can be considered as a string copy starting from the back end of the first string
*/

#include <stdio.h>

int main()
{
    #define NUMELEMS 80

    void reverseString(char[]);

    char str[NUMELEMS];

    printf("Please provide a string to reverse\n");
    fgets(str, NUMELEMS, stdin);

    reverseString(str);
}

void reverseString(char *str)
{
    int i = 0;
    while(*(str + i))
    {
        i++;
    }
    // Subtracting 2 to remove the NULL at the end of a string and the end of line character
    i -= 2;

    for(;i >= 0; i--)
    {
        putchar(*(str + i));
    }
    putchar('\n');
}