/**
 * Find the average of 32.6, 55.2, 67.9 and 49.6
*/
#include <stdio.h>

int main(void)
{
    float input1 = 32.6;
    float input2 = 55.2;
    float input3 = 67.9;
    float input4 = 49.6;

    float sum = input1 + input2 + input3 + input4;
    float average = sum / 4;

    printf("The average of the values %f, %f, %f and %f is %f.\n", input1, input2, input3, input4, average);

    return 0;
}