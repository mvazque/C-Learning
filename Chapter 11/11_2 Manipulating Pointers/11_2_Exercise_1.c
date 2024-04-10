/**
 * Replace the while statement in Program 11.5 with a for statement.
*/

#include <stdio.h>
#define NUMELS 5

int main()
{
    int nums[NUMELS] = {16, 54, 7, 43, -5};
    int total = 0, *nPtr;

    nPtr = nums; /* store address of nums[0] in nPtr */
    // while(nPtr < nums + NUMELS)
    //     total += *nPtr++;

    for(int i = 0; i < NUMELS; i++)
        total += *nPtr++;
    printf("The total of the array elements is %d\n", total);

    return 0;
}