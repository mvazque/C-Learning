/**
 * Modify Program 8.16 to use a larger test list consisting of 20 numbers.
 * 
 * Modify Program 8.16 to use a list of 100 randomly selected numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMEL 100

int main()
{
    int nums[NUMEL];
    int i;
    void quicksort(int[], int, int);
    void generateData(int[], int);


    generateData(nums, NUMEL);

    quicksort(nums, 0, NUMEL - 1);

    printf("The sorted list, in ascending order is: \n");
    for(i = 0; i < NUMEL; i++)
        printf("%d ", nums[i]);
    
    printf("\n");

    return 0;
}

void generateData(int num[], int numel)
{
    srand(time(NULL));

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