/**
 * Write a C program to input the following values into an array named prices: 10.95, 16.32,
 * 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 18.59. After the data is entered, your program should 
 * output the values.
 * 
 * Modify the code so after the data is entered, have your program display them in the following
 * form
 * 
 * 10.95 16.32 12.15
 * 8.22 15.98 26.22
 * 13.54 6.45 18.59
 * 
*/

#include <stdio.h>

int main()
{
    float prices[9] = {10.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 18.59};

    printf("%5.2f %5.2f %5.2f\n", prices[0], prices[1], prices[2]);
    printf("%5.2f %5.2f %5.2f\n", prices[3], prices[4], prices[5]);
    printf("%5.2f %5.2f %5.2f\n", prices[6], prices[7], prices[8]);

    return 0;
}