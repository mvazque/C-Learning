/* Calculate the Dodgers win rate with 98 wins and 55 losses*/

#include <stdio.h>

int main(void) 
{
    float wins = 98.0;
    float losses = 55.0;
    float totalGames = wins + losses;
    float percentWin = (wins / totalGames) * 100;

    printf("The 1955 Brooklyn Dodgers win rate was %2.2f %%", percentWin);
}