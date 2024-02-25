/**
 * Write a function named conversions() that displays a table of miles converted to kilometers.
 * The function should accept the initial mile value to be converted, the number of conversions
 * to be made, and the increment between each mile value. For each conversion the function should
 * call a function named milesToKm() that accepts a mile value and returns its equivalent kilometer
 * value. In computing the conversion use the relationship that there are 1.6093 kilometers per mile.
 * 
 * Include the function in the exercise in a working C program. Make sure that conversions() is
 * called fom main() and that it correctly calls milesToKM() as needed
*/

#include <stdio.h>

int main()
{
    void conversion(float, int, float);

    float initMiles, increment;
    int numOfConversions;

    printf("Please provide the initial Miles value for the table: ");
    scanf("%f", &initMiles);

    printf("Please provide the amount of conversions for the table: ");
    scanf("%d", &numOfConversions);

    printf("Please provide the increment amount between conversions: ");
    scanf("%f", &increment);

    conversion(initMiles, numOfConversions, increment);
}

void conversion(float initMiles, int numOfConversions, float increment)
{
    float milesToKm(float);
    float miles = initMiles;

    printf("  Miles      Kilometers\n");
    printf("---------   -----------\n");

    for(int i = 0; i < numOfConversions; i++)
    {
        printf("%9.5f %13.5f\n", miles, milesToKm(miles));
        miles += increment;
    }

    
    milesToKm(initMiles);
}

float milesToKm(float miles)
{
    #define KILOMETERSPERMILES 1.6093
    return miles * KILOMETERSPERMILES;
}