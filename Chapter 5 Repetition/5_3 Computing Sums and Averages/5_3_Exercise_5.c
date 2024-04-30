/**
 * Rewrite Program 5.7 to compute the average of 10 numbers;
*/

#include <stdio.h>
#define MAXCOUNT 10

int main()
{
    int count;
    float num, total, average;

    printf("\nThis program will ask you to enter %d numbers. \n\n", MAXCOUNT);

    count = 1;
    total = 0.0;

    while (count <= MAXCOUNT)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        count++;
    }

    average = total / MAXCOUNT;
    printf("\nThe average of the %d numbers is%8.4f\n", MAXCOUNT, average);

    return 0;
}