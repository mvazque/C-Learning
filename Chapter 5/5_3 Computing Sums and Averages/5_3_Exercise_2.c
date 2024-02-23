/**
 * Rewrite program 5.6 to display the prompt
 * 
 * Please type in the total number of data values to be added:
 * 
 * In response to this prompt the program should accept a user-entered number and then use 
 * this number to control hte number of times the while loop is executed. Thus, if the user 
 * enters 5 in response to the prompt the program should request the input of five numbers and 
 * display the total after five numbers have been entered.
*/

#include <stdio.h>

int main()
{
    int count, maxCount;
    float num, total;

    printf("\nPlease type in the total number of data values to be added: ");
    scanf("%d", &maxCount);

    if(maxCount < 0)
    {
        printf("Only positive numbers are allowed for this application");
    }

    printf("\nThis program will ask you to enter %d numbers.\n\n", maxCount);

    count = 1;
    total = 0.0;

    while(count <= maxCount)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        printf("The total is now %f\n", total);
        count++;
    }

    printf("\n\nThe final total of the %d numbers is %f\n", maxCount, total);

    return 0;
}