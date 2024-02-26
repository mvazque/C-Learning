/**
 * Write a C function named whole() that returns the integer part of any number passed to the 
 * function. 
 * Hint assign the passed argument to an integer variable;
 * 
 * Include the function in a working program. Make sure your function is called from main() and
 * correctly returns a value to main(). Have main() use printf() to display the value returned.
 * Test the function by passing various data to it
 * 
*/

#include <stdio.h>

int main()
{
    int whole(float);

    float number;

    printf("Please provide a number: ");
    scanf("%f", &number);

    printf("The whole part of the number is %d.\n", whole(number));

    return 0;
}


int whole(float num)
{
    return (int) num;
}