/**
 * Modify Program 8.6 so that the grades are entered into the values array using a function
 * named entvals()
*/

#include <stdio.h>
#include <math.h>


double findAvg(int [], int);
double stdDev(int [], int, double);
void entvals(int [], int);

int main()
{
    #define NUMELS 10
    int values[NUMELS];
    // int values[NUMELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
    double average, stddev;

    entvals(values, NUMELS);
    average = findAvg(values, NUMELS); /* Call the function */
    stddev = stdDev(values, NUMELS, average); /* Call the function */

    printf("The average of the numbers is %5.2f\n", average);
    printf("The standard deviation of the numbers is %5.2f\n", stddev);

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

void entvals(int nums[], int numel)
{
    for ( int i = 0; i < numel; i++)
    {
        printf("Please provide a number to add to the calculation: ");
        scanf("%d", &nums[i]);
    }

    return;
}