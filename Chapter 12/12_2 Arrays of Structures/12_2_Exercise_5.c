/**
 * Construct a set of parallel arrays consisting of 10 integer identification numbers and
 * 10 pay rates. Then, determine the identification number that corresponds to the highest pay rate.
 * Make sure to locate the highest pay rate by sorting the pay rate array so that the highest pay
 * rate has a subscript value of 0
 * 
 * What problems did you encounter in determining the correct identification number when you sorted
 * the pay rate array as specified?
*/

#include <stdio.h>

int main()
{
    void printArray(int[], int);
    void printFloatArray(float[], int);
    #define NUMELEM 10
    #define TRUE 1
    #define FALSE 0
    float payRates[NUMELEM] = { 15.2, 2.5, 11.2, 8.43, 13.5, 6.78, 4.52, 6.43, 17.5, 11.2};
    int idNums[NUMELEM] = {12,51,53,123,122,11,52,64,65,34};
    int sortHappened = TRUE;
    float maxRate, tempRate;
    int tempId;

    while(sortHappened)
    {
        sortHappened = FALSE;
        maxRate = payRates[0];
        for(int i = 0; i < NUMELEM - 1; i++)
        {
            if(payRates[i] < payRates[i+1])
            {
                tempRate = payRates[i];
                payRates[i] = payRates[i+1];
                payRates[i+1] = tempRate;

                tempId = idNums[i];
                idNums[i] = idNums[i + 1];
                idNums[i + 1] = tempId;

                sortHappened = TRUE;
            }
        }
    }

    // printFloatArray(payRates, NUMELEM);
    // printArray(idNums, NUMELEM);

    printf("The ID of the highest rate (%.2f) is: %d\n", payRates[0], idNums[0]);
}


void printArray(int nums[], int numel)
{
    printf("\n");
    for(int i = 0; i < numel; i++)
        printf("%d ", nums[i]);
    printf("\n");
}

void printFloatArray(float nums[], int numel)
{
    printf("\n");
    for(int i = 0; i < numel; i++)
        printf("%.2f ", nums[i]);
    printf("\n");
}