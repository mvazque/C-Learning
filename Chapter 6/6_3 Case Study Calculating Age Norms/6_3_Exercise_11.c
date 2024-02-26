/**
 * The determinant of a 2 by 2 matrix is
 * | a11 a12 |
 * | a21 a22 |
 * Is given by the formula a11*a22 - a21 * a12
 * 
 * Similarly the determinant of a 3 by 3 matrix
 * 
 * | a11 a12 a13 |
 * | a21 a22 a23 |
 * | a31 a32 a33 |
 * 
 * a11 * | a22 a23 | - a21 * | a12 a13 | + a31 | a12 a13 |
 *       | a32 a33 |         | a32 a33 |       | a22 a23 |
 * 
 * Using this information write and test two functions named det2 and det3. The det2 function should
 * accept the four coefficients of a 2 by 2 matrix and return its determinant.The det3 function should
 * accept the nine coefficients of a 3-by-3 matrix and return its determinant by calling det2
 * to calculate the required 2 by 2 determinants
 * 
*/

#include <stdio.h>

int main()
{
    float det2(float, float, float, float);
    float det3(float, float, float, float, float, float, float, float, float);

    float num1, num2, num3, num4, num5, num6, num7, num8, num9;

    printf("Please provide the nine coefficients of a 3 by 3 matrix: ");
    scanf("%f%f%f%f%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9);

    printf("The determinant of the above array is %f.\n", det3(num1, num2, num3, num4, num5, num6, num7, num8, num9));

    return 0;
}

float det2(float num1, float num2, float num3, float num4)
{
    printf("Determinant %f\n", num1 * num4 - num2 * num3);
    return num1 * num4 - num2 * num3;
}

float det3(float num1, float num2, float num3, float num4, float num5, float num6, float num7, float num8, float num9)
{
    return num1 * det2(num5, num6, num8, num9) - num2 * det2(num4, num6, num7, num9) + num3 * det2(num4, num5, num7, num8);
}