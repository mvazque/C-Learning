#include <stdio.h>

int main()
{
    printf("The value of %f times %f is %f\n", 3.0, 5.0, 3.0 * 5.0);
    printf("The value of %f times %f minus %f is %f\n", 7.1, 8.3, 2.2, 7.1 * 8.3 - 2.2);
    printf("The value of %f divided by the product of %f times %d is %f\n", 3.2, 6.1, 5, 3.2/(6.1 * 5));

    return 0;
}