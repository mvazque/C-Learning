/**
 * Create a function that counts both characters and words. (Hint: Refer to section 7.3 on how to
 * return multiple values.)
*/

#include <stdio.h>

int main()
{
    void countCharAndWords(char[], int*, int*);
    #define MAXELEM 50

    char inputStr[MAXELEM];
    int charCount, wordCount;

    printf("Please provide a string to analyze:\n");
    fgets(inputStr, MAXELEM, stdin);

    countCharAndWords(inputStr, &charCount, &wordCount);

    printf("The number of characters is: %d\n", charCount);
    printf("The number of words is: %d\n", wordCount);

    return 0;
}

/**
 * This counts the number of words and characters (including the carriage return '\n')
*/
void countCharAndWords(char str[], int *charCount, int *wordCount)
{
    #define YES 1
    #define NO 0
    int i = 0;
    int inaword = NO;
    

    while(str[i])
    {
        *charCount += 1;

        if(str[i] == ' ')
            inaword = NO;
        else if(inaword == NO)
        {
            inaword = YES;
            *wordCount += 1;
        }

        i++;
    }
}