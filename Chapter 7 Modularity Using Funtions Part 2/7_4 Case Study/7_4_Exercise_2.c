/**
 * Write a C function named liquid() that is to accept an integer number and the addresses of the
 * variables gallons, quarts, pints, and cups. The passed integer represents the total number of
 * cups, and the function is to determine the number of gallons, quarts, pints, and cups in the
 * passed value. Using the passed addresses, the function should directly alter the respective 
 * variables in the calling function. Use the relationships of 2 cups to a pint, 4 cups to a 
 * quart and 16 cups to a gallon.
*/

#include <stdio.h>

int main()
{
    void liquid(int, int *, int *, int *, int *);

    int totalCups, gallons, quarts, pints, cups;

    printf("Please provide the total number of cups to convert: ");
    scanf("%d", &totalCups);

    liquid(totalCups, &gallons, &quarts, &pints, &cups);

    printf("The total cups %d, is equivalent to %d gallons, %d quarts, %d pints and %d cups.\n", totalCups, gallons, quarts, pints, cups);

    return 0;
}

void liquid(int totalCups, int *gallonsPtr, int *quartsPtr, int *pintsPtr, int *cupsPtr)
{
    *gallonsPtr = totalCups / 16;
    totalCups -= *gallonsPtr * 16;

    *quartsPtr = totalCups / 4;
    totalCups -= *quartsPtr * 4;

    *pintsPtr = totalCups / 2;
    totalCups -= *pintsPtr * 2;

    *cupsPtr = totalCups;

    return;
}