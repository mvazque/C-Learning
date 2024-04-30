/**
 * In a pass/fail course, a student passes if the grade is greater than or equal to 70 
 * and fails if the grade is lower. Write a C program that accepts a grade and prints the message
 * A passing grade or A failing grade as appropriate.
 * 
 * How many runs should you make for hte program written to verify that it is operating correctly?
 * What data should you input in each of the runs
 * 
 * You would want at least three tests, one to test below 70, one above 70 and one at 70.
*/

#include <stdio.h>

int main(void)
{
    float studentGrade;

    printf("Please input the student's grade: ");
    scanf("%f", &studentGrade);

    if(studentGrade >= 70)
        printf("A passing grade.\n");
    else
        printf("A failing grade.\n");

    return 0;
}