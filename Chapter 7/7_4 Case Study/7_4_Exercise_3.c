/**
 * Rewrite the findMax() function in Program 6.2 so that the variable max is declared in main()
 * and the maximum value of the two passed numbers is written directly to max.
 * (Hint: The address of max will also have to be passed to findMax().)
*/

#include <stdio.h>
int main()
{
    void findMax(float, float, float *); /* the function prototype */
    float firstnum, secnum, maxnum;

    printf("Enter a number: ");
    scanf("%f", &firstnum);
    printf("Great! Please enter a second number: ");
    scanf("%f", &secnum);

    findMax(firstnum, secnum, &maxnum); /* The function is called here */

    printf("\nThe maximum of the two numbers entered is %f\n", maxnum);

    return 0;
}

/* the following is the function findMax */
void findMax(float x, float y, float *maxnum) /* this is the function's header line */
{
    if (x >= y) /* find the maximum number */
        *maxnum = x;
    else
        *maxnum = y;
}