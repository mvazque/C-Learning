/**
 * Write a C program that first determines if an entered character is a lowercase letter.
 * If the letter is lowercase, determine and print out its position in the alphabet.
 * For example, if the letter is c, the program should print out 3, since c is the third letter
 * in the alphabet. 
 * 
 * Hint if the entered character is lowercase its position can be found by subtracting 'a' and adding
 * 1
 * 
 * 
 * Modify the program for uppercase letters.
*/

#include <stdio.h>

int main(void)
{
    char letter;

    printf("Please provide a character to analyze: ");
    scanf("%c", &letter);

    // if(letter >= 'a' && letter <= 'z')
    //     printf("The character just entered is in position %d of the alphabet.\n", letter - 'a' + 1);
    // else
    //     printf("The character just entered is not a lowercase letter.\n");

    if(letter >= 'A' && letter <= 'Z')
        printf("The character just entered is in position %d of the alphabet.\n", letter - 'A' + 1);
    else
        printf("The character just entered is not an uppercase letter.\n");
    
    return 0;
}