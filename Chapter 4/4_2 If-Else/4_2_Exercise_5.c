/**
 * Write a C program that asks the user to input two numbers. After your program accepts
 * these numbers using on or more scanf() function calls, have your program check the
 * numbers. If the first number entered is greater than the second number, print the message
 * The first number is greater than the second
 * else print the message 
 * The first number is not greater than the second. 
 * Test your program by entering the numbers
 * 5 and 8 The first number is not greater than the second.
 * 8 and 5 The first number is greater than the second.
 * 2 and 11 The first number is not greater than the second.
 * 11 and 2 The first number is greater than the second.
 * 
 * What will your program display if the two numbers entered are equal
 * If the two numbers are equal we will get the "The first number is not greater than the second."
 * as the numbers being equal would not satisfy the condition in the if statement. It is also
 * technically true that the first number is not greater than the second since they are equal.
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Please provide two numbers to compare (separated by a space): ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("The first number is greater than the second.\n");
    else
        printf("The first number is not greater than the second.\n");

    return 0;
}