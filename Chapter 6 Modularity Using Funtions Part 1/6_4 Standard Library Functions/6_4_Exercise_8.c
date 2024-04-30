/**
 * Write a program to simulate the roll of two dice. If the total of the two dice is 7 or 11 you win
 * otherwise, you lose. Embellish the program as much as you like, with betting, different odds,
 * different combinations for win or lose, stopping play when you have no money left or reach the
 * house limit, displaying the dice, etc
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int diceRoll(int);

    int cash = 100, houseMax = 10000, bet, betNumber;

    do
    {
        printf("You currently have $%d. How much would you like to bet? ", cash);
        scanf("%d", &bet);
        if(bet > cash)
        {
            printf("You don't have that amount, bet will be changed to match your remaining cash $%d.\n", cash);
            bet = cash;
        }

        printf("What is the number you are betting on: ");
        scanf("%d", &betNumber);

        if(!diceRoll(betNumber))
        {
            printf("No luck this time.\n");
            cash -= bet;
            continue;
        }

        printf("Congrats, your bet will be multiplied by: ");
        switch (betNumber)
        {
        case 2: case 3: case 11: case 12:
            printf("4\n");
            cash += bet * 4;
            break;

        case 4: case 5: case 9: case 10:
            printf("3\n");
            cash += bet * 3;
            break;
        
        case 6: case 7: case 8:
            printf("2\n");
            cash += bet * 2;
            break;
        }
        

    } while (cash > 0 && cash < houseMax);
    
    printf("You have run out of cash. Feel free to try again.\n");
}

int diceRoll(int winningValue)
{
    int dice1, dice2, diceSum;
    srand(time(NULL));

    dice1 = 1 + (int) rand() % 6;
    dice2 = 1 + (int) rand() % 6;

    diceSum = dice1 + dice2;

    printf("Dice rolled %d and %d for a sum of %d\n", dice1, dice2, diceSum);

    if(dice1 + dice2 == winningValue)
        return 1;
    
    return 0;
}