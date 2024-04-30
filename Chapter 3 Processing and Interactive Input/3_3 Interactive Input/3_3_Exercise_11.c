/**
 * Write a C program that uses the declaration statement double num;. Then use the 
 * function call scanf("%f", &num); to input a value into num. (Notice that we have 
 * used the wrong control sequence for the variable num). Run your program and enter a
 * decimal number. Using a printf() function call, have your program display the number 
 * stored in num. Determine what problem you can run into when an incorrect control 
 * sequence is used in scanf(),
 * 
 * Input        Output
 * 13.2412      0.000000
 * 421          0.000000
 * 2214.1231    0.000000
 * 
 * 
 * It seems num does not contain any of the values that we are providing. It seems this is the
 * problem with incorrect control sequences as the conversion might be wrong or data may be lost.
*/

#include <stdio.h>

int main(void)
{
    double num;

    scanf("%f", &num);

    printf("The number provided is %lf.\n",num);
}