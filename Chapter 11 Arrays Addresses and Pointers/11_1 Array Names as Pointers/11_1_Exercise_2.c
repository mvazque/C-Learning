/**
 * Write a declaration to store the following values in a static array named rates: 12.9,
 * 19.6, 11.4, 13.7, 9.5, 15.2, 17.6. Include the declaration in a program that displays the
 * values in an array using pointer notation
*/

#include <stdio.h>

int main()
{
    float rates[] = {12.9, 19.6, 11.4, 13.7, 9.5, 15.2, 17.6 };
    int numElems = sizeof(rates)/sizeof(rates[0]);
    for(int i = 0; i < numElems; i++)
    {
        if(i == numElems - 1)
        {
            printf("%.2f\n", *(rates + i));
            continue;
        }
        printf("%.2f, ", *(rates + i));
    }
}