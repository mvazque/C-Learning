/**
 * Write a C program to compute and display a person's weekly salary as determined by
 * the following specification
 * 
 * If the hours worked are less than or equal to 40, the person receives $8.00 per hour; else the
 * person receives $320.00 plus $12.00 for each hour over 40 hours
 * 
 * The program should request the hours worked as input and should display the salary as output
 * 
 * How many runs should you make for the program written to verify that it is operating correctly?
 * What data should you input in each of the program runs?
*/

#include <stdio.h>

int main(void)
{
    int hoursWorked;

    printf("Please enter the amount of hours worked: ");
    scanf("%d", &hoursWorked);

    float salary;
    if(hoursWorked < 40)
        salary = hoursWorked * 8.00;
    else
        salary = 320.00 + (hoursWorked - 40) * 12.00;
    
    printf("The expected salary is %.2f.\n", salary);

    return 0;
}