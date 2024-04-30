/**
 * Rewrite the program written for Exercise 3a
*/

#include <stdio.h>

int main(void)
{
    #define MAXPLAYERS 5
    #define MAXGAMES 3.00
    
    int sum, score, score1, score2, score3;
    float avgSums, bowlerAvg;

    for(int i = 0; i < MAXPLAYERS; i++)
    {
        sum = 0;
        bowlerAvg = 0;

        printf("Please provide all the scores for bowler %d: ", i + 1);
        scanf("%d %d %d", &score1, &score2, &score3);

        bowlerAvg = (score1 + score2 + score3) / MAXGAMES;
        avgSums += bowlerAvg;

        printf("The average score for bowler %d is %.2f.\n\n", i + 1, bowlerAvg);
    }

    printf("The team average is %.3f.\n", avgSums / MAXPLAYERS);

    return 0;
}