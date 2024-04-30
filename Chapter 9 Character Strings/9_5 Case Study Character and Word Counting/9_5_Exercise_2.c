/** 
 * Create a function named cvowels() that counts and returns the number of vowels in a passed string
*/

#include <stdio.h>

int main()
{
    int cvowels(char[]);
    #define MAXELEM 80

    char inputStr[MAXELEM];
    int numVowels;

    printf("Please provide a string to analyze: \n");
    fgets(inputStr, MAXELEM, stdin);

    numVowels = cvowels(inputStr);

    printf("The number of vowels in the string is %d.\n", numVowels);
}

int cvowels(char str[])
{
    int i = 0, vowelCount = 0;
    char c;
    while(str[i])
    {
        c = str[i];
        if('a' == c || 'e' == c || 'i' == c || 'o' == c || 'u' == c)
        {
            vowelCount++;
        }

        i++;
    }

    return vowelCount;
}