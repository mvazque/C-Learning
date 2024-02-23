/**
 * A machine purchased for $28,000 is depreciated at a rate of $4,000 a year for seven years.
 * Write and run a program that computes and displays a depreciation table for seven years. The
 * table should have the form
 *             DEPRECIATION SCHEDULE
 *             ---------------------
 * 
 *                   END-OF-YEAR ACCUMULATED
 * YEAR DEPRECIATION   VALUE     DEPRECIATION
 * ---- ------------ ----------- ------------
 * 1       4000        24000        4000
 * 2       4000        20000        8000
 * 3       4000        16000       12000
 * 4       4000        12000       16000
 * 5       4000         8000       20000
 * 6       4000         4000       24000
 * 7       4000            0       28000
*/

#include <stdio.h>

int main(void)
{
    #define MAXYEAR 7
    #define DEPRECIATIONAMOUNT 4000

    int initialValue = 28000;

    printf("            DEPRECIATION SCHEDULE\n");
    printf("            ---------------------\n\n");
    printf("                  END-OF-YEAR ACCUMULATED\n");
    printf("YEAR DEPRECIATION   VALUE     DEPRECIATION\n");
    printf("---- ------------ ----------- ------------\n");

    for(int i = 1; i <= 7; i++)
    {
        printf("%d %10d %12d %11d\n", i, DEPRECIATIONAMOUNT, initialValue - 4000 * i, 4000 * i);
    }

    return 0;
}