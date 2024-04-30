/**
 * Determine the purpose of the program below. Then rewrite it using #define statements
 * for appropriate literals
 * 
 * #include <stdio.h>
 * int main()
 * {
 *  float fahren, celsius;
 * 
 *  printf("\nEnter a temperature in degrees Fahrenheit: ");
 *  scanf("%f", &fahren);
 *  celsius = (5.0/9.0) * (fahren - 32.0);
 * 
 *  printf("\nThe equivalent Celsius temperature is %f", celsius);
 * 
 *  return 0;
 * }
*/

#include <stdio.h>
#define CONVERSION_FRACTION 5.0 / 9.0
#define CONVERSION_SUBTRACTION 32.0
int main()
{
    float fahren, celsius;

    printf("\nEnter a temperature in degrees Fahrenheit: ");
    scanf("%f", &fahren);
    celsius = CONVERSION_FRACTION * (fahren - CONVERSION_SUBTRACTION);

    printf("\nThe equivalent Celsius temperature is %f\n", celsius);

    return 0;
}