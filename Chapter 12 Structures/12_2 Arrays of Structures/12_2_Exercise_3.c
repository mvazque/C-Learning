/**
 * Declare a single structure type suitable for an employee record consisting of an integer 
 * identification number, a last name (consisting of a maximum of 20 characters), a floating-point
 * pay rate, and a floating-point number of hours
 * 
 * Using the structure type declared, write a C program that interactively accepts the following
 * data into an array of six structures
 * 
 * ID Num   Name        Pay Rate    Hours Worked
 * 3462     Jones       4.62        40.0
 * 6793     Robbins     5.83        38.5
 * 6985     Smith       5.22        45.5
 * 7834     Swain       6.89        40.0
 * 8867     Timmins     6.43        35.5
 * 9002     Williams    4.75        42.0
 * 
 * Once the data has been entered, the program should create a payroll report listing each
 * employee's name, number and gross pay. Include the total gross pay of all employees at the end
 * of the report
 * 
 * 
 * 3462 Jones 4.62 40.0
 * 6793 Robbins 5.83 38.5
 * 6985 Smith 5.22 45.5
 * 7834 Swain 6.89 40.0
 * 8867 Timmins 6.43 35.5
 * 9002 Williams 4.75 42.0
*/


#include <stdio.h>

struct Employee
{
    int identification;
    char lastName[20];
    float payRate;
    float hoursWorked;
};


int main()
{
    #define NUMELEMS 6
    struct Employee employees[NUMELEMS];
    int i = 0;

    do
    {
        printf("\nPlease provide an employee record. The form at should be\n");
        printf("ID_Number Name Pay_Rate Hours_Worked:\n");
        scanf("%d %s %f %f", &employees[i].identification, employees[i].lastName, &employees[i].payRate, &employees[i].hoursWorked);
        i++;
    } while (i < NUMELEMS);
    
    printf("Name       ID_Number   Gross_Pay\n");
    printf("--------------------------------\n");

    float runningTotal = 0;
    float grossPay;
    for(i = 0; i < NUMELEMS; i++)
    {
        grossPay = employees[i].payRate * employees[i].hoursWorked;
        runningTotal += grossPay;
        printf("%-10s %-11d $%6.2f\n", employees[i].lastName, employees[i].identification, grossPay);
    }

    printf("Total Gross Pay:      $%7.2f\n", runningTotal);
}
