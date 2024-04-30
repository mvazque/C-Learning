/**
 * Modify the findMax() function to locate the minimum value of hte passed array. Write the function
 * using only pointers and rename the function findMin().
*/

#include <stdio.h>
int findMin(int[], int);

int main()
{
    #define NUMELS 5
    int nums[NUMELS] = {2, 18, 1, 27, 16};

    printf("The maximum value is %d\n", findMin(nums, NUMELS));

    return 0;
}

int findMin(int vals[], int numEls)
{
    int i, min = vals[0];
    for(i = 1; i < numEls; i++)
        if(min > vals[i])
            min = vals[i];
        
    return min;
}