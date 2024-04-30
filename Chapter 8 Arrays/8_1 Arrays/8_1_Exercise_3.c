/**
 * Write a C program to input the following integer numbers into an array named grades: 89, 95
 * 72, 83, 99, 54, 86, 5, 92, 73, 79, 75, 82, 73. As each number is input, add the numbers
 * to the total. After all numbers are input and the total is obtained, calculate the average of
 * the numbers and use the average to determine the deviation of each value from the average. Store
 * each deviation in an array named deviation.  Each deviation is obtained as the element value less
 * the average of all the data. Have your program display each deviation alongside its corresponding
 * element from the grades array.
 * 
 * Calculate the variance of the data. The variance is obtained by squaring each individual deviation
 * and dividing the sum of the squared deviations by the number of deviations
 * 
*/

#include <stdio.h>

int main()
{
    #define NUMELEMENTS 14
    int temp[NUMELEMENTS];
    float deviation[NUMELEMENTS];
    int total = 0;
    float average, deviationsTotal = 0.0;

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        int tempValue;
        printf("Please provide a number: ");
        scanf("%d", &tempValue);
        temp[i] = tempValue;

        total += tempValue;
    }

    average = (float) total / NUMELEMENTS;
    printf("The average of all values entered is %.3f.\n", average);

    printf("Number     Deviation\n");

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        deviation[i] = temp[i] - average;
        printf("%4d %7.3f\n", temp[i], deviation[i]);
    }

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        deviationsTotal += deviation[i] * deviation[i];
    }

    printf("The variance of the data: %f%%.\n", deviationsTotal / NUMELEMENTS);

    return 0;

}