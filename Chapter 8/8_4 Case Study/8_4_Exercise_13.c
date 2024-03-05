/**
 * In many statistical analysis programs, data values that are considerably outside the range of 
 * the majority of values are simply dropped from consideration. Using this information, write a
 * C program that accepts up to 10 double-precision values from a user and determines and displays
 * the average and standard deviation of the input values. All values that are more than four
 * standard deviations away from the computed average are to be displayed and dropped from any 
 * further calculation, and a new average and standard deviation should be computed and displayed
*/

#include <stdio.h>
#include <math.h>

void printArray(double [], int );

#define DROPINDEX 0
#define KEEPINDEX 1

int main()
{
    #define NUMELEMS 10

    double findAverage(double[], int);
    double findStdDeviation(double [], double , int );
    void separateArrays(double [], double [], double [], int [], int , double , double );

    double data[NUMELEMS], dataToDrop[NUMELEMS], dataToKeep[NUMELEMS];
    int arraysCounter[] = { 0, 0};
    float average;
    float stdDeviation;
    int i = 0;

    do
    {
        printf("Please input a value: ");
        scanf("%lf", &data[i]);
        i++;
    } while (i < NUMELEMS);
    printArray(data, NUMELEMS);

    average = findAverage(data, NUMELEMS);

    stdDeviation = findStdDeviation(data, average, NUMELEMS);

    printf("Average value : %lf, Standard Deviation: %lf \n", average, stdDeviation);

    separateArrays(data, dataToDrop, dataToKeep, arraysCounter, NUMELEMS, stdDeviation, average);

    printf("Will be dropping the following\n");
    printArray(dataToDrop, arraysCounter[DROPINDEX]);

    printf("Will keep and calculate the following\n");
    printArray(dataToKeep, arraysCounter[KEEPINDEX]);
    
    average = findAverage(dataToKeep, arraysCounter[KEEPINDEX]);
    stdDeviation = findStdDeviation(dataToKeep, average, arraysCounter[KEEPINDEX]);
    printf("New Average value : %lf, New Standard Deviation: %lf \n", average, stdDeviation);

    return 0;
}

double findAverage(double nums[], int numel)
{
    float total = 0.0;
    for(int i = 0; i < numel; i++)
    {
        total += nums[i];
    }

    return total / numel;
}

double findStdDeviation(double nums[], double avg, int numelems)
{
    double runningTotal = 0;
    double diffFromAvg;

    for(int i = 0; i < numelems; i++)
    {
        diffFromAvg = nums[i] - avg;
        runningTotal += pow(diffFromAvg,2);
    }
    return sqrt(runningTotal / numelems);
}


void separateArrays(double originalNums[], double dropNums[], double keepNums[], int numsCounter[], int numElems, double std, double avg)
{
    double threshold = std * 1, diffFromAvg;
    int keepCounter = 0, dropCounter = 0;
    for(int i = 0; i < numElems; i++)
    {
        diffFromAvg = fabs(originalNums[i] - avg);
        if(diffFromAvg <= threshold)
        {
            keepNums[keepCounter] = originalNums[i];
            keepCounter++;
        }
        else{
            dropNums[dropCounter] = originalNums[i];
            dropCounter++;
        }
    }

    numsCounter[DROPINDEX] = dropCounter;
    numsCounter[KEEPINDEX] = keepCounter;
}

void printArray(double nums[], int numel)
{
    for(int i = 0; i < numel; i++)
        printf("%.2f ", nums[i]);
    printf("\n");
}