/**
 * Create a file containing the following data:
 * 
 * Name Rate Hours
 * Callaway, G. 6.00 40
 * Hanson, P. 5.00 48
 * Lasard, D. 6.50 35
 * Stillman, W 8.00 50
 * 
 * Write a C program that uses the information contained in the file created to produce the 
 * following pay report for each employee
 * 
 * Name     Rate    Hours    Regular Pay     Overtime Pay    Gross Pay
 * 
 * Any hours worked above 40 hours are paid at time and a half. Additionally, the program should
 * display the totals of the regular, overtime, and gross pay columns.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    #define NUMELEM 80

    char fileName[] = "exercise9.dat";

    FILE *readFile = fopen(fileName, "r");

    if(readFile == NULL)
    {
        printf("File %s was not found.\n", fileName);
        exit(1);
    }

    char title1[NUMELEM], title2[NUMELEM], title3[NUMELEM];
    fscanf(readFile, "%s %s %s", title1, title2, title3);

    char title4[] = "Regular Pay";
    char title5[] = "Overtime Pay";
    char title6[] = "Gross Pay";

    printf("%-13s | %-5s | %s | %s | %s | %s\n", title1, title2, title3, title4, title5, title6);
    printf("--------------|-------|-------|-------------|--------------|------------\n");

    char lastName[NUMELEM], firstName[NUMELEM];
    float rate, hours;

    while(fscanf(readFile, "%s %s %f %f", lastName, firstName, &rate, &hours) == 4)
    {
        #define NORMALHOURS 40

        strcat(lastName, " ");
        strcat(lastName, firstName);
        float regularPay = 0, overtimePay = 0;
        if(hours > NORMALHOURS)
        {
            regularPay = NORMALHOURS * rate;
            overtimePay = (hours - NORMALHOURS) * (rate * 1.5); 
        }
        else
        {
            regularPay = hours * rate;
        }

        printf("%-15s $%-6.2f %-7.2f $%-12.2f $%-13.2f $%.2f\n", lastName, rate, hours, regularPay, overtimePay, regularPay + overtimePay);
    }



}
