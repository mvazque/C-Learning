/**
 * Rewrite the binary search algorithm to use recursion rather than iteration.
 * 
 * So I had already been doing this in recursion so I'm going to do iteration here
*/

#include <stdio.h>
#include <math.h>
#define NUMEL 10
#define TRUE 1
#define FALSE 0

int binarySearch(int[], int, int, int);
void printArray(int[], int);

int main()
{
    int nums1[NUMEL] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int binarySearchSetup(int[], int, int);

    if(binarySearchSetup(nums1, NUMEL, 11))
        printf("Item was found\n");
    else
        printf("Item was not found\n");


    return 0;
}

int binarySearchSetup(int arr[], int numElem, int numToFind)
{
    int numLoops = log2(numElem);
    int low = 0, high = numElem - 1;
    for(int i = 0; i < numElem; i++)
    {
        if(low > high)
            return FALSE;

        int midpoint = (high + low) / 2;
        int midpointVal = arr[midpoint];
        
        if(midpointVal == numToFind)
            return TRUE;
        else if(midpointVal > numToFind)
        {
            high = midpoint - 1;
        }
        else if(midpointVal < numToFind)
        {
            low = midpoint + 1;
        }
    }
    return FALSE;
    
}
