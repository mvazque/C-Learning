/**
 * Write a declaration to store the following values in an array named prices: 16.24, 18.98, 23.75,
 * 16.29, 19.54, 14.22, 11.13, 15.39. Include the declaration in a program that displays the values
 * in the array
 * 
 * Repeat the exercise but make the variable a global value
*/

#include <stdio.h>
#define NUMELEMENTS 8
float prices[NUMELEMENTS] = {16.24, 18.98, 23.75, 16.29, 
                            19.54, 14.22, 11.13, 15.39};
int main()
{
    
    
    for(int i = 0; i < NUMELEMENTS; i++)
    {
        printf("%.2f ", prices[i]);
    }

    printf("\n");

    return 0;
}