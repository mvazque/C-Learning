/**
 * An extremely useful programming algorithm for rounding a real number to n decimal places is
 * 
 * Multiply the number by 10^n
 * Add 0.5
 * Delete the fractional part of the result 
 * Divide by 10^n
 * 
 * For example using the algorithm to round 78.374625 to three decimal places yields 
 * 
 * 1. 78.374625 * 10 ^ 3 = 78374.625
 * 2. 78374.625 + 0.5 = 78375.125
 * 3. Remaining integer part = 78375
 * 4. 78375 divided by 10^3 = 78.375
 * 
 * Use the information to write a C function named round() that rounds the value of its first 
 * parameter to the number of decimal places specified by the second parameter
 * 
 * Incorporate the function into a program tha accepts a user-entered amount of money, multiplies the
 * entered amount by an 8.675 percent interest rate and displays the result rounded to two decimal 
 * places. Enter, compile, and execute the result for the following test amounts
 * 1000, 100, 10 and 0
 * 
 * 1000      $86.75
 * 100       $8.68
 * 10        $0.87
 * 0         $0.00
*/

#include <stdio.h>
#include <math.h>

int main()
{
    #define INTERESTRATE 8.675 / 100.000
    #define NUMOFPLACES 2
    float roundCustom(float, int);

    float amount;

    printf("Please provide the amount of money: ");
    scanf("%f", &amount);

    printf("The interest amount is $%.2f.\n", roundCustom(amount * INTERESTRATE, NUMOFPLACES) );
    
    return 0;
}

float roundCustom(float number, int places)
{
    #define TEN
    #define ROUNDINGOFFSET 0.5
    int tempInt;

    number *= pow(10, places);
    number += ROUNDINGOFFSET;
    tempInt = (int) number;

    return tempInt / pow(10, places);

}