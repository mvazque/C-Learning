/**
 * Rewrite program 5.7 to display the prompt
 * 
 * Please type in the total number of ata values to be averaged:
 * 
 * In response to this prompt the program should accept a usere entered number and then
 * use this number to control the number of times the while loop is executed. Thus if the
 * user enters 6 in response to the prompt the program should request the input of six
 * numbers and display the average of the next 6 numbers entered
*/

#include <stdio.h>

int main()
{
    int count, maxCount;
    float num, total, average;

    printf("Please provide the number of numbers you wish to enter: ");
    scanf("%d", &maxCount);

    if(maxCount < 0)
    {
        printf("Number must be positive");
        return 0;
    }

    printf("\nThis program will ask you to enter %d numbers. \n\n", maxCount);

    count = 1;
    total = 0.0;

    while (count <= maxCount)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        count++;
    }

    average = total / maxCount;
    printf("\nThe average of the %d numbers is%8.4f\n", maxCount, average);

    return 0;
}