/**
 * Write a C program that includes two functions named calcAvg() and variance(). The calcAvg()
 * function should calculate and return the average of the values stored in an array named
 * testvals. The array should be declared in main() andd include the values 89, 95, 72, 83, 
 * 99, 54, 86, 75, 92, 73, 79, 75, 82,73. The variance function should calculate and return
 * the variance of the data. The variance is obtained by subtracting the averages from each
 * value in testvals, squaring the difference obtained, adding their squares and dividing by
 * the number of elements in testvals. The values returned from calcAvg() and variance() 
 * should be displayed using printf() function calls in main().
*/

#include <stdio.h>
#define NUMELEMS 14

int main()
{
    float calcAvg(int[]);
    float variance(int[], float);

    int values[NUMELEMS] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};

    float average = calcAvg(values);

    printf("The average: %f\n", average);
    printf("The variance is: %f\n", variance(values, average));

    return 0;
}

float calcAvg(int values[])
{
    int total = 0;
    for(int i = 0; i < NUMELEMS; i++)
    {
        total += values[i];
    }

    return (float) total / NUMELEMS;
}

float variance(int values[], float average)
{
    float total = 0, tempNum;
    for(int i = 0; i < NUMELEMS; i++)
    {
        tempNum = values[i] - average;
        total += tempNum * tempNum;
    }

    return (float) total / NUMELEMS;
}