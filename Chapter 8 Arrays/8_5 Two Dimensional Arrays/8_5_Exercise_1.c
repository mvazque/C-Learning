/**
 * Write a function that multiplies each element of a 7 by 10 array of integers by a scalar number.
 * Both the array name and the number by which each element is to be multiplied are to be passed to
 * the function as arguments. Assume the array is an array of integers.
*/

#include <stdio.h>
#define ROWS 7
#define COLS 10

int main()
{
    void multiplyArray(int [ROWS][COLS], int);
    void printTwoDimensionArray(int [ROWS][COLS]);
    int testData[ROWS][COLS] = {
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10}
    };

    multiplyArray(testData, 2);
    printTwoDimensionArray(testData);
    return 0;
}

void multiplyArray(int array[ROWS][COLS], int numToMultiply)
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            array[i][j] *= numToMultiply;
        }
    }
}

void printTwoDimensionArray(int array[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}