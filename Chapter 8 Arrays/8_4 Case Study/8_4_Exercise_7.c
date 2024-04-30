/**
 * Write a program that initially accepts a set of numerical grades from the keyboard into an array
 * The maximum number of grades is 50 and data entry should be terminated when a negative number has
 * been entered. Have your program sort and print the grades in descending order.
*/

#include <stdio.h>
void printArray(float [], int);
void swap(float*, float*);
void quickSort(float [], int, int);
int partition(float [], int, int);

int main()
{
    #define NUMELEMS 50
    float grades[NUMELEMS], input;
    int gradesIndex = 0;


    do
    {
        printf("Please provide a grade value: ");
        scanf("%f", &input);

        if(input >= 0 && input <= 100)
        {
            grades[gradesIndex] = input;
            gradesIndex++;
        }
    } while (input > 0 && gradesIndex < NUMELEMS);
    gradesIndex--;

    quickSort(grades, 0, gradesIndex);
    printArray(grades, gradesIndex + 1);

    return 0;
}

void swap(float *num1, float *num2)
{
    float temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(float nums[], int lowPointer, int highPointer)
{
    int i = lowPointer, j = highPointer;
    float pivot = nums[lowPointer];

    while(i < j)
    {
        // Find the first element less than pivot
        while(nums[i] >= pivot && i <= highPointer - 1)
            i++;
            
        // Find the first element greater than pivot
        while(nums[j] < pivot && j >= lowPointer + 1)
            j--;
        
        if(i < j)
            swap(&nums[i], &nums[j]);
    }
    swap(&nums[lowPointer], &nums[j]);
    return j;
}

void quickSort(float nums[], int lowPointer, int highPointer)
{
    int partitionIndex;
    if(lowPointer < highPointer)
    {
        partitionIndex = partition(nums, lowPointer, highPointer);
        quickSort(nums, lowPointer, partitionIndex - 1);
        quickSort(nums, partitionIndex + 1, highPointer);
    }
}

void printArray(float nums[], int numel)
{
    printf("\n");
    for(int i = 0; i < numel; i++)
        printf("%5.2f, ", nums[i]);
    printf("\n");
}