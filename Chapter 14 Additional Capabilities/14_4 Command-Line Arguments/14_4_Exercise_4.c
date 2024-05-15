/**
 * Write a program that accepts two integer values as command-line arguments. The program
 * should multiply the two values entered and display the result.
 * Hint: The command line must be accepted as string data and converted to numerical values
 * before multiplication.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf("Insufficient inputs\n");
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("The product of numbers %d and %d is %d.\n", num1, num2, num1 * num2);

    return 0;
}