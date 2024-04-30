/** Write a C program that accepts a string and two integer numbers from a user. Each of these
 * inputs should be preceded by a prompt and stored using individual variable names. Have your 
 * program call a function that assembles input data into a single string. Display the assembled
 * string using a puts() call
*/

#include <stdio.h>

int main()
{
    void assemble(char[], char[], int, int);
    void trimNewLine(char[]);

    #define MAXELEMS 20
    char assembledStr[MAXELEMS * 3];
    char inputStr[MAXELEMS];
    int inputNum1, inputNum2;

    printf("Please provide a string:\n");
    fgets(inputStr, MAXELEMS, stdin);
    trimNewLine(inputStr);

    printf("Please provide an integer: ");
    scanf("%d", &inputNum1);

    printf("Please provide another integer: ");
    scanf("%d", &inputNum2);

    assemble(assembledStr, inputStr, inputNum1, inputNum2);

    printf("The assembled string: \n");
    printf("%s\n", assembledStr);
}

void trimNewLine(char str[])
{
    int i = 0;
    while(str[i] != '\n')
        i++;
    
    str[i] = '\0';
}

void assemble(char resultStr[], char inputStr[], int num1, int num2)
{
    sprintf(resultStr, "%s %d %d", inputStr, num1, num2);
    return;
}