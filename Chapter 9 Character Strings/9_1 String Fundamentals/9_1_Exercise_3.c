/**
 * Write a C function to count the total number of characters, including blanks, contained in a 
 * string. Do not include the end-of-string NULL marker in the count
 * 
 * Include the function in a complete working program
*/

#include <stdio.h>

int main()
{
    #define NUMELEM 80
    int charCount(char[], int);
    char strng[NUMELEM];

    printf("Please provide a string to count.\n");
    fgets(strng, sizeof(strng), stdin);

    charCount(strng, NUMELEM);

    return 0;
}

int charCount(char str[], int strLength)
{
    char count = 0;
    printf("This is the string %s.\n", str);
    for(int i = 0; i < strLength; i++)
    {
        /** 
         * The char code 10 is for new line. The problem asks to ignore end-of-string NULL
         * but for now I will include 10 since its weird to count that as well
        */
        if(!str[i] || str[i] == 10)
            break;
        else
            count++;
        
    }
    return count;
}