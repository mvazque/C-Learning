/**
 * The change in length of a bridge is represented by deltaL
 * deltaL = L * 12 * 10 ^-6 * deltaT
 * L is the length in meters the bridge mus span
 * 12 * 10 ^ -6 is the thermal coefficient for steel
 * deltaT is the range of temperature in celsius the bridge will experience
 * Using the data write a c Program that will determine the expansion the bridge will undergo if it spans
 * 13000 meters and can undergo temperature changes of 100 degrees celsius
*/

#include <stdio.h>

int main(void)
{
    long double L = 13000;
    long double deltaT = 100.0;
    long double thermalCoefficient = 12.0 / (10.0 * 10.0 * 10.0 * 10.0 * 10.0 * 10.0 );
    long double deltaL = L * thermalCoefficient * deltaT;

    printf("The expansion the bridge will undergo is %Lf.\n", deltaL);

    return 0;
}