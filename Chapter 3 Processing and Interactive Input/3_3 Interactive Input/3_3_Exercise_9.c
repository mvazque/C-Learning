/**
 * Repeat the previous exercise but have your program declare the variable used to store the number
 * as a double-precision variable. Run the program four times. The first time, enter an
 * integer; the second time, enter a decimal number with fewer than six decimal places; the 
 * third time, enter a number with more than six decimal places, and the fourth time, enter
 * a character. Using the output display, keep track of what number your program actually
 * accepted from the data you typed in. What happened, if anything and why?
 * 
 * Input        Output
 * 17           17.000000
 * 16.012       16.012000
 * 12.00000012  12.000000
 * h            0.000000
 * 
 * Similar to the previous ex
*/

#include <stdio.h>

int main(void)
{
    long double number;

    printf("Please enter a number:");
    scanf("%Lf", &number);

    printf("The number provided is %Lf.\n", number);
}