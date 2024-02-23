/**
 * Write a C program that selects and displays the first 20 integer numbers that are evenly 
 * divisible by 3;
*/

#include <stdio.h>

int main(void)
{
    int count = 0, i = 1;

    while(count < 20)
    {
        if((i % 3) == 0)
        {
            printf("%3d. %5d\n", count + 1, i);
            count++;
        }  
        i++;
    }
    return 0;
}