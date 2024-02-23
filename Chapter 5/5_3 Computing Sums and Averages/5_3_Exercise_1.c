/**
 * Rewrite program 5.6 to compute the total of eight numbers.
*/

#include <stdio.h>
#define MAXCOUNT 8

int main()
{
    int count;
    float num, total;

    printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT);

    count = 1;
    total = 0.0;

    while(count <= MAXCOUNT)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        printf("The total is now %f\n", total);
        count++;
    }

    printf("\n\nThe final total of the %d numbers is %f\n", MAXCOUNT, total);

    return 0;
}