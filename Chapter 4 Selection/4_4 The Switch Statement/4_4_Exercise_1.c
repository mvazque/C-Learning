/**
 * Each disk drive in a shipment of devices is stamped with a code from 1 through 4, which 
 * indicates a drive manufacturer as follows:
 * 
 * Code                 Disk Drive Manufacturer
 * 1                    3M Corporation
 * 2                    Maxell Corporation
 * 3                    Sony Corporation
 * 4                    Varbatim Corporation
 * 
 * Write a C program that accepts the code number as an input and, based on value entered,
 * displays the correct disk drive manufacturer.
*/

#include <stdio.h>

int main(void)
{
    int diskDriveCode;
    printf("Provide the code of the disk drive manufacturer: ");
    scanf("%d", &diskDriveCode);

    switch (diskDriveCode)
    {
    case 1:
        printf("The disk drive manufacturer is 3M Corporation.\n");
        break;
    case 2:
        printf("The disk drive manufacturer is Maxell Corporation.\n");
        break;
    case 3:
        printf("The disk drive manufacturer is Sony Corporation.\n");
        break;
    case 4:
        printf("The disk drive manufacturer is Varbatim Corporation.\n");
        break;
    default:
        printf("The code does not match any listed corporations.\n");
    }

    return 0;
}