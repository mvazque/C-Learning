/**
 * Modify the function from the previous exercise to count the number of words as well as the
 * number of sentences. The function should return the average words per sentence
*/

#include <stdio.h>
#include <ctype.h>

#define YES 1
#define NO 0

int main()
{
    void findSentenceEnd(char[], int *, int *, int*);
    float avgWordsPerSentence(int, int);
    #define MAXELEM 1024
    char inputStr[MAXELEM];
    int inASentenceGlobal = NO, sentenceCount = 0, wordCount = 0;
    printf("Please type in values, the program will end when providing a blank line (hitting enter/return) on an empty line: \n");

    while(1)
    {
        fgets(inputStr, MAXELEM, stdin);
        if(inputStr[0] == '\n')
            break;
        
        findSentenceEnd(inputStr, &inASentenceGlobal, &sentenceCount, &wordCount);
    }

    printf("The average number of words per sentences is %f\n", avgWordsPerSentence(wordCount, sentenceCount));

}

void findSentenceEnd(char str[], int *inSentenceFromPreviousLine, int *sentenceCount, int *wordCount)
{
    int isSentenceEnd(char);
    int inASentence = NO;
    int inAWord = NO;
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

        
        if(str[i] == ' ')
            inAWord = NO;
        else if(inAWord == NO)
        {
            inAWord = YES;
            *wordCount += 1;
        }
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

float avgWordsPerSentence(int totalWords, int totalSentences)
{
    return (float) totalWords / totalSentences;
}