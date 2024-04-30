/**
 * Write declaration statements to store the string of characters "Input the Following Data" in a 
 * character array named messag1, the string "---------------" in the array messag2, the string
 * "Enter the Date" in the array named messag3 and the string "Enter the Account Number" in messag4
 * 
 * Include the array declarations in a program that uses the printf function to display the mesages.
 * We can make use of the %s converter in the function. Ensure the end of string marker is in the
 * array 
*/

#include <stdio.h>

int main()
{
    char messag1[] = "Input the Following Data";
    char messag2[] = "---------------";
    char messag3[] = "Enter the Date";
    char messag4[] = "Enter the Account Number";

    printf("%s\n", messag1);
    printf("%s\n", messag2);
    printf("%s\n", messag3);
    printf("%s\n", messag4);

    return 0;
}