/**
 * Write a C program that prompts the user to type a number. Have your program accept
 * the number as an integer and immediately display the integer using a printf() function
 * call. Run your program three times. The first time you run the program, enter a valid
 * integer number; the second time, enter a double-precision number; and the third time,
 * enter a character. Using the output display, see what number your program actually
 * accepted from the data you entered
 * 
 * 
 * input    output
 * 12       12
 * 15.73    15
 * a        1
 * b        1
 * p        1
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Please enter a number:");
    scanf("%d", &number);

    printf("The number provided is %d.\n", number);
}