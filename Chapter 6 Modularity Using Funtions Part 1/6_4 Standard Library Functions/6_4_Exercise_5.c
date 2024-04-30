/**
 * (Central Limit Theorem) Modify program 6.9 so that it automatically generates 20 simulations,
 * with each simulation have 1000 tosses. Print out the percentage for each run and the percentages
 * for the 20 runs combined. Determine if the averages for the 20 runs combined are closer to the
 * 50 percent heads and tails than the majority of the individual simulation results
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(int); /* prototype for flip function */
void percentages(int, int); /* prototype for percentage function */

int main()
{
    #define NUMSIMULATIONS 20
    int numTosses = 1000;
    int heads, headsTotal = 0;

    for(int i = 0; i < NUMSIMULATIONS; i++)
    {
        heads = flip(numTosses);
        headsTotal += heads;
        percentages(numTosses, heads);
    }
    percentages(numTosses * NUMSIMULATIONS, headsTotal);

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