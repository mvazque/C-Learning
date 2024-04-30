/**
 * Rewrite program 8.6 to determine the average nand standard deviation of the following list of
 * 68, 72, 78, 69, 85, 98, 95, 75, 77, 82, 84, 91, 89, 65, 75
 * 
*/

#include <stdio.h>
#include <math.h>


double findAvg(int [], int);
double stdDev(int [], int, double);

int main()
{
    #define NUMELS 15
    int values[NUMELS] = {68, 72, 78, 69, 85, 98, 95, 75, 77, 82, 84, 91, 89, 65, 75};
    double average, stddev;

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
