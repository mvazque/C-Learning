/**
 * Rewrite program 6.6 in Section 6.4 so that lines 14 through 20 are replaced by a function named
 * getData(). This function should request a child's age, in years and months, as integer values,
 * and the child's height as a floating-point value. It should return both the child's age in years
 * and the childs height as floating-point values through its parameter list.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float norms(float);
    float pcdif(float, float);
    void showit(float, float);
    void getData(float *, float *);

    int years, months;
    float height, normht;
    float age, perdif;

    /* this is the input section */
    getData(&age, &height);

    /* This is the calculations section */
    normht = norms(age);
    perdif = pcdif(height, normht);

    /* this is the display section */
    showit(normht, perdif);

    return 0;
}

/* the following is a stub for norms() */
float norms(float age)
{
    printf("\nInto norms()\n");
    printf("   age = %f\n", age);
    return 52.5;
}

/* the following is a stub for pcdif() */
float pcdif(float actual, float normal)
{
    printf("\nInto pcdif()\n");
    printf("   actual = %f     normal = %f\n", actual, normal);
    return 2.5;
}

/* the following is a stub for showit() */
void showit(float normht, float perdif)
{
    printf("\nInto showit()\n");
    printf("   normht = %f       perdif = %f\n", normht, perdif);
}

void getData(float *agePtr, float *heightPtr)
{   
    int years, months;
    float height;
    printf("\nHow old (in years) is this child? ");
    scanf("%d", &years);
    printf("How many months since the child's birthday? ");
    scanf("%d", &months);
    *agePtr = years + months/12.0; /* convert to total years */
    printf("Enter the child's height (in inches): ");
    scanf("%f", &height);
    *heightPtr = height;

    return;
}