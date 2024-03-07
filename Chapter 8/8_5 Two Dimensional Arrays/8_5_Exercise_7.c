/**
 * Write a function that finds and displays the maximum value in a two-dimensional array of integer.
 * The array should be declared as a 10-by-20 array of integers in main
 * 
 * Modify the function so that it also displays the row and Columns of the element with the maximum
 * value
 * 
 * Can the function be generalized to handle any size two dimensional array?
 * Partially, a two dimensional array needs to at least dictate the number of columns for C to be
 * able to keep track of indices and track addresses of the data.
*/

#include <stdio.h>
#define ROWS 10
#define COLS 20

int main()
{
    void findMax(int [ROWS][COLS]);
    int testData[ROWS][COLS] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 21, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}
    };

    findMax(testData);

    return 0;
}

void findMax(int array[ROWS][COLS])
{
    int maxValue = array[0][0];
    int rowIndex = 0, colIndex = 0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            if(maxValue < array[i][j])
            {
                maxValue = array[i][j];
                rowIndex = i;
                colIndex = j;
            }
        }
    }

    printf("The maximum value is %d, found in row %d, column %d (using 0-index).\n", maxValue, rowIndex, colIndex);
}