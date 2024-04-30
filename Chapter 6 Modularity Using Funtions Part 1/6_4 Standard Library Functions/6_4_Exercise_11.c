/**
 * In the game of blackjack, the cards 2 through 10 are counted at their face alues, regardless of 
 * suit, all picture cards (jack, queen, and king) are counted as 10, and an ace is counted
 * as either a 1 or an 11 only if the total value of all cards in a players hand does not exceed
 * 21, else it is counted as a 1. Using the information write a C program that tries a random number
 * generator to select three cards (a 1 initially correspondng to an ace, a 2 corresponding to a face 
 * card of two and so on), calculate the total value of the hand appropriately and display the value
 * of the three cards with a printed message.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int drawCards();

    printf("The sum of all your cards is %d.\n", drawCards());
}

int drawCards()
{
    int sumCards(int, int, int);
    int card1, card2, card3;
    srand(time(NULL));

    card1 = 1 + (int)rand() % 13;
    card2 = 1 + (int)rand() % 13;
    card3 = 1 + (int)rand() % 13;
    printf("You drew %d %d and %d.\n", card1, card2, card3);

    return sumCards(card1, card2, card3);
}

int sumCards(int card1, int card2, int card3)
{
    int cardSum = 0;

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

    return cardSum;
}