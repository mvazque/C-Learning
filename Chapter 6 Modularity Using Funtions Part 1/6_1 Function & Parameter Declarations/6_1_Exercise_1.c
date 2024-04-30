/**
 * Write a function named check() that has three arguments. The first argument should accept
 * an integer number, the second argument a floating point number, and the third argument a 
 * double precision number. The body of the function should just display the values of the data
 * passed to the function when it is called. 
 * 
 * When tracing errors in functions, it is very helpful to have the function display the values
 * that have been passed into it. Quite frequently, the error is not in what the body of the 
 * function does with the data, but in the data received and stored.)
 * 
 * Include the function written in the exercise in a working program. Make sure your
 * function is called from main. Test the function by passing various data to it.
 * 
 * check(int num1, float num2, double num3)
*/

#include <stdio.h>

int main()
{
    void check(int, float, double); /* function prototype */

    check(110, 21.25, 3.1234000700);

    return 0;
}

void check(int num1, float num2, double num3)
{
    printf("Integer %d, float %f, double %lf\n", num1, num2, num3);
}

