/**
 * Write a program that stores the string "Hooray for All of Us" in an array named strng. Use the
 * declaration charstring[] = "Hooray for All of Us":, which ensures that end-of-string escape
 * sequence \0 is included in the array. Display the characters in the array by changing the address
 * in a pointer called messPtr. Use a for statement in your program.
 * 
 * Modify th program written in Exercise 3a to use the while statement while (*messPtr != '\0')
 * 
 * Modify the program to start the display with the word All
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char charstring[] = "Hooray for All of Us";
    int strLength = strlen(charstring);
    char *messPtr = &charstring[11];

    // for(int i = 0; i < strLength; i++)
    //     printf("%c", *messPtr++);

    while(*messPtr != '\0')
        printf("%c", *messPtr++);

    printf("\n");
    return 0;
}