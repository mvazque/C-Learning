/**
 * Write a C program that has a declaration in main() to store the following numbers into
 * an array named rates: 
 * 6.5, 7.2, 7.5, 9.3, 9.6, 9.4, 9.6, 9.8, 10.0
 * 
 * There should be a function cal to show() that accepts rates in a parameter named rates and then
 * displays the number using the pointer notation *(rates + i).
 * 
 * Modify the show() function written to alter the address in rates. Use the expresion *rates rather
 * than *(rates + i) to retrieve the correct element
*/

#include <stdio.h>

int main()
{
    #define NUMELS 9
    void show(float*, int);
    float rates[NUMELS] = {6.5, 7.2, 7.5, 9.3, 9.6, 9.4, 9.6, 9.8, 10.0};
    show(rates, NUMELS);
}

void show(float *rates, int numElems)
{
    for(int i = 0; i < numElems; i++)
        printf("%.2f\n", *rates++);
    return;
}