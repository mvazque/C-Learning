#include <stdio.h>

int main(void)
{
    int num1 = 15;
    int num2 = 18;
    int total = num1 + num2;
    float average = total/2.0;

    printf("The sum of the numbers %d and %d is %d\n", num1, num2, total);
    printf("The average of the two numbers %d and %d is %f\n", num1, num2, average);

    return 0;
}