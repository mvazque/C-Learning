/**
 * Repeat Programming Exercise 1 in Section 8.2, but use pointer references to access
 * all array elements
 * 
 * 
 * Write declaration statements to store the string of characters "Input the Following Data" in
 * a character array named messag1, the string "---------------" in the array named messag2, the
 * string "Enter the Date:" in the array named messag3, and the string "Enter the Account Number:"
 * in the array named messag4
 * 
 * Include the array declarations written in a program that uses the printf() function to display
 * the messages. For example, the statement printf("%s", messag1); causes the string stored in
 * messag1 array to be displayed. Your program will require four such statements to display
 * the four individual messages. Using the printf() function with the %s control sequence to
 * display a string requires that the end-of-string marker \0 is present in the character array
 * used to store the string.
*/

#include <stdio.h>

int main()
{
    char messag1[] = "Input the Following Data";
    char messag2[] = "---------------";
    char messag3[] = "Enter the Date:";
    char messag4[] = "Enter the Account Number:";

    char *messag1Ptr = &messag1[0];
    char *messag2Ptr = &messag2[0];
    char *messag3Ptr = &messag3[0];
    char *messag4Ptr = &messag4[0];

    printf("%s\n", messag1Ptr);
    printf("%s\n", messag2Ptr);
    printf("%s\n", messag3Ptr);
    printf("%s\n", messag4Ptr);

}
