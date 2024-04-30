/**
 * Write a C program that accepts an integer argument, determines whether the passed integer is
 * even or odd and displays an appropriate message.
*/

#include <stdio.h>

int main(void)
{
    void evenOrOddCustom(int);

    int num;

    printf("Please provide a number to check: ");
    scanf("%d", &num);

    evenOrOddCustom(num);

    return 0;
}

void evenOrOddCustom(int num)
{
    if(num % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}