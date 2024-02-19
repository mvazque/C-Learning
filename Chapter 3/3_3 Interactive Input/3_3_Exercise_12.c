/**
 * Program 3.9 prompts the user to input two numbers, where the first value entered is
 * stored in num1 and the second value is stored in num2. Using this program as a 
 * starting point write a program the at swaps the values stored in the two variables
*/

#include <stdio.h>
int main()
{
    float num1, num2;

    printf("Please type in a number: ");
    scanf("%f", &num1);

    printf("Please type in another number: ");
    scanf("%f", &num2);

    printf("The numbers started as %f and %f.\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The numbers swapped are now %f and %f.\n", num1, num2);

    return 0;

}