/**
 * Write a C program that accepts a name as first name, last name and then displays the name as
 * last name, first name. For example, if the user entered Gary Bronson, the output should be 
 * Bronson, Gary
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    #define MAXELEMS 50

    int isAlphaString(char[]);
    void flipNames(char[], int);

    char inputString[MAXELEMS];

    printf("Please provide your name: ");
    fgets(inputString, MAXELEMS, stdin);

    if(!isAlphaString(inputString))
    {
        printf("Invalid name, only alphabet characters allowed.\n");
        return 0;
    }


    flipNames(inputString, MAXELEMS);

    printf("%s\n", inputString);
}


int isAlphaString(char str[])
{
    int i = 0;
    while(str[i] && str[i] != '\n')
    {
        if(!isalpha(str[i]))
        {
            if(str[i] == ' ' && isalpha(str[i + 1]))
            {
                i++;
                continue;
            }

            return 0;
        }
        i++;
    }

    return 1;
}


void flipNames(char name[], int maxElem)
{
    char nameCopy[maxElem];
    int i = 0;
    while(name[i] != ' ')
        i++;
    i++;
    strcpy(nameCopy, name);

    int j;

    for( j = 0; nameCopy[j + i] != '\n'; j++)
    {
        name[j] = nameCopy[j + i];
    }

    name[j++] = ',';
    name[j++] = ' ';

    int k;

    for(k = 0; k < i-1; k++)
    {
        name[j + k] = nameCopy[k];
    }

    name[j+k] = '\0';

}
