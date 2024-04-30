/**
 * A senior salesperson is paid $800 a week and a junior salesperson $375 a week. Write
 * a C program that accepts as input a salesperson's status in the character variable
 * status. If status equals 's'. the senior peron's salary should be displayed, else
 * the junior person's salary should be output
 * 
 * How many runs should you make for the program written to verify that it is operating correctly?
 * What data should you input in each of the program runs?
 * 
 * Without input validation you would only need to test twice. Once for checkin what happens
 * when inputting 's' and once to see what happens when it is another character.
*/

#include <stdio.h>

int main(void)
{
    char status;

    printf("What is your sales status? (s for senior): ");
    scanf("%c", &status);

    float salary = 375.00;

    if('s' == status)
        salary = 800.00;

    printf("The expected salary for your status is %.2f.\n", salary);

    return 0;
}