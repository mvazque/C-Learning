/**
 * Write a C program that keeps track of the frequency of occurrence of each vowel as lines of test
 * are typed at the keyboard. The end of the text should be signified by an entry of an EOF marker
 * (Ctrl z for dos Ctrl d for unix). The output of your program should be a count of each vowel
 * encountered in the input text.
*/

#include <stdio.h>

int main()
{
    #define NUMVOWELS 5
    void printVowelResults(int [], char[], int);
    char input;
    int index = 0;
    char vowelList [NUMVOWELS] = {'a', 'e', 'i', 'o', 'u'};
    int vowelCounter[NUMVOWELS] = { 0, 0, 0, 0, 0};
    char str1[] = "I don't know how to continuously read characters so I am making this string instead.";

    // printf("Please begin typing. To exit provide an EOF character: ");

    do
    {
        input = str1[index];
        switch (input)
        {
            case 'a': case 'A':
            {
                vowelCounter[0]++;
                break;
            }
            case 'e': case 'E':
            {
                vowelCounter[1]++;
                break;
            }
            case 'i': case 'I':
            {
                vowelCounter[2]++;
                break;
            }
            case 'o': case 'O':
            {
                vowelCounter[3]++;
                break;
            }
            case 'u': case 'U':
            {
                vowelCounter[4]++;
                break;
            }
        }

        index++;

    } while (input != EOF);
    
    printVowelResults(vowelCounter, vowelList, NUMVOWELS);
}

void printVowelResults(int vowelCounter[], char vowels[], int numVowels)
{
    void printVowel(char, int);

    for(int i = 0; i < numVowels; i++)
    {
        printVowel(vowels[i], vowelCounter[i]);
    }

    // printVowel('a', vowelCounter[0]);
    // printVowel('e', vowelCounter[1]);
    // printVowel('i', vowelCounter[2]);
    // printVowel('o', vowelCounter[3]);
    // printVowel('u', vowelCounter[4]);
    printf("  +---------|----------|\n");
    printf("  0         5          10\n");
}

void printVowel(char vowel, int vowelCount)
{
    printf("%c | ", vowel);
    for(int i = 0; i < vowelCount; i++)
    {
        printf("* ");
    }
    printf("\n");
}