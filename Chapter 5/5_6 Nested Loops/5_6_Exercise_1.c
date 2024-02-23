/**
 * Four experiments are performed, each consisting of six test results. The results for each
 * experiment are given below. Write a C program using a nested loop to compute and display
 * the average of the test results for each experiment
 * 
 * Experiment 1 results: 23.2, 31.5, 16.9, 27.5, 25.4, 28.6             AVG 25.52
 * Experiment 2 results: 34.8, 45.2, 27.9, 36.8, 33.4, 39.4             AVG 36.25
 * Experiment 3 results: 19.4, 16.8, 10.2, 20.8, 18.9, 13.4             AVG 16.58
 * Experiment 4 results: 36.9, 39.5, 49.2, 45.1, 42.7, 50.6             AVG 44.00
*/

#include <stdio.h>

int main(void)
{
    #define OUTERLOOPMAX 4
    #define INNERLOOPMAX 6

    float sum, result;

    for(int i = 0; i < OUTERLOOPMAX; i++)
    {
        sum = 0;
        for(int j = 0; j < INNERLOOPMAX; j++)
        {
            printf("Please provide a result for experiment %d: ", i + 1);
            scanf("%f", &result);

            sum += result;
        }

        printf("The average for experiment %d is %.2f.\n\n\n", i + 1, sum/INNERLOOPMAX);
    }

    return 0;
}