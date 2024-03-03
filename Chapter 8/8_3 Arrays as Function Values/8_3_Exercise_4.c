/**
 * Write a program that declares three one-dimensional arrays named price, quantity, and amount.
 * Each array should be declared in main() and should be capable of holding 10 double precision
 * numbers. The numbers that should be stored in price are 10.62, 14.89, 13.21, 16.55, 18.62, 
 * 9.47, 6.58, 18.32, 12.15, 3.98. The numbers that should be store in quantity are 4, 8.5, 
 * 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8. Your program should pass these three arrays to a function
 * called extend() which should calculate the elements in the amount array as the product of the
 * equivalent elements in the price and quuantity arrays. 
 * 
 * For example amount[1] = price[1] * quantity[1]
 * 
 * After extend() has put value into the amount array, the values in the array should be displayed 
 * from with main()
 * 0
*/

#include <stdio.h>
#define NUMELEMS 10

int main()
{
    void extend(float [], float [], float []);
    float price[NUMELEMS] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    float quantity[NUMELEMS] = {4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    float amount[NUMELEMS];

    extend(price, quantity, amount);

    for(int i = 0; i < NUMELEMS; i++)
    {
        printf("$%7.2f\n", amount[i]);
    }
}

void extend(float prices[], float quantities[], float amounts[])
{
    for(int i = 0; i < NUMELEMS; i++)
    {
        amounts[i] = prices[i] * quantities[i];
    }
}