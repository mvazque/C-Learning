/**
 * Write a function to store the string "This is a test" into an array named strtest. Include the
 * declaration in a program to display the message using the following loop
 * 
 * for(i = 0; i <= 14; i++)
 *  printf("%c". strtest[i]);
 * 
 * 
 * Modify the for statement to display only the array characters t, e, s, and t
 * 
 * Include the array declaration in a program that uses the printf function to display characters
 * in the array. For example, the statement printf("%s" strtest); will cause the string stored in 
 * the strtest array to be displayed. Using this statement requires that the last character in the 
 * array be the end of string marker
 * 
 * Repeat the exercise using a while loop (Hint: Stop the loop when the \0 escape sequence is 
 * detected. The expression while(strtest[i] != '\0') can be used))
*/

#include <stdio.h>

int main()
{
    char strtest[] = "This is a test";
    int i;

    for(i = 10; i <= 14; i++)
        printf("%c", strtest[i]);

    printf("\n");

    printf("%s\n", strtest);

    i = 0;
    while(strtest[i] != '\0')
    {
        printf("%c", strtest[i]);
        i++;
    }

    printf("\n");

    return 0;
}