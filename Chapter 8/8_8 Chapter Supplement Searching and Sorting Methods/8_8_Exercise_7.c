/**
 * Redo Exercise 6, but display a list of part numbers that are only on one list, but not both.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMEL 100
#define TRUE 1
#define FALSE 0

int binarySearch(int[], int, int, int);
void printArray(int[], int);

int main()
{
    int nums1[NUMEL];
    int nums2[NUMEL];
    int i;
    void quicksort(int[], int, int);
    void generateData(int[], int);
    void binarySearchSetup(int[], int[], int);

    generateData(nums1, NUMEL);
    generateData(nums2, NUMEL);

    quicksort(nums1, 0, NUMEL - 1);
    quicksort(nums2, 0, NUMEL - 1);

    srand(time(NULL));
    printf("Array1\n");
    printArray(nums1, NUMEL);

    srand(time(NULL));
    printf("Array2\n");
    printArray(nums2, NUMEL);

    binarySearchSetup(nums1, nums2, NUMEL);


    return 0;
}

int binarySearch(int arr[], int numToFind, int low, int high)
{
    if(low > high)
        return FALSE;

    int midpoint = (high + low) / 2;
    int midpointVal = arr[midpoint];
    
    if(midpointVal == numToFind)
        return TRUE;
    else if(midpointVal > numToFind)
        return binarySearch(arr, numToFind, low, midpoint - 1);
    else if(midpointVal < numToFind)
    {
        return binarySearch(arr, numToFind, midpoint + 1, high);
    }

    return FALSE;
}

void binarySearchSetup(int arr1[], int arr2[], int numElem)
{
    int nonMatchingNumCount = 0;
    int nonMatchingNums[numElem];
    for(int i = 0; i < numElem; i++)
    {
        if(!binarySearch(arr2, arr1[i], 0, numElem - 1))
        {
            nonMatchingNums[nonMatchingNumCount] = arr1[i];
            nonMatchingNumCount++;
        }

        if(!binarySearch(arr1, arr2[i], 0, numElem - 1))
        {
            nonMatchingNums[nonMatchingNumCount] = arr2[i];
            nonMatchingNumCount++;
        }

    }

    printf("\nMatching Array Values.\n");
    printArray(nonMatchingNums, nonMatchingNumCount);
    
}




void generateData(int num[], int numel)
{
    for(int i = 0; i < numel; i++)
    {
        num[i] = 1 + rand() % 100;
    }
}

void quicksort(int num[], int lower, int upper)
{
    int pivot;
    int partition(int[], int, int);
    pivot = partition(num, lower, upper);

    if(lower < pivot)
        quicksort(num, lower, pivot - 1);
    if(upper > pivot)
        quicksort(num, pivot + 1, upper);
}

int partition(int num[], int left, int right)
{
    int pivot, temp;

    pivot = num[left];
    while(left < right)
    {
        /* scan from right to left */
        while(num[right] >= pivot && left < right) /** skip over larger or equal values*/
            right--;
        
        if(right != left)
        {
            num[left] = num[right];
            left++;
        }

        /** scan from left to right */
        while(num[left] <= pivot && left < right) /* skip over smaller or equal values */
            left++;
        
        if(right != left)
        {
            num[right] = num[left]; /* move lower value into the available slot */
            right --;
        }
    }

    num[left] = pivot; /** Move pivot into correct position */
    return left; /** return the pivot index */
}

void printArray(int nums[], int numel)
{
    printf("\n");
    for(int i = 0; i < numel; i++)
        printf("%d ", nums[i]);
    printf("\n");
}