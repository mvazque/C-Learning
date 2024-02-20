/**
 * Write a c program that displays the results of the expresion
 * 15 / 4
 * 15 % 4
 * 5 * 3 - (6 * 4)
 * Calculate the value of these expressions manually to verify that the
 * displayed values are correct
*/

#include <stdio.h>

int main(void)
{
    float value1 = 15 / 4; /* This returns 3 when it should be 3.75. The program treats them as ints. Should be written as 15.0 and 4.0 instead*/
    float value2 = 15 % 4;
    float value3 = 5 * 3 - (6 * 4);

    printf("The result of 15 / 4 is %.0f\n", value1);
    printf("The result of 15 %% 4 is %.0f\n", value2);
    printf("The result of 5 * 3 - (6 * 4) is %.0f\n", value3);

    return 0;
}