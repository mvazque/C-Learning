/**
 * Write a C program that selects and displays the maximum value of five numbers that are to be
 * entered when the program is executed. Hint: Use a for loop with both a scanf and if statement
 * internal to the loop.
 * 
 * 
 * Modify the program so that it displays both the maximum value and the position in input set of
 * numbers where the maximum occurs
*/

#include <stdio.h>

int main()
{
    #define MAXCOUNT 5
    #define SENTINELVALUE -412.2315125

    float number, maxNum = SENTINELVALUE;
    int maxNumPosition;

    for(int i = 0; i < MAXCOUNT; i++)
    {
        printf("Please provide a number to be used: ");
        scanf("%f", &number);

        if(number > maxNum || maxNum == SENTINELVALUE)
        {
            maxNum = number;
            maxNumPosition = i;
        }
        
    }

    printf("The maximum value is %f at position %d.\n", maxNum, maxNumPosition + 1);
}