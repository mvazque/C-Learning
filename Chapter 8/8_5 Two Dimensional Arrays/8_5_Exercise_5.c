/**
 * Write a C function that can be used to sort the elements of a 10-by-20 two dimensional array
 * of integers.
 * (Hint: Use the swap() function in program 7.10 to swap array elements)
*/

#include <stdio.h>
#define ROWS 10
#define COLS 20

void swap(int*, int*);
int partition(int [ROWS][COLS], int, int);
void quickSort(int [ROWS][COLS], int, int);
void printTwoDimensionArray(int [ROWS][COLS]);

int main()
{
    
    // int testData[ROWS][COLS] = {
    //     {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    //     {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    // };
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

    quickSort(testData, 0, ROWS * COLS - 1);
    printTwoDimensionArray(testData);
    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int part[ROWS][COLS], int lowPointer, int highPointer)
{
    int i = lowPointer, j = highPointer;
    int pivot = part[lowPointer/COLS][lowPointer % COLS];

    while(i < j)
    {
        while(part[i/COLS][i % COLS] <= pivot && i <= highPointer - 1 )
            i++;
            
        while(part[j/COLS][j % COLS] > pivot && j >= lowPointer + 1)
            j--;
                
        if(i < j)
            swap(&part[i/COLS][i % COLS], &part[j/COLS][j % COLS]);
    }

    swap(&part[lowPointer/COLS][lowPointer % COLS], &part[j/COLS][j % COLS]);

    return j;
}

void quickSort(int array[ROWS][COLS], int lowPointer, int highPointer)
{
    if(lowPointer < highPointer)
    {
        int partitionIndex = partition(array, lowPointer, highPointer);

        quickSort(array, lowPointer, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, highPointer);
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