/**
 * The following function convert(), "marches along" the string passed to it and sends each
 * character in the string one at a time to the toUpper() function until the NULL character
 * is encountered
 * 
 * char toUpper(char);
 * void convert(char strng[])
 * {
 *  int i = 0;
 * 
 *  while(strng[i] != '\0')
 *  {
 *      strng[i] = toUpper(strng[i]);
 *      i++;
 *  }
 *  return;
 * }
 * 
 * char toUpper(char letter)
 * {
 *     if(letter >= 'a' && letter <= 'z')
 *         return (letter - 'a' + 'A');
 *     else
 *         return letter;
 * }
 * 
 * The toUpper function takes each character passed to it and first examines it to determine if the
 * character is a lowercase letter (a lowercase letter is any character between a and z, inclusive).
 * Assuming that characters are stored using hte standard ASCII character codes, the expression
 * letter - 'a' + 'A' converts a lowercase letter to its uppercase equivalent. Rewrite the convert
 * function using pointers
 * 
 * 
 * Include the convert() and toUpper() functions in a working program. The program should prompt
 * the user for a string and echo the string back to the user in uppercase letters. User gets()
 * (Note this is now deprecated and instead fgets should be used), and puts() for string input
 * and display
*/

#include <stdio.h>

char toUpper(char);
void convert(char[]);

int main()
{
    #define NUMELEM 80

    char strInput[NUMELEM];

    printf("Please provide a string.\n");
    fgets(strInput, NUMELEM, stdin);

    convert(strInput);

    puts(strInput);
}

void convert(char *strng)
{
    int i = 0;

    while(*(strng + i) != '\0')
    {
        *(strng + i) = toUpper(*(strng + i));
        i++;
    }
    return;
}

char toUpper(char letter)
{
    if(letter >= 'a' && letter <= 'z')
        return (letter - 'a' + 'A');
    else
        return letter;
}