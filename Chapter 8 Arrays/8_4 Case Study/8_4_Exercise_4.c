/**
 * Modify program 8.6 so that a function named sort is called after the call to the stdDev
 * function. The sort function should sort the grades into increasing order for display by
 * main()
 * 
 * I ended up using code I found online, honestly need to review quicksort and try to do it myself
*/

#include <stdio.h>
#include <math.h>


double findAvg(int [], int);
double stdDev(int [], int, double);
int high(int [], int);
void quickSort(int [], int, int);
void swap(int *, int *);
void printArray(int [], int);

int main()
{
    #define NUMELS 10
    int values[NUMELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
    double average, stddev;

    average = findAvg(values, NUMELS); /* Call the function */
    stddev = stdDev(values, NUMELS, average); /* Call the function */

    printf("The average of the numbers is %5.2f\n", average);
    printf("The standard deviation of the numbers is %5.2f\n", stddev);
    printf("The highest value in the list is %d.\n", high(values, NUMELS));

    quickSort(values, 0, NUMELS - 1);

    printArray(values, NUMELS);

    return 0;
}

double findAvg(int nums[], int numel)
{
    int i;
    double sumnums = 0.0;

    for(i = 0; i < numel; i++) /* Calculate the sum of the grades */
        sumnums = sumnums + nums[i];

    return sumnums / numel; /* calculate and return the average */
}

double stdDev(int nums[], int numel, double av)
{
    int i;
    double sumdevs = 0.0;

    for ( i = 0; i < numel; i++)
        sumdevs = sumdevs + pow((nums[i] - av), 2);
    
    return sqrt(sumdevs/numel);
}

int high(int nums[], int numel)
{
    int highestVal = nums[0];

    for(int i = 1; i < numel; i++)
    {
        if(nums[i] > highestVal)
            highestVal = nums[i];
    }

    return highestVal;
}

// Function to swap two elements 
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

// {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
int partition(int nums[], int lowPointer, int highPointer)
{
    // initialize pivot to be the first element 
    int pivot = nums[lowPointer]; 
    int i = lowPointer; 
    int j = highPointer; 
    while(i < j)
    {
        // find the first element greater than the pivot
        while(nums[i] <= pivot && i <= highPointer - 1)
            i++;
        

        // find the first element less than the pivot
        while(nums[j] > pivot && j >= lowPointer + 1)
            j--;
        
        if(i < j)
            swap(&nums[i], &nums[j]);
    }


    swap(&nums[lowPointer], &nums[j]); 
    return j;
}

void quickSort(int nums[], int lowPointer, int highPointer)
{
    if(lowPointer < highPointer)
    {
        int partitionIndex = partition(nums, lowPointer, highPointer);
        quickSort(nums, lowPointer, partitionIndex - 1);
        quickSort(nums, partitionIndex + 1, highPointer);
    }
}

void printArray(int nums[], int numel)
{
    printf("\n");
    for(int i = 0; i < numel; i++)
        printf("%d ", nums[i]);
    printf("\n");
}