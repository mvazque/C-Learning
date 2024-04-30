/**
 * Modify the countword() function in Program 9.11 to also count the number of letters in each word
 * and then return the average number of characters per word. Name the modified function
 * avgCharPerWord().
*/

#include <stdio.h>
#define MAXNUM 1000

int avgCharPerWord(char[], float*); /* function prototype */

int main()
{
    char message[MAXNUM];
    int numchar;
    float avgChar;

    printf("\nType in any number of words: ");
    fgets(message, MAXNUM, stdin);
    numchar = avgCharPerWord(message, &avgChar);
    printf("The number of words just entered is %d\n", numchar);
    printf("The average amount of characters per word is: %f\n", avgChar);

    return 0;
}

int avgCharPerWord(char list[], float *avgChar)
{
    #define YES 1
    #define NO 0

    int i, inaword, count = 0, totalChars = 0;

    inaword = NO;
    for(i = 0; list[i] != '\0'; i++)
    {
        if(list[i] == ' ')
        {
            inaword = NO;

        }
        else if(inaword == NO)
        {
            inaword = YES;
            totalChars++;
            count++;
        } 
        else{
            if(list[i] == '\n')
                continue;
            totalChars++;
        }
    }

    *avgChar = totalChars / count;

    return count;
}