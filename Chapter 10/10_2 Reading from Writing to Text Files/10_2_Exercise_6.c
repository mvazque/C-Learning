/**
 * Create a file containing the following names, Social Security numbers, hourly rate, and hours
 * worked
 * 
 * B.Caldwell 555-98-4182 7.32 37
 * D.Memcheck 555-53-2147 8.32 40
 * R.Potter 555-32-9826 6.54 40
 * W.Rosen 555-09-4263 9.80 35
 * 
 * Write a C program that reads the data file created and computes and displays a payroll schedule.
 * The output should list the Social Security number, name and gross pay for each individual
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define NUMELEM 20
    FILE *readFile = fopen("exercise6.dat", "r");

    if(readFile == NULL)
    {
        printf("File not found.\n");
        exit(1);
    }

    char name[NUMELEM], socialSecurity[NUMELEM];
    float hourlyRate, hoursWorked;

    while(fscanf(readFile, "%s %s %f %f", name, socialSecurity, &hourlyRate, &hoursWorked) == 4)
    {
        printf("%s, %-10s, %f\n", socialSecurity, name, hourlyRate * hoursWorked);
    }
}