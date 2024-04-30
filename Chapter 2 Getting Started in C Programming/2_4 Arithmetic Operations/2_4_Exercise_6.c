#include <stdio.h>
#include <limits.h> /* Contains the minimum and maximum specifications for an int data type*/

int main(void)
{
    printf("The smallest integer value that can be stored is %d\n", INT_MIN);
    printf("The largest integer value that can be stored is %d\n", INT_MAX);

    return 0;
}