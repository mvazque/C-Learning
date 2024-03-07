/**
 * Write a C function that finds and displays the maximum value in a two-dimensional array of
 * integers. The array should be declared as a 10-row-by-20-column array of integers in main()
 * and the starting address of the array should be passed to the function.
 * 
 * Modify the function so that it also displays the row and column number of the element with the 
 * maximum value.
 * 
 * Can the function you wrote be generalized to handle any size two-dimensional array?
 * The main item neccesary is knowing the size of the array, so function could be changed to take it
 * as an input or if it is defined globally as it is in the program that works as well
*/

#include <stdio.h>
#define ROWS 10
#define COLS 20

int main()
{
    void findMax(int*);
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

    findMax(&testData[0][0]);

    return 0;
}

void findMax(int *arrayStart)
{
    int lastIndex = ROWS * COLS;
    int maxNum = *arrayStart, maxIndex = 0;
    for(int i = 0; i < lastIndex; i++)
    {
        if(maxNum < *(arrayStart + i))
        {
            maxNum = *(arrayStart + i);
            maxIndex = i;
        }
    }

    printf("The maximum value is %d, found in row %d, column %d (using 0-index).\n", maxNum, maxIndex/COLS, maxIndex%COLS);
}