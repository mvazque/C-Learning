/**
 * The volume of a right circular cylinder is given by its radius squared times its height
 * times pi. Write a function that accepts two single-precision arguments corresponding to
 * the cylinder's radius and height, respectively, and returns the cylinder's volume.
 * 
 * Include the function in a working C program. Make sure your function is called from main()
 * cand correctly returns the value to main. Have main display the value returned and test the
 * function by passing various data to it and verifying the returned value.
 * 
 * 
 * v = r ^ 2 * h * pi
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float cylVolume(float, float);

    float radius, height;

    printf("Please provide the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Please provide the height of the cylinder: ");
    scanf("%f", &height);

    printf("The volume of a cylinder of radius %f and height %f is %f.\n", radius, height, cylVolume(radius, height));
    return 0;
}

float cylVolume(float radius, float height)
{
    return pow(radius, 2) * height * M_PI;
}