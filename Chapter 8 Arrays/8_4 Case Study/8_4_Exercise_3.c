/**
 * Modify program 8.6 so that a high function is called that determines the highest value in
 * the passed array an returns this value to the main program unit for display.
*/

#include <stdio.h>
#include <math.h>


double findAvg(int [], int);
double stdDev(int [], int, double);
int high(int [], int);

int main()
{
    #define NUMELS 10
    int values[NUMELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
    double average, stddev;

    average = findAvg(values, NUMELS); /* Call the function */
    stddev = stdDev(values, NUMELS, average); /* Call the function */

    printf("The average of the numbers is %5.2f\n", average);
    printf("The standard deviation of the numbers is %5.2f\n", stddev);
    printf("The highest value in the list is %d.\n", high(values, NUMELS));

    return 0;
}

double findAvg(int nums[], int numel)
{
    int i;
    double sumnums = 0.0;

    for(i = 0; i < numel; i++) /* Calculate the sum of the grades */
        sumnums = sumnums + nums[i];

    return sumnums / numel; /* calculate and return the average */
}

double stdDev(int nums[], int numel, double av)
{
    int i;
    double sumdevs = 0.0;

    for ( i = 0; i < numel; i++)
        sumdevs = sumdevs + pow((nums[i] - av), 2);
    
    return sqrt(sumdevs/numel);
}

int high(int nums[], int numel)
{
    int highestVal = nums[0];

    for(int i = 1; i < numel; i++)
    {
        if(nums[i] > highestVal)
            highestVal = nums[i];
    }

    return highestVal;
}