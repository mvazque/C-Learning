/**
 * Enter and Execute program 6.9
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(int); /* prototype for flip function */
void percentages(int, int); /* prototype for percentage function */

int main()
{
    int numTosses = 1000;
    int heads;

    heads = flip(numTosses);
    percentages(numTosses, heads);

    return 0;
}

// This method tosses the coin numTimes
// and returns the number of heads

int flip(int numTimes)
{
    int randValue;
    int heads = 0;
    int i;

    srand(time(NULL));

    for(i = 1; i < numTimes; i++)
    {
        randValue = 1 + (int)rand() % 100;
        if(randValue > 50)
            heads++;  
    }
    return heads;
}

//this method calculates and displays
// the percentages of heads and tails
void percentages(int numTosses, int heads)
{
    int tails;
    float perHeads, perTails;

    if(numTosses == 0)
        printf("There were no tosses, so no percentages can be calculated.\n");
    else
    {
        tails = numTosses - heads;
        printf("Number of coin tosses: %d\n", numTosses);
        perHeads = (float)heads/numTosses * 100.0;
        perTails = (float)tails/numTosses * 100.0;
        printf("Heads came up %6.2f percent of the time.\n", perHeads);
        printf("Tails came up %6.2f percent of the time.\n", perTails);

    }
}