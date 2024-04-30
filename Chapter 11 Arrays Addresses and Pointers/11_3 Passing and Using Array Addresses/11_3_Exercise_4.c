/**
 * Write a C program that declares three single-dimensional arrays named price, quantity,
 * and amount. Each array should be declared in main() and be capable of holding 10
 * double precision numbers. The numbers to be stored in price are
 * 10.62, 14.89, 13.21, 16.55, 19.62, 9.47, 6.58, 19.32, 12.15, 3.99
 * 
 * The numbers to be stored in quantity are 
 * 4, 9.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.9
 * 
 * Have your program pass these three arrays to a function called extend(), which calculates
 * the elements in the amount array as the product of the equivalent elements in the price and
 * quantity arrays (for example, amount[1] = price[1] * quantity[1]). After extend() has put values
 * into the amount array, display the values in the array from within main(). Write the extend()
 * function using pointers
*/

#include <stdio.h>

int main()
{
    #define NUMELEMS 10
    void extend(double*, double*, double*, int);
    double price[NUMELEMS] = {10.62, 14.89, 13.21, 16.55, 19.62, 9.47, 6.58, 19.32, 12.15, 3.99};
    double quantity[NUMELEMS] = {4, 9.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.9};
    double amount[NUMELEMS];

    extend(price, quantity, amount, NUMELEMS);
}

void extend(double *price, double *quantity, double *amount, int numElem)
{
    for(int i = 0; i < numElem; i++)
    {
        *(amount + i) = *(price + i) * *(quantity + i);
    }

    for(int i = 0; i < numElem; i++)
        printf("%.3f\n", *(amount + i));

    return;
}