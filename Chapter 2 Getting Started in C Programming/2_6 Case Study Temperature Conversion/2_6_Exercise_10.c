/*
    Calculate the number of lines needed for a system of 100 
    phones and the additional number of lines that would bee needed for 100 more phone
    
    Use the formula lines = n(n-1)/2
*/
#include <stdio.h>

int main(void)
{
    float n = 100.0;
    float updatedN = n + 10.0;

    float linesOriginal = n * (n - 1) / 2;
    float linesUpdated = updatedN * (updatedN - 1) / 2;
    float additionalLinesNeeded = linesUpdated - linesOriginal;

    printf("The number of lines needed for %.0f phones is %.2f.\n", n, linesOriginal);
    printf("The number of additional lines for %.0f more phones is %.2f\n", updatedN, additionalLinesNeeded);

    return 0;
}