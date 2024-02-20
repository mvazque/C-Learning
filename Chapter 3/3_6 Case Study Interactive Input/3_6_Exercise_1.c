/**
 * Enter and exeute program 3.19 to get the amount of paint needed for an 8 foot display
*/

#include <stdio.h>
#include <math.h>
#define SQFTPERQUART 200.0
#define PI 3.1316

int main()
{
    float width, outerRadius, innerRadius;
    float totalArea, innerArea, outerRimArea;
    float blue, red;

    /* get the input data */
    printf("Enter the width of the display (in feet): ");
    scanf("%f", &width);

    /* determine the two radii */
    outerRadius = width / 2.0;
    innerRadius = 0.25 * outerRadius;

    /* determine the two areas */
    totalArea = PI * pow(outerRadius, 2);
    innerArea = PI * pow(innerRadius, 2);
    outerRimArea = totalArea - innerArea;

    /* determine the gallons of paint needed */
    red = innerArea / SQFTPERQUART;
    blue = outerRimArea / SQFTPERQUART;

    /* provide the required outputs */
    printf("\nThe inner areas is %5.2f sq. feet", innerArea);
    printf("\nThe outer area is %5.2f sq feet", outerRimArea);
    printf("\n\nRed paint required is %6.3f quarts", red);
    printf("\nBlue paint required is %6.3f quarts\n", blue);

    return 0;
}


/**
 * The inner areas is  3.13 sq. feet
 * The outer area is 46.97 sq feet
 * 
 * Red paint required is  0.016 quarts
 * Blue paint required is  0.235 quarts
 * 
 * The answers are off by a bit but unsure of how to fix it due to being float shenanigans
*/