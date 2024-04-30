/**
 * Write a function that recursively determines the value of the nth term of an arithmetic sequence
 * defined by the terms
 * 
 * a, a+d, a+2d, a+3d, ... a + (n-1)d
 * 
 * The arguments to the function should be the first term a, the common difference,d, and the value
 * of n
 * 
 * Modify the function written for the exercise so that the sum of the first n terms of the sequence
 * is returned
 * 
 * I probably don't understand the problem but I dont see why we need recursion, no values seem
 * to be dependent on the previous since they are all just constants.
*/

#include <stdio.h>

int main()
{
    int arithRecurs(int, int, int);
    int index, start, difference;

    printf("Please provide the starting value: ");
    scanf("%d", &start);

    printf("Please provide the difference value: ");
    scanf("%d", &difference);

    printf("Please provide the index: ");
    scanf("%d", &index);

    printf("The value of the arithmetic is %d.\n", arithRecurs(start, difference, index));

    return 0;
}

int arithRecurs(int firstTerm, int difference, int n)
{
    int sum;
    if(0 == n)
    {
        sum = firstTerm;
    }
    else
    {
        sum = firstTerm + (n-1) * difference;
        arithRecurs(firstTerm, difference, n - 1);
    }

    printf("Term %d value %d.\n", n, sum);

    return sum;
}