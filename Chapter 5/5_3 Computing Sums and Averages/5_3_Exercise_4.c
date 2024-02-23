/**
 * Modify the program in exercise 3 to request the starting Celsius value, the ending Celsius value
 * and the increments. Thus instead of the condition checking for a fixed count it checks for an 
 * ending Celsius value
*/

#include <stdio.h>

int main(void)
{
    float cDegrees, cIncrements, cFinal;

    printf("Please provide the initial temperature in Celsius: ");
    scanf("%f", &cDegrees);

    printf("Please provide the final temperature in Celsius: ");
    scanf("%f", &cFinal);

    printf("Please provide the desired increments of Celsius between conversions: ");
    scanf("%f", &cIncrements);


    printf("\n\nDegrees    Degrees\n");
    printf("CELSIUS    FAHRENHEIT\n");
    printf("-------    ----------\n");

    while(cDegrees <= cFinal)
    {
        printf("%6.2f%11.2f\n", cDegrees, (9.0 / 5.0) * cDegrees + 32.0);
        cDegrees += cIncrements;
    }

    return 0;
}