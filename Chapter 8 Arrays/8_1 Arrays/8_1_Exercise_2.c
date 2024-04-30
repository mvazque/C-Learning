/**
 * Write a C program to input 15 integer numbers into an array named temp. As each number is input
 * add the number into the total. After all numbers are input, display the numbers and their average
 * 
 * Repeat the exercise but locate the maximum number in the array ( do not add the numbers) as the 
 * values are being input. (Hint: Set the maximum equal to 0 before the for loop used to input the
 * numbers)
 * 
 * Repeat the exercise keeping track of both the max element in the array and the index number for
 * the maximum. After display the numbers, your program should print the two messages
 * 
 * The maximum value is : ___
 * This is element number __ in hte list of number.
 * 
 * Have our program display the correct values in place of the underlines
 * 
 * 
 * Repeat the exercise and have your program locate the minimum value of the data entered
*/
#include <stdio.h>

int main()
{
    #define NUMELEMENTS 15
    #define MAXVALUE 2147483647
    #define MINVALUE -2147483647
    int temp[NUMELEMENTS];
    int max = MINVALUE, min = MAXVALUE, total = 0, maxPosition = -1, minPosition = -1;

    for(int i = 0; i < NUMELEMENTS; i++)
    {
        int tempValue;
        printf("Please provide a number: ");
        scanf("%d", &tempValue);
        temp[i] = tempValue;

        total += tempValue;

        if(tempValue > max)
        {
            max = tempValue;
            maxPosition = i;
        }
        if(tempValue < min)
        {
            min = tempValue;
            minPosition = i;
        }
            
    }

    printf("The average of all values entered is %.3f.\n", (float)total / NUMELEMENTS);
    printf("The maximum value is: %d\n", max);
    printf("This is element number %d in the list of number.\n", maxPosition);
    printf("The minimum value is: %d\n", min);
    printf("This is element number %d in the list of number.\n", minPosition);

    return 0;

}