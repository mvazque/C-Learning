/**
 * Write a C function that adds the value of all elements in a two-dimensional array the is passed 
 * to the function. Assume that the array is an array of double-precision numbers having 4 rows
 * and 5 columns
*/

#include <stdio.h>
#define ROWS 4
#define COLS 5

int main()
{
    double sumArrayElements(double [ROWS][COLS]);
    void printTwoDimensionArray(double [ROWS][COLS]);

    double testData[ROWS][COLS] = {
        {1.5,2.3,3.4,4.2,5.5},
        {1.5,2.3,3.4,4.2,5.5},
        {1.5,2.3,3.4,4.2,5.5},
        {1.5,2.3,3.4,4.2,5.5}
    };
    double totalSum;

    totalSum = sumArrayElements(testData);
    printTwoDimensionArray(testData);

    printf("The sum of the above array is: %lf\n", totalSum);

    return 0;
}

double sumArrayElements(double array[ROWS][COLS])
{
    double runningTotal = 0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            runningTotal += array[i][j];
        }
    }
    return runningTotal;
}

void printTwoDimensionArray(double array[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
}