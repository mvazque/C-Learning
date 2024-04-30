/**
 * Write a C program to convert Celsius to Fahrenheit. The program should request the starting
 * Celsius value, the number of conversions to be made, and the increment between Celsius
 * values. The display should have appropriate headings and list the Celsius value and the
 * corresponding Fahrenheit value. Use the relationship
 * 
 * Fahrenheit = (9.0 / 5.0) * Celsius + 32.0
 * 
 * 
 * Run the program and verify it begins at the correct starting Celsius value and contains the 
 * exact number of conversions specified in your input data
*/

#include <stdio.h>

int main(void)
{
    int numOfConversions, count;
    float cDegrees, cIncrements;

    printf("Please provide the number of conversions you would like to see: ");
    scanf("%d", &numOfConversions);

    printf("Please provide the initial temperature in Celsius: ");
    scanf("%f", &cDegrees);

    printf("Please provide the desired increments of Celsius between conversions: ");
    scanf("%f", &cIncrements);


    printf("\n\nDegrees    Degrees\n");
    printf("CELSIUS    FAHRENHEIT\n");
    printf("-------    ----------\n");

    count = 0;
    while(count < numOfConversions)
    {
        printf("%6.2f%11.2f\n", cDegrees, (9.0 / 5.0) * cDegrees + 32.0);
        cDegrees += cIncrements;
        count++;
    }

    return 0;
}