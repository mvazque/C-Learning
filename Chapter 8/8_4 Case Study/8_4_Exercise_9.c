/**
 * Given a one-dimensional array of integer numbers, write and test a function that prints the 
 * elements in reverse order
*/

#include <stdio.h>

int main()
{
    void printArrayReverse(int [], int);
    int testArray1[5] = {1, 2, 3,4 ,5};
    int testArray2[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 00};

    printArrayReverse(testArray1, 5);
    printArrayReverse(testArray2, 10);

    return 0;
}

void printArrayReverse(int nums[], int numel)
{
    printf("\n");
    for(int i = numel - 1; i >= 0; i--)
        printf("%d ", nums[i]);
    printf("\n");
}