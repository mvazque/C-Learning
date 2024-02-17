#include <stdio.h>

int main(void)
{
    float radius = 2.57;
    float pi = 3.1416;
    float circumference = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("The area of a circle of radius %f in is %f.", radius, area);
    
    return 0;
}