/**
 * A bowling team consists of five players. Each player bowls three games. Write a C program
 * that uses a nested loop to enter each player's individual scores and then computes
 * and displays the average score for each bowler. Assume each bowler has the following
 * scores
 * 
 * Bowler 1: 286 252 265
 * Bowler 2: 212 186 215
 * Bowler 3: 252 232 216
 * Bowler 4: 192 201 235
 * Bowler 5: 186 236 272
*/

#include <stdio.h>

int main(void)
{
    #define MAXPLAYERS 5
    #define MAXGAMES 3
    
    int sum, score;
    float avgSums, bowlerAvg;

    for(int i = 0; i < MAXPLAYERS; i++)
    {
        sum = 0;
        bowlerAvg = 0;
        for(int j = 0; j < MAXGAMES; j++)
        {
            printf("Please input score %d for player %d: ", j + 1, i + 1);
            scanf("%d", &score);
            sum += score;
        }

        bowlerAvg = (1.0 * sum) / MAXGAMES;
        avgSums += bowlerAvg;

        printf("The average score for bowler %d is %.2f.\n\n", i + 1, bowlerAvg);
    }

    printf("The team average is %.3f.\n", avgSums / MAXPLAYERS);

    return 0;
}