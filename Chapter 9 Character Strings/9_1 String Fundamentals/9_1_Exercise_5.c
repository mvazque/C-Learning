/**
 * Write a C program that accepts a string of characters from a terminal and displays the string
 * one word per line
*/

#include <stdio.h>

int main()
{
    #define NUMELEM 80
    void newLinesString(char[]);

    char str[NUMELEM];
    printf("Please enter a string to alter.\n");
    fgets(str, sizeof(str), stdin);
    printf("\n");

    newLinesString(str);
}

void newLinesString(char str[])
{
    int i = 0;
    while(str[i] && str[i] != 10)
    {
        if(32 == str[i])
            putchar('\n');
        else
            putchar(str[i]);
        i++;
    }

    putchar('\n');
}