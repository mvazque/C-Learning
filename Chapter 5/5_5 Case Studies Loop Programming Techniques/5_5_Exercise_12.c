/**
 * Modify Program 5.16 to accept the starting and increment values of the table produced
 * by the program
*/

#include <stdio.h>

int main()
{
    int final, start;
    float num, increment;

    printf("Enter the starting number for the table: ");
    scanf("%d", &start);

    printf("Enter the final number for the table: ");
    scanf("%d", &final);

    printf("Enter the increment between numbers for the table: ");
    scanf("%f", &increment);

    printf("Number  Square   Cube\n");
    printf("------  ------ -------\n");

    for(num = start; num <= final; num += increment)
        printf("%5.2f %7.2f  %7.2f\n", num, num * num, num * num * num);

    return 0;
}