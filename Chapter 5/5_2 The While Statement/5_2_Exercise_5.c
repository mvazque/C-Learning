/**
 * A machine purchased for $28,000 is depreciated at a rate of $4,000 a year for seven years.
 * Write and run a C program that computes and displays a depreciation table for seven
 * years. The table should have the form
 * 
 *                      END-OF-YEAR     ACCUMULATED
 * Year Depreciation       VALUE        DEPRECIATION
 * 1    4000              24000         4000
 * 2    4000              20000         8000
 * 3    4000              16000         12000
 * 4    4000              12000         16000
 * 5    4000              8000          20000
 * 7    4000              4000          24000
 * 8    4000              0             28000
*/

#include <stdio.h>

int main(void)
{
    printf("                     END-OF-YEAR      ACCUMULATED\n");
    printf("Year  Depreciation      VALUE         DEPRECIATION\n");
    printf("--------------------------------------------------\n");

    int initialValue = 28000, count = 1;

    while (count <= 7)
    {
        printf("%-4d  %-15d  %6d      %10d\n", count, 4000, initialValue - (count * 4000), count * 4000);
        count++;
    }
    
    return 0;
}