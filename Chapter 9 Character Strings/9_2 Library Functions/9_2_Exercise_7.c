/**
 * Write a function named countlets() that return the number of letters in an entered string. Digits
 * space, punctuation, tabs, and newline characters should not be included in the returned count.
 * 
 * Write a simple main() function to test the countlets() function 
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int countlets(char[]);
    #define NUMELEM 80
    char inputStr[NUMELEM];

    printf("Please provide a string to check.\n");
    fgets(inputStr, NUMELEM, stdin);

    printf("The number of letters in the string is: %d.\n", countlets(inputStr));

    return 0;
}

int countlets(char str[])
{
    int i = 0, letCount = 0;
    while(str[i])
    {
        if(isalpha(str[i]))
            letCount++;
        i++;
    }

    return letCount;
}