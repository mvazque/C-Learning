/**
 * Create a file containing the following car numbers, number of miles driven and number
 * of gallons of gas used by each car:
 * 
 * Car No.  Miles Driven    Gallons Used
 * 54       250             19
 * 62       525             38
 * 71       123             6
 * 85       1,322           86
 * 97       235             14
 * 
 * Write a C program that reads the data in the file created and displays the car number, miles
 * driven, gallons used, and the miles per gallons for each car. The output should additionally
 * contain the total miles driven, total gallons used, and average miles per gallon for all
 * cars. These totals should be displayed at the end of the output report
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    #define NUMELEM 80
    void commaCleanup(char[]);

    FILE *readFile = fopen("exercise7.dat", "r");

    char columnName1[NUMELEM], columnName2[NUMELEM], columnName3[NUMELEM], columnName4[NUMELEM];
    char columnName5[NUMELEM], columnName6[NUMELEM];

    if(readFile == NULL)
    {
        printf("File not found\n");
        exit(1);
    }

    fscanf(readFile, "%s %s %s %s %s %s", columnName1, columnName2, columnName3, columnName4, columnName5, columnName6);

    printf("%s %s | %s %s | %s %s | MPG\n", columnName1, columnName2, columnName3, columnName4, columnName5, columnName6);
    printf("--------|--------------|--------------|-------\n");

    char carNo[NUMELEM], milesDriven[NUMELEM], gallonsUsed[NUMELEM];
    float drivenTotal = 0, gallonsTotal = 0, averageGallonTotal = 0, mpg;
    int carCount = 0;

    while(fscanf(readFile, "%s %s %s", carNo, milesDriven, gallonsUsed) == 3)
    {

        carCount++;
        commaCleanup(carNo);
        commaCleanup(milesDriven);
        commaCleanup(gallonsUsed);

        mpg = atof(milesDriven) / atof(gallonsUsed);
        averageGallonTotal += mpg;

        drivenTotal += atof(milesDriven);
        gallonsTotal += atof(gallonsUsed);

        printf(" %-7s  %-13s  %-13s  %.3f\n", carNo, milesDriven, gallonsUsed, mpg);
    }
    printf("--------|--------------|--------------|-------\n");
    printf("Total:    %-14.3f %-14.3f %5.3f\n", drivenTotal, gallonsTotal, averageGallonTotal/carCount);
}


void commaCleanup(char str[])
{
    int i = 0, length = strlen(str), commaOffset = 0;

    while(i < length)
    {
        if(str[i] == ',')
        {
            commaOffset++;
        }

        str[i] = str[i + commaOffset];
        i++;
    }
}