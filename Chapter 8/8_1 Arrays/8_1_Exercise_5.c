/**
 * Write a program that inputs 10 double-precision numbers into an array named raw. After 10
 * user-input numbers are entered into the array, your program should cycle through raw 10
 * times. During each pass through the array, your program should select the lowest value in
 * raw and place the selected value in the next available slot in an array named sorted. Thus,
 * when your program is complete the sorted array should contain hte numbers in raw in sorted
 * order from lowest to highest. (Hint: Make sure to reset the lowest value you selected during
 * each pass to a very high number so that it is not selected again. You will need a second for
 * loop within the first for loop to locate the minimum value for each pass)
 * 
 * 
 * The method used in the exercise in the array is very inefficient. Can you determine why? What
 * might be a better method of sorting the numbers in an array?
 * Its inefficient as it has to run through the same array multiple times. A better solution will be 
 * to do something like the quick sort method or breaking hte pieces into smaller pieces to sort.
*/

#include <stdio.h>

int main()
{
    #define NUMELEMENTS 10
    #define MAXVALUE 2147483647.00
    double sorted[NUMELEMENTS], raw[NUMELEMENTS];

    // double raw[NUMELEMENTS] = {10, 21.1, 2131.213, 321.1, 321.2, 0.321, 421.2, 213.1, 31.42, 21.2};

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        int tempValue;
        printf("Please provide a number: ");
        scanf("%lf", &raw[i]);
        // printf("%f\n", raw[i]);
    }

    printf("Raw: ");
    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("%.2f ", raw[i]);
    }
    printf("\n");

    double smallestNum;
    int smallestNumIndex;

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        smallestNum = MAXVALUE;
        smallestNumIndex = -1;
        for(int j = 0; j < NUMELEMENTS; j++)
        {
            if(raw[j] < smallestNum)
            {
                smallestNumIndex = j;
                smallestNum = raw[j];
            }
        }
        sorted[i] = raw[smallestNumIndex];
        raw[smallestNumIndex] = MAXVALUE;
    }

    printf("Sorted: ");
    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("%.2f ", sorted[i]);
    }

    printf("\n");
}