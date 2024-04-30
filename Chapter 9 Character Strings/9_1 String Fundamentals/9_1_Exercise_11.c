/**
 * Write a C program that counts the number of words in a string. A word is encountered whenever 
 * a transition  from a blank space to a non-blank character is encountered. Assume the string 
 * contains only words separated by blank spaces
*/

#include <stdio.h>

int main()
{
    #define NUMELEM 80

    int wordCount(char[]);
    char inputStr[NUMELEM];

    printf("Please provide a string to count the words of.\n");
    fgets(inputStr, NUMELEM, stdin);

    printf("The numeber of words in this string is: %d.\n", wordCount(inputStr));

    return 0;
}

int wordCount(char str[])
{
    int wordCount = 1;
    for(int i = 1; str[i]; i++)
    {
        if(str[i] != ' ' && str[i-1] == ' ')
            wordCount++;
    }
    return wordCount;
}