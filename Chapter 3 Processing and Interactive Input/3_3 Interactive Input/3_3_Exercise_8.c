/**
 * Repeat the previous exercise but have your program declare the variable used to store the number
 * as a single-precision variable. Run the program four times. The first time, enter an
 * integer; the second time, enter a decimal number with fewer than six decimal places; the 
 * third time, enter a number with more than six decimal places, and the fourth time, enter
 * a character. Using the output display, keep track of what number your program actually
 * accepted from the data you typed in. What happened, if anything and why?
 * 
 * Input        Output
 * 17           17.000000
 * 16.012       16.011999
 * 12.00000012  12.000000
 * h            0.000000
 * 
 * So it looks like due to it being a single precision value more than six decimal points any value 
 * will be lost. With respect to a character I am not sure but they return 0. When an int was
 * expected characters would return 1, I am unsure of the pattern here.
*/

#include <stdio.h>

int main(void)
{
    float number;

    printf("Please enter a number:");
    scanf("%f", &number);

    printf("The number provided is %f.\n", number);
}