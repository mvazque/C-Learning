/**
 * In the game of blackjack, the cards 2 through 10 are counted at their face values, regardless
 * of suit, all face cards (jack, queen and king) are counted as 10, and an ace is counted
 * as either 1 or an 11 depending on the total count of all cards in a player's hand.
 * The ace is counted as 11 only if the resulting total value of all cards in a player's hand
 * does not exceed 21, else it is counted as a 1. Using this information write a C program
 * that accepts three card values as inputs (a 1 corresponding to an ace, a 2 corresponding to
 * a two and so on), calculates the total value of the hand appropriately, and displays the 
 * value of the three cards with a printed message.
*/

#include <stdio.h>

int main(void)
{
    int card1, card2, card3, cardSum;

    printf("Please provide three card values (Ace - 1, Jack - 11, Queen - 12, King - 13): ");
    scanf("%d %d %d", &card1, &card2, &card3);

    if((card1 > 13 || card1 < 1) || (card2 > 13 || card2 < 1) || (card3 > 13 || card3 < 1) )
    {
        printf("Invalid card input, must be a value between 1 - 13 inclusively.\n");
        return 0;
    }

    if(card1 > 10)
        card1 = 10;
    if(card2 > 10)
        card2 = 10;
    if(card3 > 10)
        card3 = 10;
    
    if(1 == card1)
        card1 = 11;
    if(1 == card2)
        card2 = 11;
    if(1 == card3)
        card3 = 11;

    cardSum = card1 + card2 + card3;

    if(cardSum > 21){
        if(11 == card1)
        {
            card1 = 1;
            cardSum = card1 + card2 + card3;
        }

        if(11 == card2 && cardSum > 21)
        {
            card2 = 1;
            cardSum = card1 + card2 + card3;
        }

        if(11 == card3 && cardSum > 21)
        {
            card3 = 1;
            cardSum = card1 + card2 + card3;
        }
    }


    if(cardSum > 21)
        printf("The sum of your cards is %d, BUST!!\n", cardSum);
    else
        printf("The sum of your cards is %d!!\n", cardSum);

    return 0;

}