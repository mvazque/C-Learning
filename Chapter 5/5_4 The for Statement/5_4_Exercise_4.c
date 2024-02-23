/**
 * Write and run a C program that accepts six Fahrenheit temperatures, one at a time , and converts
 * each value entered to its Celsius equivalent before the next value is requested. Use a for loop
 * in your program. The conversion required is Celsius = (5.0/9.0) * (Fahrenheit - 32.0)
*/

#include <stdio.h>
#define MAXCOUNT 6

int main(void)
{
    float fahrenheit, celsius;

    printf("Degrees Degrees\n");
    printf("FAHRENHEIT CELSIUS \n");
    printf("---------- -------\n");

    for(int i = 0; i < MAXCOUNT; i++)
    {
        printf("Please provide the degrees in fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%5.2f%11.2f\n",fahrenheit, celsius );
    }

    return 0;
}
