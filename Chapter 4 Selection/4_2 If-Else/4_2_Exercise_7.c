/**
 * Write a C program that accepts a character using scan() funciton and determines
 * if the characters is a lowercase letter. A lowercase letter is any character that is
 * greater than or equal to "a" and less than or equal to "z". If the entered character is a
 * lowercase letter, display the message
 * 
 * The character just entered is a lowercase letter.
 * 
 * If the entered character is not lowercase, display the message
 * 
 * The character just entered is not a lowercase letter
 * 
 * 
 * 
 * Modify the program to determine if the character entered is an uppercase letter. Meaning it is
 * within inclusive "A" and "Z"
*/

#include <stdio.h>

int main(void)
{
    char letter;

    printf("Please provide a character to analyze: ");
    scanf("%c", &letter);

    // if(letter >= 'a' && letter <= 'z')
    //     printf("The character just entered is a lowercase letter.\n");
    // else
    //     printf("The character just entered is not a lowercase letter.\n");

    if(letter >= 'A' && letter <= 'Z')
        printf("The character just entered is an uppercase letter.\n");
    else
        printf("The character just entered is not an uppercase letter.\n");
    
    return 0;
}