/**
 * A useful function with an empty parameter list can be constructed to return a value for pi
 * that is accurate to the maximum number of decimal places allowed by your computer. This
 * value is obtained by taking the arcsine of 1.0 which is pi/2, and multiplying the result by
 * 2. In C the required expression is 2.0 * asin(1.0), where the asin function is provided
 * in the standard C mathematics library (make sure to include the math.h header file). Using this
 * expression, write a C function named Pi() that calculates andd displays the value of pi.
 * 
 * Include the function written for the exercise in a working C program. Make sure your function
 * is called from main() and correctly returns a value to main(). Have main() display the value 
 * returned and test the function by passing various data to it and verifying the returned
 * value.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float pi();

    printf("Values of PI: %.10f\n", pi());

    return 0;
}

float pi()
{
    return 2.0 * asin(1.0);
}