/**
 * The owner of a strawberry farm has made the following arrangement with a group of students.
 * They may pick all the strawberries they want. When they are through picking, the strawberries 
 * will be weighed. The farm will retain 50% of the strawberries and the students will divide the 
 * remainder evenly among them. Using this information, write and test a C function named straw()
 * that accepts the number of students and the total pounds picked as input arguments, and returns
 * the approximate number of strawberries each receives. Assume that a strawberry weighs 
 * approximately  1 ounce. There are 16 ounces to a pound. Include straw() in a working C program.
 * 
*/

#include <stdio.h>

int main()
{
    float straw(int, float);

    int numStudents;
    float poundsOfStrawberries;

    printf("Please provide the number of students: ");
    scanf("%d", &numStudents);

    printf("Please provide the pounds of strawberries: ");
    scanf("%f", &poundsOfStrawberries);

    printf("Each student will receive %f strawberries.\n", straw(numStudents, poundsOfStrawberries));

    return 0;
}


float straw(int numStudents, float pounds)
{
    #define STRAWBERRIESPERPOUND 16
    pounds /= 2;

    return (pounds * STRAWBERRIESPERPOUND) / numStudents;
}