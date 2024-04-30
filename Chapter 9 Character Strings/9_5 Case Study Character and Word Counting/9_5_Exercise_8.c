/**
 * The Fog Index is an index that can be used to determine the approximate reading grade level of an
 * article. It is determined by measuring both sentence length and the fraction of words with three
 * or more syllables, without taking into account either the article's conceptual difficulty or its
 * clarity. The index is determined using the following steps:
 * 
 * Step 1: 
 * Select a sample of at least 100 words.
 * 
 * Step 2:
 * Count the number of sentences. Any clause that is separated by a semicolon or colon should be
 * counted as a separate sentence
 * 
 * Step 3:
 * Count the number of words containing three or more syllables; but do not include words that
 * reach three or more syllables because of either "es" or "ed" endings, or because they are
 * compounds of simple words, such as everything or seventeen
 * 
 * Step 4
 * Calculate the Fog Index using the formula:
 * 
 * fofIndex = 0.4 * ((numberOfWords / numberOfSentences) + 100 * (numberOfBigWords/numberOfWords))
 * 
 * For this exercise obtain samples of at least 10 sentences from a variety of sources, such as 
 * children's books, high school textbooks, college textbooks, or a number of different newspapers.
 * For each of these samples, manually determine the number of words and big words contained in the
 * sample. Then write a C function that: accepts the number of words, accepts the number of 
 * sentences, accepts the number of big words, calculates a Fog Index, and returns the calculated
 * value. Verify the value returned by your function against your hand calculations
 * 
 * Additional research I did
 * Average syllable length is 3 letters
 * So more than 6 letters is a three syllable word?
*/

#include <stdio.h>
#include <ctype.h>

#define YES 1
#define NO 0

int main()
{
    void findSentenceEnd(char[], int *, int *, int*, int*);
    float fogIndexCalc(int, int, int);

    #define MAXELEM 1024
    char inputStr[MAXELEM];
    int inASentenceGlobal = NO, sentenceCount = 0, wordCount = 0, bigWordCount = 0;
    printf("Please type in values, the program will end when providing a blank line (hitting enter/return) on an empty line: \n");

    while(1)
    {
        fgets(inputStr, MAXELEM, stdin);
        if(inputStr[0] == '\n')
            break;
        
        findSentenceEnd(inputStr, &inASentenceGlobal, &sentenceCount, &wordCount, &bigWordCount);
    }

    printf("The Fog Index is %f\n", fogIndexCalc(wordCount, sentenceCount, bigWordCount));
}

void findSentenceEnd(char str[], int *inSentenceFromPreviousLine, int *sentenceCount, int *wordCount, int *bigWordCount)
{
    int isSentenceEnd(char);
    int inASentence = NO;
    int inAWord = NO;
    int charInWordCount = 0;
    if(*inSentenceFromPreviousLine == YES)
        inASentence = YES;
    
    int i = 0;
    while(str[i] != '\n')
    {
        // This block checks if we found the end of a sentence. If an end punctuation is found 
        // we will check if we were in a sentence meaning we had alphabetical letters since the 
        // last sentence end punctuation.
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

        /**
         * This block counts the number of words
         * It also counts the number of characters in a word
         * When a space is found while we were in a word meaning that a word has ended, we will check
         * if the word is a "big word" meaning more than two syllables which we have decided is
         * 6 characters in length. We check if it only reached 7 or 8 characters in length due
         * to ending in es or ed which disqualifies it to be a long word. If not then the big word
         * counter is increased
         * 
         * Big words will be counted separate from normal words as normal words are counted
         * whenever we transition to an alphabetical letter for the first time.
        */
        if(str[i] == ' ')
        {
            if(inAWord && charInWordCount > 6)
            {
                if(charInWordCount == 7 || charInWordCount == 8)
                {
                    if(str[i-2] == 'e' && (str[i-1] == 'd' || str[i-1] == 's'))
                    {
                        // Do nothing
                    }
                    else
                    {
                        *bigWordCount += 1;
                    }
                }
            }
            charInWordCount = 0;
            inAWord = NO;
        }   
        else if(inAWord == NO)
        {
            inAWord = YES;
            *wordCount += 1;
            charInWordCount++;
        }
        else if(inAWord == YES)
        {
            if(str[i] != '-')
                charInWordCount ++;
        }
        i++;
    }

    // This is kept in case the line did not end in punctuation so we can track a sentence across
    // lines
    *inSentenceFromPreviousLine = inASentence;
}


/**
 * Just used to simplify the check of a certain punctuation (. ? or !)
*/
int isSentenceEnd(char c)
{
    return ('.' == c) || ('?' == c) || ('!' == c) || (';' == c) || (':' == c);
}

/**
 * Calculates the fog index
*/
float fogIndexCalc(int numWords, int numSentences, int numBigWords)
{
    return 0.4 * (((float)numWords / numSentences) + 100 * ((float)numBigWords/numWords));
}

// Squire Trelawney, Dr. Livesey, and the rest of these gentlemen asked me to write down the whole particulars about Treasure Island, from the beginning to the end, keeping nothing back but the bearings of the island, and that only because there is still treasure not yet lifted, I take up my pen in the year of grace 17--, and go back to the time when my father kept the "Admiral Benbow" inn, and the brown old seaman, with the sabre cut, first took up his lodging under our roof. 
// I remember him as if it were yesterday, as he came plodding to the inn door, his sea-chest following behind him in a hand-barrow; a tall, strong, heave, nut-brown man; his tarry pigtail falling over the shoulders of his soiled blue coat; his hands ragged and scarred, with black, broken nails; and the sabre cut across one cheek, a dirty, livid white. I remember him looking round the cove and whistling to himself as he did so, and then breaking out in the old sea-song that he sang so often afterwards: 
// "Fifteen men on the dead man's chest-- Yo-ho-ho, and a bottle of rum!" in the high, old tottering voice that seemed to have been tuned and broken at the capstan are. Then he rapped on the door with a bit of a stick like a handspike that he carried.
// 30 Big words