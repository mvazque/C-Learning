/**
 * Rewrite the program to return the display
 * The sales tax is $ 1.80
 * The total bill is $37.80
*/

#include <stdio.h>
int main()
{
    // printf("The sales tax is %f", 0.05 * 36);
    // printf("The total bill is %f", 37.80);

    printf("The sales tax is $%5.2f\n", 0.05 * 36);
    printf("The total bill is $%5.2f\n", 37.80);
    
    return 0;
}