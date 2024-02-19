/**
 * Write a C program that displays the following prompts
 * Enter a number:
 * Enter a second number:
 * Enter a third number:
 * Enter a fourth number:
 * After the prompt is displayed your program should use a scanf function call to accept
 * a number from the keyboard for the displayed prompt. After the fourth number has been 
 * entered, your program should calculate and display the average of the numbers. The
 * average should be included in an appropriate message. Check the average displayed by
 * your program using the following test data:
 * 
 * Test data set 1: 100, 100, 100, 100
 * Test data set 2: 100, 0, 100, 0
 * 
 * Then use your program to complete the following table
 * 
 * Numbers          Average
 * 92,98,79,85      88.500000
 * 86,84,75,86      82.750000
 * 63,85,74,82      76.000000
 * 
 * 
 * Repeat the exercise making sure that us use the same variable name number for each 
 * number input. Also use the variable sum for the sum of the numbers. To do this you 
 * must use the statement sum = sum + number
*/

#include <stdio.h>

int main(void)
{
    // float number1;
    // float number2;
    // float number3;
    // float number4;
    
    // printf("Enter a number:");
    // scanf("%f", &number1);

    // printf("Enter a second number:");
    // scanf("%f", &number2);

    // printf("Enter a third number:");
    // scanf("%f", &number3);

    // printf("Enter a fourth number:");
    // scanf("%f", &number4);

    // float average = (number1 + number2 + number3 + number4) / 4.0;

    // printf("The average of the numbers %f, %f, %f, %f is %f\n", number1, number2, number3, number4, average);

    // return 0;


    float number;
    float sum;
    
    printf("Enter a number:");
    scanf("%f", &number);
    sum += number;

    printf("Enter a second number:");
    scanf("%f", &number);
    sum += number;

    printf("Enter a third number:");
    scanf("%f", &number);
    sum += number;

    printf("Enter a fourth number:");
    scanf("%f", &number);
    sum += number;

    float average =  sum / 4.0;

    printf("The average of all four numbers is %f\n", average);

    return 0;

}