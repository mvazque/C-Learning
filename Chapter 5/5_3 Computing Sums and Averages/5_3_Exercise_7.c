/**
 * Modify program 5.8 to compute the average of the grades entered
*/

#include <stdio.h>

int main()
{
    #define CUTOFF -1
    float grade = 0.01;
    float total = 0.0;
    int count = 0;

    printf("\nTo stop entering grades, type in any negative number.\n\n");

    while(grade > CUTOFF)
    {
        printf("Enter a grade: ");
        scanf("%f", &grade);
        total += grade;
        count++;
    }

    total -= grade;
    count--;
    printf("\nThe total of the grades is %f\n", total);
    printf("The average of the grades is %f.\n", total/count);

    return 0;
}