/**
 * Replace the calc() function used in Program 7.8 with two functions named computeSum()
 * and computeProduct(). The computeSum() function should calculate and directly return the sum of
 * three values passed to it, while the computeProduct() function should calculate and directly 
 * return the product of three values passed to it
*/

#include <stdio.h>

int main()
{
    void computeSum(float, float, float, float *);
    void computeProduct(float, float, float, float *);

    float firstNum, secNum, thirdNum, sum, product;

    printf("Please provide the three numbers to interact with: ");
    scanf("%f %f %f", &firstNum, &secNum, &thirdNum);

    computeSum(firstNum, secNum, thirdNum, &sum);
    computeProduct(firstNum, secNum, thirdNum, &product);

    printf("\nThe sum of the entered numbers is: %6.2f", sum);
    printf("\nThe product of the entered numbers is: %6.2f\n", product);

    return 0;
}

/**
 * Computes the sum of the numbers passed and stores it using a pointer.
 * 
 * @input num1: First number to add
 * @input num2: Second number to add
 * @input num3: Third number to add
*/
void computeSum(float num1, float num2, float num3, float *sumAddr)
{
    *sumAddr = num1 + num2 + num3;
}

/**
 * Computes the product of the numbers passed and stores it using a pointer.
 * 
 * @input num1: First number to multiply
 * @input num2: Second number to multiply
 * @input num3: Third number to multiply
*/
void computeProduct(float num1, float num2, float num3, float *productAddr)
{
    *productAddr = num1 * num2 * num3;
}