/**
 * Write a C program that accepts three user-entered numbers as one string. Once the string has 
 * been accepted, have the program pass the string and the addresses of three single-precision
 * variables to a function called separate(). The separate() function should extract the three 
 * floating-point alues from the passed string and store them using the passed variable addresses.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void separate(char[], float*, float*, float*);
    #define MAXELEM 20
    char input[MAXELEM];
    float num1, num2, num3;
    printf("Please provide three floating point numbers in one line: \n");
    fgets(input, MAXELEM, stdin);

    separate(input, &num1, &num2, &num3);

    printf("The provided numbers are: \n");
    printf("%f\n", num1);
    printf("%f\n", num2);
    printf("%f\n", num3);
}

void separate(char str[], float *num1, float *num2, float *num3)
{
    float temp1, temp2, temp3;
    sscanf(str, "%f %f %f", &temp1, &temp2, &temp3);
    *num1 = temp1;
    *num2 = temp2;
    *num3 = temp3;
}