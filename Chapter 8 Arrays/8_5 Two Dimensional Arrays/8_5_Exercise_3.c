/**
 * Write a C function that adds respective values of two double-dimensional arrays named first and
 * second. Both arrays have 2 rows and 3 columns. For example, element [1][2] of the resulting 
 * array should be the sum of first[1][2] and second[1][2]. Assume the arrays are arrays of 
 * integers. The first and second should be initialized as follows
 * 
 * First            Second
 * 16 18 23         24 52 77
 * 54 91 11         16 19 59
*/

#include <stdio.h>
#define ROWS 2
#define COLS 3

int main()
{
    void sumArrays(int [ROWS][COLS], int [ROWS][COLS], int [ROWS][COLS]);
    void printTwoDimensionArray(int [ROWS][COLS]);

    int first[ROWS][COLS] = {
        {16, 18, 23},
        {54, 91, 11}
    };

    int second[ROWS][COLS] = {
        {24, 52, 77},
        {16, 19, 59}
    };

    int result[ROWS][COLS];

    sumArrays(first, second, result);

    printTwoDimensionArray(result);

    return 0;
}

void sumArrays(int array1[ROWS][COLS], int array2[ROWS][COLS], int resultingArray[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            resultingArray[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

void printTwoDimensionArray(int array[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}