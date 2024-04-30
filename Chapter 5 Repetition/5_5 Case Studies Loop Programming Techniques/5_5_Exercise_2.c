/**
 * Modify Program 5.13 so that it displays the average of the positive and negative numbers
 * (Hint: Be careful not to count the number 0 as a negative). Test your program by entering
 * the numbers 17, -10, 20, 0 and -4. The positive average should be 18.5 and negative should be
 * -7
*/

#include <stdio.h>
#define MAXNUMS 5

int main()
{
    int i, posCount = 0, negCount = 0;
    float number;
    float posTotal = 0.0f;
    float negTotal = 0.0f;

    for(i = 1; i <= MAXNUMS; i++)
    {
        printf("Enter a number (positive or negative): ");
        scanf("%f", &number);

        if(number >= 0)
        {
            if(number == 0)
                continue;
            posTotal += number;
            posCount++;
        }
        else
        {
            negTotal += number;
            negCount ++;
        }
            
    }

    printf("\nThe positive average is %.2f", posTotal/posCount);
    printf("\nThe negative average is %.2f\n", negTotal/negCount);

    return 0;
}