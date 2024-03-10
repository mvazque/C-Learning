/**
 * For the functions selectionSort(), bubbleSort(), and quickSort(), the sorting can be done in
 * decreasing order by a simple modification. In each case identify the required changes and then
 * rewrite each function to accept a flag indicating whether the sort should be in increasing or
 * decreasing order. Modify each routing to receive and use this flag argument correctly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ASCENDING 1
#define DESCENDING 0

void printArray(int[], int);
void swap(int*, int*);


int main()
{
    #define NUMELEMS 100

    void generateData(int[], int);
    void selectionSort(int[], int, int);
    void bubbleSort(int[], int, int);
    void quickSort(int[], int, int, int);

    int dataArray1[NUMELEMS];
    int dataArray2[NUMELEMS];
    int dataArray3[NUMELEMS];

    generateData(dataArray1, NUMELEMS);
    printArray(dataArray1, NUMELEMS);
    selectionSort(dataArray1, NUMELEMS, DESCENDING);

    printf("\n---------------------\n");

    generateData(dataArray2, NUMELEMS);
    printArray(dataArray2, NUMELEMS);
    bubbleSort(dataArray2, NUMELEMS, DESCENDING);

    printf("\n---------------------\n");

    generateData(dataArray3, NUMELEMS);
    printArray(dataArray3, NUMELEMS);
    quickSort(dataArray3, 0, NUMELEMS - 1, DESCENDING);
    printArray(dataArray3, NUMELEMS);
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

void selectionSort(int nums[], int numel, int orderFlag)
{
    int moveCount = 0;
    int extremeVal;
    int startingIndex = 1;
    int swapIndex;
    for(int i = 0; i < numel; i++)
    {
        swapIndex = -1;
        extremeVal = nums[i];
        for(int j = startingIndex; j < numel; j++)
        {
            if(orderFlag)
            {
                if(nums[j] < extremeVal)
                {
                    extremeVal = nums[j];
                    swapIndex = j;
                }
            }
            else
            {
                if(nums[j] > extremeVal)
                {
                    extremeVal = nums[j];
                    swapIndex = j;
                }
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

void bubbleSort(int nums[], int numel, int orderFlag)
{
    int startingIndex;
    int swapCounter = 0;
    for(int i = 0; i < numel; i++)
    {
        startingIndex = 0;
        for(int j = startingIndex; j < numel - 1 - i; j++ )
        {
            if(orderFlag)
            {
                if(nums[j] > nums[j + 1])
                {
                    swap(&nums[j], &nums[j+1]);
                    swapCounter++;
                }
            }
            else
            {
                if(nums[j] < nums[j + 1])
                {
                    swap(&nums[j], &nums[j+1]);
                    swapCounter++;
                }
            }
            
        }
    }

    printf("This array required %d swaps using bubble sort\n", swapCounter);
    printArray(nums, numel);
}



int partition(int nums[], int lowPointer, int highPointer, int orderFlag)
{
    int i = lowPointer, j = highPointer;
    int pivot = nums[lowPointer];

    while(i < j)
    {
        if(orderFlag)
        {
            while(nums[i] <= pivot && i <= highPointer - 1)
                i++;
        
            while(nums[j] > pivot && j >= lowPointer + 1)
                j--;
        }
        else
        {
            while(nums[i] >= pivot && i <= highPointer - 1)
                i++;
        
            while(nums[j] < pivot && j >= lowPointer + 1)
                j--;
        }

        if(i < j)
            swap(&nums[i], &nums[j]);
    }
    swap(&nums[lowPointer], &nums[j]);
    return j;
}

void quickSort(int nums[], int lowPointer, int highPointer, int orderFlag)
{
    int partition(int nums[], int lowPointer, int highPointer, int orderFlag);
    if(lowPointer < highPointer)
    {
        int partitionIndex = partition(nums, lowPointer, highPointer, orderFlag);

        quickSort(nums, lowPointer, partitionIndex - 1, orderFlag);
        quickSort(nums, partitionIndex + 1, highPointer, orderFlag);
    }
}

void swap(int *elem1, int *elem2)
{
    int temp = *elem1;
    *elem1 = *elem2;
    *elem2 = temp;
}

