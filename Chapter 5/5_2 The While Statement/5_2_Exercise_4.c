/**
 * Write a C program that converts feet to meters. The program should display feet from 3 to 30 
 * in 3-foot increments and the corresponding meter equivalents. Use the relationship that
 * 1 meter is equivalent to 3.28 feet
*/

#include <stdio.h>
#define FEETPERMETER 3.28

int main(void)
{
    int feet = 3;

    printf("FEET      METERS\n");
    printf("----------------------\n");
    while(feet <= 30)
    {
        printf("%2d feet %7.3f meters\n", feet, feet / FEETPERMETER);
        feet += 3;
    }
    return 0;
}