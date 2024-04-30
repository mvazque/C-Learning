/**
 * Write a function to count the number of sentences entered; assume a sentence ends in either a
 * period, question mark, or exclamation point. (Hint: You will not be able to use gets() to input
 * the sentences, because gets() ends input on receipt of the first new line character.)
*/

#include <stdio.h>
#include <ctype.h>

#define YES 1
#define NO 0

int main()
{
    void findSentenceEnd(char[], int *, int *);
    #define MAXELEM 1024
    char inputStr[MAXELEM];
    int inASentenceGlobal = NO, sentenceCount = 0;
    printf("Please type in values, the program will end when providing a blank line (hitting enter/return) on an empty line: \n");

    while(1)
    {
        fgets(inputStr, MAXELEM, stdin);
        if(inputStr[0] == '\n')
            break;
        
        findSentenceEnd(inputStr, &inASentenceGlobal, &sentenceCount);
    }

    printf("The number of sentences is %d\n", sentenceCount);

}

void findSentenceEnd(char str[], int *inSentenceFromPreviousLine, int *sentenceCount)
{
    int isSentenceEnd(char);
    int inASentence = NO;
    if(*inSentenceFromPreviousLine == YES)
        inASentence = YES;
    
    int i = 0;
    while(str[i] != '\n')
    {
        if(isSentenceEnd(str[i]))
        {
            if(inASentence)
            {
                *sentenceCount += 1;
            }

            inASentence = NO;
        }
        else if(isalpha(str[i]) && inASentence == NO)
            inASentence = YES;
        i++;
    }

    *inSentenceFromPreviousLine = inASentence;
}


/**
 * Just used to simplify the check of a certain punctuation (. ? or !)
*/
int isSentenceEnd(char c)
{
    return ('.' == c) || ('?' == c) || ('!' == c);
}