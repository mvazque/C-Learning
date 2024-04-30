/**
 * Modify Program 8.13 to use a list of 100 randomly generated numbers and determine the number of
 * moves required to put the list in order using a selection sort. Display both the initial list
 * and the reordered list
 * 
 * For the most part they required 90+ swaps to sort the list with selection sort
 * 
 * Redo the exercise using bubble sort
 * 
 * Bubble sort is getting around 2.3 K swaps!!
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int[], int);
void swap(int*, int*);

int main()
{
    #define NUMELEMS 100

    void generateData(int[], int);
    void selectionSort(int[], int);
    void bubbleSort(int[], int);

    int dataArray1[NUMELEMS];
    int dataArray2[NUMELEMS];
    generateData(dataArray1, NUMELEMS);
    printArray(dataArray1, NUMELEMS);
    selectionSort(dataArray1, NUMELEMS);

    printf("\n---------------------\n");

    generateData(dataArray2, NUMELEMS);
    printArray(dataArray2, NUMELEMS);
    bubbleSort(dataArray2, NUMELEMS);
}

void generateData(int array[], int numElem)
{
    srand(time(NULL));
    for(int i = 0; i < numElem; i++)
    {
        array[i] = 1 + rand() % 100;
    }
}

void printArray(int nums[], int numel)
{
    printf("\n");
    for(int i = 0; i < numel; i++)
        printf("%d ", nums[i]);
    printf("\n");
}

void selectionSort(int nums[], int numel)
{
    int moveCount = 0;
    int smallestVal;
    int startingIndex = 1;
    int swapIndex;
    for(int i = 0; i < numel; i++)
    {
        swapIndex = -1;
        smallestVal = nums[i];
        for(int j = startingIndex; j < numel; j++)
        {
            if(nums[j] < smallestVal)
            {
                smallestVal = nums[j];
                swapIndex = j;
            }
        }
        if(swapIndex > -1)
        {
            swap(&nums[startingIndex - 1], &nums[swapIndex]);
            moveCount++;
        }
        startingIndex++;
    }

    printf("Sorting this array required %d swaps.\n", moveCount);
    printArray(nums, numel);
}

void bubbleSort(int nums[], int numel)
{
    int startingIndex;
    int swapCounter = 0;
    for(int i = 0; i < numel; i++)
    {
        startingIndex = 0;
        for(int j = startingIndex; j < numel - 1 - i; j++ )
        {
            if(nums[j] > nums[j + 1])
            {
                swap(&nums[j], &nums[j+1]);
                swapCounter++;
            }
        }
    }

    printf("This array required %d swaps using bubble sort\n", swapCounter);
    printArray(nums, numel);
}

void swap(int *elem1, int *elem2)
{
    int temp = *elem1;
    *elem1 = *elem2;
    *elem2 = temp;
}