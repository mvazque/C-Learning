/*
    Calculate the number of lines needed for a system of 100 
    phones and the additional number of lines that would bee needed for 100 more phone
    
    Use the formula lines = n(n-1)/2
*/
#include <stdio.h>

int main(void)
{
    float n = 1000.0;
    float linesOriginal = n * (n - 1) / 2;

    printf("The number of lines needed for %.0f phones is %.2f.\n", n, linesOriginal);

    return 0;
}