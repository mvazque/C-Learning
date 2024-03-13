/**
 * Modify the vowels() function in the previous exercise to count and display the individual
 * numbers of each vowel contained in the string.
*/

#include <stdio.h>

int main()
{
    void vowels(char[]);

    char testString[80];
    printf("Enter a value to count the vowels of: ");
    fgets(testString, sizeof(testString), stdin);
    vowels(testString);
}

void vowels(char strng[])
{
    #define AINDEX 0
    #define EINDEX 1
    #define IINDEX 2
    #define OINDEX 3
    #define UINDEX 4

    int i = 0;
    int vowelCounts[5] = {0, 0, 0, 0, 0};
    char c;

    while((c = strng[i++]) != '\0')
        switch (c)
        {
            case 'a':
            {
                putchar(c);
                vowelCounts[AINDEX]++;
                break;
            }
            case 'e':
            {
                putchar(c);
                vowelCounts[EINDEX]++;
                break;
            }
            case 'i':
            {
                putchar(c);
                vowelCounts[IINDEX]++;
                break;
            }
            case 'o':
            {
                putchar(c);
                vowelCounts[OINDEX]++;
                break;
            }
            case 'u':
            {
                putchar(c);
                vowelCounts[UINDEX]++;
                break;
            }
        }

    putchar('\n');
    printf("The number of vowels are as follows:\n");
    printf("A: %d\n", vowelCounts[AINDEX]);
    printf("E: %d\n", vowelCounts[EINDEX]);
    printf("I: %d\n", vowelCounts[IINDEX]);
    printf("O: %d\n", vowelCounts[OINDEX]);
    printf("U: %d\n", vowelCounts[UINDEX]);
    return;
}