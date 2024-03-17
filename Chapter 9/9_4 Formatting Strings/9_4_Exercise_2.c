/**
 * Modify the program from the previous exercise to display the input string using the format
 * "%6.2f %6.2f %6.2f"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void separate(char[], float*, float*, float*);
    #define MAXELEM 20
    char input[MAXELEM];
    char updatedInput[MAXELEM * 3];
    float num1, num2, num3;
    printf("Please provide three floating point numbers in one line: \n");
    fgets(input, MAXELEM, stdin);

    separate(input, &num1, &num2, &num3);

    sprintf(updatedInput, "%6.2f %6.2f %6.2f", num1, num2, num3);
    printf("The provided numbers are: \n");
    printf("%s\n", updatedInput);
}

void separate(char str[], float *num1, float *num2, float *num3)
{
    float temp1, temp2, temp3;
    sscanf(str, "%f %f %f", &temp1, &temp2, &temp3);
    *num1 = temp1;
    *num2 = temp2;
    *num3 = temp3;
}