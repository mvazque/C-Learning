/**
 * Using pointer, repeat Programming Exercise 1 from Section 9.1
 * 
 * The following function can be used to select and display all vowels contained within a user-input
 * string:
 * 
 * Notice that the switch statement in vowels() uses the fact that selected cases "drop through"
 * in the absence of break statements. Thus, all selected cases result in a putchar() function
 * call. Include vowels() in a working program that accepts a user-input string and then displays
 * all vowels in the string. In response to the input "How much is the little worth worth?" Your
 * program should display ouieieoo.
 * 
 * Modify the vowels() function to count and display the total number of vowels contained in the
 * string passed to it
 * 
 * How much is the little worth worth?
 * ouieieoo
 * The number of vowels is 8.
*/

#include <stdio.h>

int main()
{
    void vowels(char*);

    char testString[80];
    printf("Enter a value to count the vowels of: ");
    fgets(testString, sizeof(testString), stdin);
    vowels(testString);
}

void vowels(char *strng)
{
    int i = 0, vowelCount = 0;
    char c;

    while((c = *strng++) != '\0')
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            {
                putchar(c);
                vowelCount++;
                break;
            }
        }

    putchar('\n');
    printf("The number of vowels is %d.\n", vowelCount);
    return;
}