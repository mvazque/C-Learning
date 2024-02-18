/*
    Enter, compile and execute Program 2.10 on your computer 
    to determine the range of values provided by your compiler 
    for each of C's signed integer types.
*/
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("The smallest character code that can be stored is %d\n", SCHAR_MIN);
    printf("The largest character code that can be stored is %d\n", SCHAR_MAX);
    printf("The smallest integer value that can be stored is %d\n", INT_MIN);
    printf("The largest integer value that can be stored is %d\n", INT_MAX);
    printf("The smallest short integer value that can be stored is %ld\n", SHRT_MIN);
    printf("The largest short integer value that can be stored is %ld\n", SHRT_MAX);
    printf("The smallest long integer value that can be stored is %ld\n", LONG_MIN);
    printf("The largest long integer value that can be stored is %ld\n", LONG_MAX);

    return 0;
}