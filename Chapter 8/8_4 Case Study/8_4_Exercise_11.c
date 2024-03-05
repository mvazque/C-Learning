/**
 * Define an array with a maximum of 20 integer values and fill the array with numbers either input
 * from the keyboard or assigned by the program. Then write a function named split() that reads the
 * array and places all 0 or positive numbers into an array named positive and all negative numbers
 * into an array named negative. Finally have your program call a function that displays the values
 * in both the positive and negative arrays.
 * 
 * Extend the program to sort the positive and negative arrays into ascending order befor they are
 * displayed
*/

#include <stdio.h>
void swap(int*, int*);
int partition(int[], int, int);
void quickSort(int[], int, int);
void printArray(int[], int);

#define POSITIVEINDEX 1
#define NEGATIVEINDEX 0

int main()
{
    #define NUMELEMS 20
    void displayArrays(int[], int[], int[]);
    void split(int[],int[],int[],int[], int);
    int numbers[NUMELEMS] = {2,1,3,5,4,6,0,-1,-4,-3,-2,-5,-6,0,9,8,7,-8,-7,-9};
    int positive[NUMELEMS], negative[NUMELEMS];

    // index 0 is negative counter index 1 is the positive counter
    int arrayCounter[2] = {0, 0};

    split(numbers, negative, positive, arrayCounter, NUMELEMS);

    displayArrays(negative, positive, arrayCounter);
}

void split(int nums[], int negArray[], int posArray[], int counters[], int numElems)
{
    int posCounter = 0, negCounter = 0;
    for(int i = 0; i < numElems; i++)
    {
        if(nums[i] >= 0)
        {
            posArray[posCounter] = nums[i];
            posCounter++;
        }
        else
        {
            negArray[negCounter] = nums[i];
            negCounter++;
        }
    }

    quickSort(negArray, 0, negCounter - 1);
    quickSort(posArray, 0, posCounter - 1);

    counters[POSITIVEINDEX] = posCounter;
    counters[NEGATIVEINDEX] = negCounter;

    return;
}

void displayArrays(int negArray[], int posArray[], int counters[])
{
    printf("Negatives Array:\n");
    printArray(negArray, counters[NEGATIVEINDEX]);

    printf("\nPositives Array:\n");
    printArray(posArray, counters[POSITIVEINDEX]);
}

void printArray(int nums[], int numel)
{
    for(int i = 0; i < numel; i++)
        printf("%d ", nums[i]);
    printf("\n");
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int nums[], int lowPointer, int highPointer)
{
    int i = lowPointer, j = highPointer;
    int pivot = nums[lowPointer];

    while(i < j)
    {
        while(nums[i] <= pivot && i <= highPointer - 1)
            i++;

        while(nums[j] > pivot && j >= lowPointer + 1)
            j--;

        if(i < j)
            swap(&nums[i], &nums[j]);
    }

    swap(&nums[lowPointer], &nums[j]);
    return j;
}

void quickSort(int array[], int lowPointer, int highPointer)
{
    if(lowPointer < highPointer)
    {
        
        int partitionIndex = partition(array, lowPointer, highPointer);

        quickSort(array, lowPointer, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, highPointer);
    }
}