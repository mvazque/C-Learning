/**
 * The sum of a series of consecutive numbers from 1 to n can be defined recursively as 
 * 
 * sum(1) = 1;
 * sum(n) = n + sum(n - 1);
 * 
 * Write a recursive C function that accepts n as an argument and calculates the sum of the numbers
 * from 1 to n
 * 
 * Test the function written in exercise 2a with a program that requests the value of n from the 
 * user and then calculates and displays the sum of the numbers from 1 to n
*/

#include <stdio.h>

int main()
{
    int sumRecurs(int);

    int index;

    printf("Please provide the index of the number to sum up to: ");
    scanf("%d", &index);

    printf("The sum of all numbers before and including %d is %d.\n", index, sumRecurs(index));

    return 0;
}

int sumRecurs(int index)
{
    if(1 == index || 0 == index){
        return index;
    }
    else
    {
        return index + sumRecurs(index - 1);
    }
}