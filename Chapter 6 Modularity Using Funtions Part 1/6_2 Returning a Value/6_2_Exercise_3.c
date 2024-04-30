/**
 * Rewrite the function tempConvert() in Program 6.5 to accept a temperature and a character 
 * as arguments. If the character passed to the function is the letter f, the function should
 * convert the passed temperature from Fahrenheit to Celsius, else the function should convert
 * the passed temperature from Celsius to Fahrenheit
 * 
 * Modify the main() function in Program 6.5 to call the function written for Exercise 3.
 * Your main() function should ask the user for a temperature value and the type of temperature
 * being entered (f or c)
*/

#include <stdio.h>

int main()
{
    float tempConvert(float, char);

    float temp;
    char degrees;

    printf("Please provide a temperature and the degrees it is in (c or f): ");
    scanf("%f %c", &temp, &degrees);

    printf("%.3f converted is %.3f.\n", temp, tempConvert(temp, degrees));

    return 0;
}

float tempConvert(float temp, char degrees)
{
    if('f' == degrees)
        return (5.0/9.0) * (temp - 32.0);
    else
        return (9.0/5.0) * temp + 32.0;

}