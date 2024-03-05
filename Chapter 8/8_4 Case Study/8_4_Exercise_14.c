/**
 * Given a one-dimensional array of double-precision numbers named num, write a function that 
 * determines the sum of the numbers
 * 
 * Using Repetition
 * 
 * Using recursion
 * (Hint: If n = 1, then the sum is num[0]; otherwise, the sum is num[n] plus the sum of the 
 * first (n-1) elements)
*/

#include <stdio.h>

int main()
{
    #define NUMELEMS 5
    double sumRepetition(double[], int);
    double sumRecursion(double[], int );
    double data[NUMELEMS] = {1.5, 15.25, 3.25, 15.75, 4.25};
    double repSum, recSum;

    repSum = sumRepetition(data, NUMELEMS);
    printf("Sum from repetition: %lf\n", repSum);

    recSum = sumRecursion(data, NUMELEMS - 1);
    printf("Sum from recursion: %lf\n", recSum);

}

double sumRepetition(double nums[], int numElem)
{
    double total = 0;
    for(int i = 0; i < numElem; i++)
    {
        total += nums[i];
    }

    return total;
}

double sumRecursion(double nums[], int position)
{
    if(0 == position)
        return nums[position];
    
    return nums[position] + sumRecursion(nums, position - 1);
}