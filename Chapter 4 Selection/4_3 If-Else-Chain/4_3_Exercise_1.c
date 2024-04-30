/**
 * A students letter grade is calculated according to the following schedule. Write a C program
 * that accepts a student's numerical grade, converts the numerical grade to an equivalent
 * letter grade, and displays the letter grade
 * 
 * >= 90 A
 * 80 <= x < 90 B
 * 70 <= x < 80 C
 * 60 <= x < 70 D
 * x < 60 F
*/

#include <stdio.h>

int main(void)
{
    float numGrade;

    printf("Please enter the numerical grade: ");
    scanf("%f", &numGrade);

    char letterGrade;
    if(numGrade >= 90)
        letterGrade = 'A';
    else if(numGrade >= 80)
        letterGrade = 'B';
    else if(numGrade >= 70)
        letterGrade = 'C';
    else if(numGrade >= 60)
        letterGrade = 'D';
    else if(numGrade < 60)
        letterGrade = 'F';
    
    printf("The letter grade is %c.\n", letterGrade);

    return 0;
}