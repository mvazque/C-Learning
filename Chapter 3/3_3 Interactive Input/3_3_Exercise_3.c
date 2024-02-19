/**
 * Write a C program that displays the following prompt
 * Enter the length of a room:
 * Enter the width of a room:
 * 
 * After each prompt is displayed your program should us a scanf() function call to
 * accept data from the keyboard for the displayed prompt. After the width of the room
 * is entered your program should calculate and display the area of the room. The area displayed 
 * should be included in an appropriate message and calculated using the equation
 * area = length * width;
 * 
 * Check the area by calculating manually
*/

#include <stdio.h>

int main(void)
{
    float length;
    float width;

    printf("Enter the length of a room:");
    scanf("%f", &length);

    printf("Enter the length of a room:");
    scanf("%f", &width);

    float area = length * width;

    printf("The area of a room with length %f and width %f is %f.\n", length, width, area);

}