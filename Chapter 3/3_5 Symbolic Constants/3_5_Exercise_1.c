/**
 * Determine the purpose of the program below. Then rewrite it using #define statements
 * for appropriate literals
 * 
 * #include <stdio.h>
 * int main(void)
 * {
 *  float radius, circum;
 *  printf("\nEnter a radius: ");
 *  scanf("%f", &radius);
 *  circum = 2.0 * 3.1416 * radius;
 *  printf("\nThe circumference of the circle is %f", circum);
 * 
 *  return 0;
 * }
 * 
*/

#include <stdio.h>
#define CIRCUM_CONSTANTS 2.0 * 3.1416

int main(void)
{
    float radius, circum;

    printf("\nEnter a radius: ");
    scanf("%f", &radius);
    printf("%f", CIRCUM_CONSTANTS);
    circum = CIRCUM_CONSTANTS * radius;
    printf("\nThe circumference of the circle is %f.\n", circum);

    return 0;
}