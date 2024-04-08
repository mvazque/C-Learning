/**
 * Repeat Programming Exercise 2 in Section 8.2, but use pointer references to access
 * all array elements
 * 
 * Write a declaration to store the string "This is a test" into an array named strtest.
 * Include the declaration in a program to display the message using the following loop
 * 
 * for(i = 0; i <= 14; i++)
 *  printf("%c", strtest[i]);
 * 
 * Modify the for statement to display only the array characters t, e, s, and t
 * 
 * Include the array declaration written in a program that uses the printf() function to display
 * characters in the array. For example, the statement printf("%s", strtest); will cause the string
 * stored in the strtest array to be displayed. Using this statement requires that the last
 * character in the array be the end-of-string marker \0.
 * 
 * Repeat the exercise using a while loop
 * 
 * I am not sure I fully understand what these problems are asking for with regards to using a 
 * pointer but I put my best effort on it.
*/

#include <stdio.h>

int main()
{
    char strtest[] = "This is a test";
    char *testPtr = &strtest[0];

    for(int i = 9; i <= 14; i++)
        printf("%c", *(testPtr + i));

    printf("\n");

    int j = 0;
    while(*(testPtr + j) != '\0')
    {
        printf("%c", *(testPtr + j));
        j++;
    }

    printf("\n");
}