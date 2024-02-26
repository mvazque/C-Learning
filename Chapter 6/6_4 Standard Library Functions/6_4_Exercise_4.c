/**
 * Modify Program 6.9 so that it request the number of tosses from the user
 * 
 * Hint make sure to have the program correctly determine the percentages of heads and tails 
 * obtained
 * 
 * Execute the modified program written in the exercise 5 times, each time using 10 tosses per
 * run and notice if the percentages reported by the program differ significantly from the results
 * displayed in the text when 1000 tosses are used
 * 
 * 1000 is closer to 50/50 chance, where as 10 tosses seems to give either 6/4 or 7/3 chances either
 * way. This will be due ot the low sample size.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(int); /* prototype for flip function */
void percentages(int, int); /* prototype for percentage function */

int main()
{
    int numTosses;
    int heads;

    do
    {
        printf("Please provide the number of coin tosses to execute: ");
        scanf("%d", &numTosses);
    } while (numTosses < 0);
    
    

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