/**
 * Write a declaration to store the string "This is a sample" in an array named samtest. 
 * Include the declaration in a program that displays the values in samtest in a for loop
 * that uses a pointer to access each element in the array
 * 
 * Modify the program written in Exercise 1a to display only array elements 10 through 15
 * (these are letters s, a, m, p, l, and e).
 * 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char samtest[] = "This is a sample";
    int strLength = strlen(samtest);
    for(int i = 9; i < strLength; i++)
    {
        printf("%c", *(samtest + i));
    }

    printf("\n");
    return 0;
}