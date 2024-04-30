/**
 * Write a C program that displays the results of the expression 
 * 3.0 * 5.0, 
 * 7.1 * 8.3 - 2.2,
 * 3.2 / (6.1 * 5). Calculate the value of these expressions manually to verify that the
 * displayed values are correct
*/

#include <stdio.h>

int main(void)
{
    float value1 = 3.0 * 5.0;
    float value2 = 7.1 * 8.3 - 2.2;
    float value3 = 3.2 / (6.1 * 5);

    printf("The result of 3.0 * 5.0 is %.0f\n", value1);
    printf("The result of 7.1 * 8.3 - 2.2 is %.2f\n", value2);
    printf("The result of 3.2 / (6.1 * 5) is %f\n", value3);

    return 0;
}