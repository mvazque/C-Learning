/**
 * Include the string library functions strlen(), strcat(), and strncat() within a function
 * having the prototype int concat(char string1[], char string2[], int maxlength). The concat()
 * function should perform a complete concatenation of string2 to string1 only if the length of
 * the concatenated string does not exceed maxlength, which is the maximum length defined for
 * string1. If the concatenated string exceeds maxlength, concatenate only the characters in 
 * string2 so that the maximum combined string length is equal to maxlength - 1, which provides
 * enough room for the end-of-string NULL character.
 * 
 * Write a simple main() function to test the concat() function written.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    void concat(char[], char[], int);
    #define MAXELEM 80
    char testString1[MAXELEM] = "Test String";
    char testString2[MAXELEM];
    printf("Test string 1 of length %lu.\n", strlen(testString1));

    printf("Please provide a string to concat:\n");
    fgets(testString2, MAXELEM, stdin);

    concat(testString1, testString2, MAXELEM);

}

void concat(char string1[], char string2[], int maxlength)
{
    int strLen1 = strlen(string1), strLen2 = strlen(string2);
    int difference;

    if(strLen1 + strLen2 > maxlength)
    {
        difference = strLen1 + strLen2 - maxlength;     
        strncat(string1, string2, strLen2 - difference);
    }
    else
    {
        strcat(string1, string2);
    }

    printf("New String.\n");
    printf("%s\n", string1);
}