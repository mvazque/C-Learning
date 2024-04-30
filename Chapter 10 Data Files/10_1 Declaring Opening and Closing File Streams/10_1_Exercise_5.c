/**
 * Write individual declaration and open statements to link the following external data filenames
 * to their corresponding internal names. Note that all files are binary, not text
 * 
 * coba.mem     memo        binary and output
 * coupons.bdn  coups       binary and append
 * prices.dat   priFile     binary and input
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *memo = fopen("coba.mem", "w");
    FILE *coups = fopen("coupons.bdn", "a");
    FILE *priFile = fopen("prices.dat", "r");

    if(priFile == NULL)
    {
        printf("prices.dat does not exist.\n");
    }

    fclose(memo);
    fclose(coups);
    fclose(priFile);
}