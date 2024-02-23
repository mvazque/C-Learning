/**
 * Modify Program 5.13 so that the number of entities to be input is specified by the user
 * when the program is executed
*/

#include <stdio.h>

int main()
{
    int i, maxNums;
    float number;
    float posTotal = 0.0f;
    float negTotal = 0.0f;

    printf("Please provide the amount of numbers you will be providing: ");
    scanf("%d", &maxNums);

    for(i = 1; i <= maxNums; i++)
    {
        printf("Enter a number (positive or negative): ");
        scanf("%f", &number);

        if(number > 0)
            posTotal += number;
        else
            negTotal += number;
    }

    printf("\nThe positive total is %f", posTotal);
    printf("\nThe negative total is %f\n", negTotal);

    return 0;
}