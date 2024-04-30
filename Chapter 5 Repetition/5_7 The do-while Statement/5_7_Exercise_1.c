/**
 * Using a do-while statement, write a C program to accept a grade. The program should request
 * a grade continuously as long as an invalid grade is entered. An invalid grade is any grade
 * less than 0 or greater than 100. After a valid grade has been entered your program should
 * display its value.
 * 
 * Modify the program so that the user is alerted when an invalid grade has been entered 
 * 
 * Modify the program so that it allows the user to exit the program by entering the number 999
 * 
 * Modify the program written so that it automatically terminates after five invalid grades
 * are entered
*/

#include <stdio.h>

int main(void)
{
    #define TRUE 1

    float grade;
    int invalidCount = 1;
    do
    {
        printf("Please provide a grade value: ");
        scanf("%f", &grade);

        if(grade > 100 || grade < 0)
        {
            if(grade == 999){
                printf("Exit code detected. Program will end now.\n");
                break;
            } else if(invalidCount == 5){
                printf("Too many invalid attempts. Program will end now.\n");
                break;
            }
            printf("Invalid grade value. Range is 0 - 100.\n");
            invalidCount++;
        }
        else
        {
            printf("The valid grade provided is %.0f.\n", grade);
            break;
        }
            
    } while (TRUE);
    
    return 0;
}