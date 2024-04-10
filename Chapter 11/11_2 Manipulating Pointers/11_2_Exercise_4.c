/**
 * Write a C program that stores the following numbers in an array named miles: 
 * 15, 22, 16, 18, 27, 23, 20. 
 * Have your program copy the data stored in miles to another array named dist and then display the
 * values in the dist array
*/

#include <stdio.h>

int main()
{
    #define NUMELEMS 7
    int miles[NUMELEMS] = {15, 22, 16, 18, 27, 23, 20};
    int *nPtr = miles;

    int dist[NUMELEMS];

    for(int i = 0; i < NUMELEMS; i++)
        dist[i] = *nPtr++;

    nPtr = &dist[0];
    while(nPtr < dist + NUMELEMS)
        printf("%d ", *nPtr++);
    
    printf("\n");
    return 0;
}