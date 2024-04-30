/**
 * Write a C program that stores the following numbers in an array named rates: 
 * 6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 9.2, 9.4, 9.6, 9.8, 9.0. Display the values
 * in the array by changing the address in a pointer called dispPt. Use a for statement in your
 * program
 * 
 * Modify the program to use a while statement
 * 
*/

#include <stdio.h>

int main()
{
    #define NUMELEMS 12
    float rates[NUMELEMS] = { 6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 9.2, 9.6, 9.8, 9.0 };
    float *dispPt = rates;

    while(dispPt < rates + NUMELEMS)
        printf("%.2f ", *dispPt++);

    printf("\n");
    return 0;
}