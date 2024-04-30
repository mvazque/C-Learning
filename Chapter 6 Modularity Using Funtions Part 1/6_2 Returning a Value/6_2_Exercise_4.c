/**
 * Write a function gallonsToLiters() that converts gallons of liquid to liters using
 * the relationship that there are 3.7854 liters to the gallon
 * 
 * Include the function written for the exercise in a working C program. Make sure your 
 * function is called from main() and correctly returns a value to main(). Have main()
 * display the value returned and test teh function by passing various data to it
 * and verifying the returned value
*/

#include <stdio.h>

int main()
{
    float gallonsToLiters(float);

    float gallons;

    printf("Please provide the amount of gallons to convert to liters: ");
    scanf("%f", &gallons);

    printf("%.4f gallons is equal to %.4f liters.\n", gallons, gallonsToLiters(gallons));

    return 0;
}

float gallonsToLiters(float gallons)
{
    #define LITTERSPERGALLON 3.7854
    return gallons * LITTERSPERGALLON;
}