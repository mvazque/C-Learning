/**
 * Create a file with the following data containing the part number, opening balance, number
 * of items sold, and minimum stock required:
 * 
 * Part Number Initial Amount Quantity Sold Minimum Amount
 * QA310 95 47 50
 * CM145 320 162 200
 * MS514 34 20 25
 * EN212 163 150 160
 * 
 * 
 * Write a C program to create an inventory report based on the data in the file created. Ths 
 * display should consist of the part number, current balance, and amount that is  necessary to 
 * bring the minimum level
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define NUMELEM 80
    FILE *readFile = fopen("exercise8.dat", "r");

    if(readFile == NULL)
    {
        printf("File not found.\n");
        exit(1);
    }

    char title1[NUMELEM], title2[NUMELEM], title3[NUMELEM], title4[NUMELEM], title5[NUMELEM];
    char title6[NUMELEM], title7[NUMELEM], title8[NUMELEM];

    fscanf(readFile, "%s %s %s %s %s %s %s %s", title1, title2, title3, title4, title5, title6, title7, title8);

    printf("%s %s | %s %s | %s %s | %s %s | Amount Needed\n", title1, title2, title3, title4, title5, title6, title7, title8);
    printf("------------|----------------|---------------|----------------|----------------\n");
    char partNum[NUMELEM], initialAmount[NUMELEM], quantitySold[NUMELEM], minAmount[NUMELEM];
    int amountNeeded, remainingAmount;

    while(fscanf(readFile, "%s %s %s %s", partNum, initialAmount, quantitySold, minAmount) == 4)
    {
        remainingAmount = atoi(initialAmount) - atoi(quantitySold);
        amountNeeded = atoi(minAmount) - remainingAmount;
        if(amountNeeded < 0)
            amountNeeded = 0;
        printf("%-12s %-16s %-15s %-16s %d\n", partNum, initialAmount, quantitySold, minAmount, amountNeeded );
    }
}