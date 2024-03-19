/**
 * Write a function to count the number of lines entered. (Hint: You will not be able to use gets()
 * to input the lines, because gets() ends input on receipt of the first newline character.);
 * 
*/

#include <stdio.h>

int main()
{
    #define MAXELEM 1024
    char inputStr[MAXELEM];
    int newLineCount = 0;
    printf("Please type in values, the program will end when providing a blank line (hitting enter/return) on an empty line: \n");

    while(1)
    {
        fgets(inputStr, MAXELEM, stdin);
        if(inputStr[0] == '\n')
            break;
        else
            newLineCount++;
    }

    printf("The number of new lines is %d\n", newLineCount);
}