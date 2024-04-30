/**
 * Write a C program to create a HI-LO game. In this game the computer produces a random integer
 * between 1 and 100 and provides the user with seven tries to guess the generated number. If the
 * user guesses the correct number, the message, "Hooray, you have won!" should be displayed. After
 * each incorrect guess the message "Wrong Number, Try Again" and indicate whether the guess was
 * too high or too low and display the number of guesses left. After seven incorrect guesses the
 * computer should display the message, "Sorry, you lose" and the correct number.
 * 
 * 
 * Modify the program written for Exercise 6a to allow the user to run the game again after a game
 * has been completed. The program should display the message "Would you like to play again(y/n)?"
 * and restart if the user enters a Y or y.
*/

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    #define TRUE 1

    void hiLoGame();
    char continueResponse;

    do
    {
        hiLoGame();
        getchar();

        printf("Would you like to play again? (y/n): ");
        // First getchar() seems to be to clear anything left over from previous inputs
        // Second gets the response
        // Third clears the carriage return
        
        continueResponse = getchar();
        getchar();
        if(tolower(continueResponse) != 'y')
            break;
    } while (TRUE);
    
}

/**
 * hiLoGame: Game for guessing a number based on hints saying the guess is too high or low
 * 
 * @input: N/A
 * @return: N/A
*/
void  hiLoGame()
{
    #define ALLOWEDATTEMPTS 7
    int numToWin, playerGuess;

    srand(time(NULL));
    numToWin = 1 + (int) rand() % 100;

    for(int i = 0; i < ALLOWEDATTEMPTS; i++){
        printf("Try and guess the random number that was selected: ");
        scanf("%d", &playerGuess);

        if(numToWin == playerGuess)
        {
            printf("Hooray, you have won!\n");
            return;
        }
        else if(numToWin > playerGuess)
        {
            printf("Wrong Number, Try Again\n");
            printf("Your guess was low.\n");
        }
        else
        {
            printf("Wrong Number, Try Again\n");
            printf("Your guess was high.\n");
        }
        printf("You have %d attempts left.\n", ALLOWEDATTEMPTS - i - 1);
    }

    printf("Sorry, you lose\n");
    printf("The correct answer was %d\n", numToWin);

    return;
}