/**
 * Modify the findMax() function in program 8.5 to locate the minimum value of the passed array. 
 * Rename the function findMin().
 * 
 * Include the function in a complete program and run it
*/

#include <stdio.h>
int findMin(int [], int);

int main()
{
    #define MAXELS 5
    int nums[MAXELS] = {2, 18, 1, 27, 16};

    printf("The maximum value is %d\n", findMin(nums, MAXELS));

    return 0;
}

int findMin(int vals[], int numels)
{
    int i, min = vals[0];

    for(i = 1; i < numels; i++)
        if(min > vals[i])
            min = vals[i];

    return min;
}