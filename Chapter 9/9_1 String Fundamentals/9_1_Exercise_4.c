/**
 * Write a C program that accepts a string of characters from a terminal and displays the hexadecimal
 * equivalent of each character
*/

#include <stdio.h>

int main()
{
    void printHexCode(char[]);

    #define NUMELEM 80
    int charCount(char[], int);
    char strng[NUMELEM];

    printf("Please provide a string to print hex values of.\n");
    fgets(strng, sizeof(strng), stdin);

    printHexCode(strng);
}

void printHexCode(char str[])
{
    int i = 0;
    while(str[i] && str[i] != 10)
    {
        printf("%c  %x\n", str[i], str[i]);
        i++;
    }
}