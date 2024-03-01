/**
 * A numeric palindrome is a number that is the same when read either forward or backward. For example,
 * the number 4321234 is a numeric palindrome. Use this information to create a recursive function
 * named numpal() that accepts an integer number as a parameter and returns a 1 if the parameter
 * is a numeric palindrome and a 0 if it is not.
 * 
 * Test the function with a program that request five user-input integers, one at a time. After
 * each integer is entered, the program should display a message indicating the that the number
 * is not a numeric palindrome.
*/

#include <stdio.h>

int main()
{
    int numpal(int, int *);

    int number, flippedNumber = 0;

    printf("Please provide a number to test: ");
    scanf("%d", &number);

    if(numpal(number, &flippedNumber))
        printf("Number is a palindrome.\n");
    else
        printf("Number is not a palindrome.\n");
    
    return 0;
}

int numpal(int number, int *flippedNumber)
{
    if(number/10 == 0)
    {
        *flippedNumber = number + *flippedNumber * 10;
    }
    else 
    {
        *flippedNumber = *flippedNumber * 10 + number % 10;
        numpal(number / 10, flippedNumber);
    }

    if(*flippedNumber == number)
        return 1;
    else
        return 0;
}