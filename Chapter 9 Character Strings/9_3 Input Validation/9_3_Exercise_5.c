/**
 * Store the functions isvalidInt() and getanInt() provided in this section in a header file named
 * dataChecks.h. Next rewrite Program 9.9 to use this header file.
*/

#include <stdio.h>
#include <stdlib.h>
#include "dataChecks.h"

// int getanInt();

int main()
{
    int value;
    printf("Enter an integer value: ");
    value = getanInt();
    printf("The integer entered is: %d\n", value);

    return 0;
}