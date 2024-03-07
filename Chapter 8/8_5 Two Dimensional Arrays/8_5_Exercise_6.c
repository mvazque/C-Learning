/**
 * A professor has constructed a two-dimensional array of double precision numbers having 35
 * rows and 4 columns. This array currently contains the numerical grades of the students in
 * the professor's four classes. Write a C program that determines the total number of grades
 * in the ranges
 * 
 * x < 60
 * 60 >= x < 70
 * 70 >= x < 80
 * 80 >= x < 90
 * x > 90
 * 
 * How might the function be modified to include the case where no grade is present? That is, what
 * grade should be used to indicate an invalid grade and how does you function have to be modified to
 * exclude counting such a grade?
 * We would need a cap or a floor, that is to say either no score above 100 or no score below 0. The
 * if condition will need to be modified based on which of this routes is take.
*/

#include <stdio.h>
#define ROWS 35
#define COLS 4

int main()
{
    void gradeCounter(double[ROWS][COLS]);
    double data[ROWS][COLS] = {
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {95.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9},
        {15.2, 67.1, 77.5, 89.9}
    };

    gradeCounter(data);

    return 0;
}

void gradeCounter(double grades[ROWS][COLS])
{
    #define AINDEX 0
    #define BINDEX 1
    #define CINDEX 2
    #define DINDEX 3
    #define FINDEX 4

    int gradeCounts[5] = {0, 0, 0, 0, 0};
    double score;

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            score = grades[i][j];
            if(score >= 90)
                gradeCounts[AINDEX]++;
            else if(score >= 80)
                gradeCounts[BINDEX]++;
            else if(score >= 70)
                gradeCounts[CINDEX]++;
            else if(score >= 60)
                gradeCounts[DINDEX]++;
            else
                gradeCounts[FINDEX]++;

        }
    }

    printf("The grade count is as follows: \n");
    printf("x >= 90:      %3d\n", gradeCounts[AINDEX]);
    printf("80 >= x < 90: %3d\n", gradeCounts[BINDEX]);
    printf("70 >= x < 80: %3d\n", gradeCounts[CINDEX]);
    printf("60 >= x < 70: %3d\n", gradeCounts[DINDEX]);
    printf("x < 60:       %3d\n", gradeCounts[FINDEX]);

    return;
}