/**
 * Write a function that recursively determines the value of the nth term of a geometric sequence
 * defined by the terms
 * 
 * a, a*r, a*r^2, a * r ^3 ... a * r^(n-1)
 * 
 * The argument to the function should be the first term, a, the common ratio r, and the value of
 * n
 * 
 * 
 * Modify the function so that the sum of the first n terms of the sequence is returned
 * 
 * I probably don't understand the problem but I dont see why we need recursion, no values seem
 * to be dependent on the previous since they are all just constants.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float geoRecurs(int, int, int);

    int index, start, ratio;

    printf("Please provide the starting value: ");
    scanf("%d", &start);

    printf("Please provide the ratio value: ");
    scanf("%d", &ratio);

    printf("Please provide the index: ");
    scanf("%d", &index);

    printf("The value of the geometric is %f.\n", geoRecurs(start, ratio, index));

    return 0;
}

float geoRecurs(int a, int r, int n)
{
    float totalValue;
    if(1 == n)
    {
        totalValue = a;
    }
    else
    {
        geoRecurs(a, r, n - 1);
        totalValue = a * pow(r, n-1);
    }

    printf("Recursive value %f.\n", totalValue);
    return totalValue;
}