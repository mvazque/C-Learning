/**
 * Determine the display produced by the following section of code:
 * union
 * {
 *  char ch;
 *  double btype;
 * } alt;
 * 
 * alt.ch = 'y';
 * printf("%f", alt.btype);
 * 
 * The value is unpredictable and unknow. The data in alt is currently a char but reading it as a
 * double can produce a different value.
 * 
 * Include the code presented in Exercise 1a in a program and run the program your answer to
 * Exercise 1a.
 * 
 * Value received was 0.00000
 * 
 * 
 * Answer from book
 * Since a value has not been assigned to alt.btype, the display produced is unpredictable(the code
 * for 'y' resides in the storage locations overlapped by the variables alt.ch and alt.btype).
 * Thus, either a garbage value will be displayed or the program could even crash
*/

#include <stdio.h>

int main()
{
    union
    {
        char ch;
        double btype;
    } alt;

    alt.ch = 'y';
    printf("%f\n", alt.btype);
}