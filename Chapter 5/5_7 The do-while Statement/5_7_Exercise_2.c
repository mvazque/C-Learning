/**
 * Write a C program that continuously requests a grade to be entered. If the grade is less than
 * 0 or greater than 100, your program should print an appropriate message informing the user that
 * an invalid grade has been entered, else the grade should be added to a total. When a grade of 
 * 999 is entered, the program should exit the repetition loop and compute and
 * display the average of the valid grades entered
*/

#include <stdio.h>

int main(void)
{
    #define TRUE 1
    float gradeSum = 0, grade, gradeCount = 0;

    do
    {
        printf("Please provide a grade value: ");
        scanf("%f", &grade);

        if(grade > 100 || grade < 0)
        {
            if(grade == 999){
                printf("Exit code detected. Program will end now.\n");
                break;
            }
            printf("Invalid grade value. Range is 0 - 100.\n");
        }
        else
        {
            gradeSum += grade;
            gradeCount++;
        }
    } while (TRUE);

    printf("The average of all the grades is %.2f.\n", gradeSum/gradeCount);

    return 0;
    
}