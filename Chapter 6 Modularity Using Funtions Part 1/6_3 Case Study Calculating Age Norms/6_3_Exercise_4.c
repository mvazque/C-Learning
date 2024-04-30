/**
 * Write a function named winPercent() that accepts the number of wins and losses that a team
 * achieves and returns its winning percentage. Use the formula that 
 * 
 * winningPercentage = 100 * wins/(wins + losses)
 * 
 * Include the function in a working program. Make sure the function is called from main() and 
 * correctly returns a value to main(). Have main() display the value returned
 * 
 * Use your program to determine the winning percentage of the 1927 New York Yankees who won 110
 * games and lost 44 games that season. and the 1955 Brooklyn Dodgers who won 98 games and lost 55 
 * games that season
 * 
 * Yankees 110 44 71.428574%
 * Dodgers 98 55 64.052284%
*/

#include <stdio.h>

int main()
{
    float winPercent(int, int);

    int wins, losses;

    printf("Please provide the number of wins the team had in the season: ");
    scanf("%d", &wins);

    printf("Please provide the number of losses the team had in the season: ");
    scanf("%d", &losses);

    printf("The teams win percent with %d wins and %d losses is %f%%.\n", wins, losses, winPercent(wins, losses));

    return 0;

}

float winPercent(int wins, int losses)
{
    return 100.0 * wins/(wins + losses);
}