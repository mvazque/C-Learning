/**
 * It has been said that a monkey pushing keys at random on a keyboard could produce the works
 * of Shakespeare, given sufficient time. Simulate this by having a program select and display
 * letter at random. Count the number of letters typed until the program produces on the two
 * letter words, at, is, he, we, up, or on. When one of these words is produced stop the program and
 * display the total number of letters typed
 * 
 * Hint: Choose a letter by selecting a random integer number between 1 and 26
 * 
 * Generated the word 'at'.
 * The word was found after 85855784 tries.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomWord();
    int triesCounter;

    do
    {
        triesCounter++;
        if(randomWord())
            break;
    } while (1);
    
    printf("The word was found after %d tries.\n", triesCounter);
    return 0;
}

int randomWord()
{
    int char1, char2;

    srand(time(NULL) + rand() % 5);

    char1 = 1 + (int) rand() % 26;
    char2 = 1 + (int) rand() % 26;


    printf("Got letters %d and %d.\n", char1, char2);
    if(char1 == 1 && char2 == 20)
    {
        printf("Generated the word at.\n");
        return 1;
    }
    else if(char1 == 9 && char2 == 19)
    {
        printf("Generated the word is.\n");
        return 1;
    }
    else if(char1 == 8 && char2 == 5)
    {
        printf("Generated the word he.\n");
        return 1;
    }
    else if(char1 == 23 && char2 == 5)
    {
        printf("Generated the word we.\n");
        return 1;
    }
    else if(char1 == 21 && char2 == 16)
    {
        printf("Generated the word up.\n");
        return 1;
    }
    else if(char1 == 15 && char2 == 14)
    {
        printf("Generated the word on.\n");
        return 1;
    }

    return 0;
        
}