/**
 * Modify the program in Exercise 1 so that the number of test results for each experiment
 * is entered by the user. Write your program so that a different number 
 * of test results can be entered for each experiment
*/

#include <stdio.h>

int main(void)
{
    #define OUTERLOOPMAX 4
    #define TRUE 1

    float sum, result;
    int innerLoopMax;

    for(int i = 0; i < OUTERLOOPMAX; i++)
    {
        sum = 0;
        while (TRUE)
        {
            printf("Please enter the number of results that will be provided or experiment %d: ", i + 1);
            scanf("%d", &innerLoopMax);

            if(innerLoopMax > 0)
                break;
            
            printf("Number of results must be greater than 0.\n");
        }

        for(int j = 0; j < innerLoopMax; j++)
        {
            printf("Please provide a result for experiment %d: ", i + 1);
            scanf("%f", &result);

            sum += result;
        }

        printf("The average for experiment %d is %.2f.\n\n\n", i + 1, sum/innerLoopMax);
    }

    return 0;
}