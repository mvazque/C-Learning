/**
 * Write and test a function that returns the position of the largest and smallest values in an
 * array of double-precision numbers
*/

#include <stdio.h>
void maxAndMin(double[], int[], int);

int main()
{
    double testArray1[] = {15.21, 1214.21, 21.12, 142.12,44.2, 214.2, 421.2};
    int maxMinArray[2] = {0, 0};
    maxAndMin(testArray1, maxMinArray, 7);
    printf("For the first array max is in position %d, and min is in position %d.\n", maxMinArray[1], maxMinArray[0]);

    double testArray2[] = {-1, 124, 542, -11245, 15.21, 17.83 -82.11, 100 , -100};
    maxAndMin(testArray2, maxMinArray, 8);
    printf("For the second array max is in position %d, and min is in position %d.\n", maxMinArray[1], maxMinArray[0]);


    double testArray3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    maxAndMin(testArray3, maxMinArray, 10);
    printf("For the third array max is in position %d, and min is in position %d.\n", maxMinArray[1], maxMinArray[0]);

    return 0;
}

void maxAndMin(double nums[], int positions[], int numEls)
{
    int maxPosition = 0 , minPosition = 0;
    double maxNum = nums[0], minNum = nums[0], temp;

    for(int i = 0; i < numEls; i++)
    {
        temp = nums[i];
        if(temp > maxNum)
        {
            maxNum = temp;
            maxPosition = i;
        }

        if(temp < minNum)
        {
            minNum = temp;
            minPosition = i;
        }
    }
    positions[0] = minPosition;
    positions[1] = maxPosition;

    return;
}