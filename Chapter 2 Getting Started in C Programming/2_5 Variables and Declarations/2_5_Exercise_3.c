#include <stdio.h>

int main(void)
{
    float width = 3.5;
    float length = 5.48;
    float area = width * length;
    float perimeter = 2 * ( length + width );

    printf("The area of a rectangle with width %f and length %f is %f.\n", width, length, area);
    printf("The perimeter of a rectangle with width %f and length %f is %f.\n", width, length, perimeter);
}