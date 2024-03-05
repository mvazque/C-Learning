/**
 * Write a C program that reads a list of double precision grades from the keyboard into an array
 * named grades. The grades are to be counted as they are read, and entry is to be terminated when
 * a negative value has been entered. Once all of the grades have been input, your program should
 * find and display the sum and average of the grades. The grades should then be listed with an
 * asterisk in front of each grade that is below average.
 * 
 * Extend the program to display each grade and its letter equivalent.
 * Assume the following scale
 * 
 * A grade between 90 and 100 is an A
 * A grade greater than or equal to 80 but less than 90 is a B
 * A grade greater than or equal to 70 but less than 80 is a C
 * A grade greater than or equal to 60 but less than 70 is a D
 * A grade less than 60 is an F
*/

#include <stdio.h>

int main()
{
    void printArray(double[], int, float);
    double grades[100];
    double inputGrade = 0, runningTotal = 0.0;
    int indexCounter = 0;

    do
    {
        printf("Please provide the letter grade (up to 100 at a time): ");
        scanf("%lf", &inputGrade);
        if(inputGrade >= 0){
            grades[indexCounter] = inputGrade;
            runningTotal += inputGrade;
            indexCounter++;
        }

    } while (inputGrade >= 0 && indexCounter < 100);


    
    printArray(grades, indexCounter, runningTotal/indexCounter);
}

void printArray(double values[], int numel, float average)
{
    char letterGrade(float);
    printf("\n");
    float grade;
    for(int i = 0; i < numel; i++)
    {
        grade = values[i];
        if(grade < average)
        {
            printf(" *");
        }
        else
            printf("  ");
        printf("%5.2f", grade);
        printf(" %c\n", letterGrade(grade));
    }
        
    printf("\n");
}

char letterGrade(float grade)
{
    if(grade >= 90)
        return 'A';
    else if(grade >= 80)
        return 'B';
    else if(grade >= 70)
        return 'C';
    else if(grade >= 60)
        return 'D';
    else
        return 'F';
}