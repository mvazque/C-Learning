/**
 * Using the rand() C library functions, fill an array of 1000 double-precision numbers with
 * random numbers that have been scaled to the range of 1 to 100. Then determine and display the 
 * number of random numbers have values between 1 and 50 and the number having values greater
 * than 50. 
 * 
 * What do you expect the output counts to be?
 * Ideally its close to 50/50 or 500 and 500 but as we know with randomness that is not the case
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(double [], int);
#define GREATERINDEX 1
#define LOWERINDEX 0

int main()
{
    #define NUMELEMS 1000
    
    void randomArrayGenerator(double[], int);
    void countNums(double [], int [], int);

    double randomArray[NUMELEMS];
    int counters[] = {0, 0};
    srand(time(NULL));
    randomArrayGenerator(randomArray, NUMELEMS);

    countNums(randomArray, counters, NUMELEMS);

    // printArray(randomArray, NUMELEMS);
}

void randomArrayGenerator(double randArr[], int numElems)
{
    for(int i = 0; i < numElems; i++)
    {
        randArr[i] = 1 + rand() % 100;
    }
}

void countNums(double randArr[], int counts[], int numElems)
{
    for(int i = 0; i < numElems; i++)
    {
        if(randArr[i] <= 50)
            counts[LOWERINDEX]++;
        else
            counts[GREATERINDEX]++;
    }

    printf("The number of elements less than or equal to 50 is: %d\n", counts[LOWERINDEX]);
    printf("The number of elements greater than 50 is: %d\n", counts[GREATERINDEX]);
}



void printArray(double nums[], int numel)
{
    for(int i = 0; i < numel; i++)
        printf("%.2f ", nums[i]);
    printf("\n");
}