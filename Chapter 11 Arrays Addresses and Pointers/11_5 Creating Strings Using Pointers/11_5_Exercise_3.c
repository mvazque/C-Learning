/**
 * Write a C function that will accept 6 lines of user-input text and store the entered lines as 6
 * individual strings. Use a pointer array in your function
*/

/**
 * From what I gathered with this exercise, it is not possible to save input to a a pointer,
 * much less a pointer in an array.
 * 
 * The next idea was to create a temp string that would accept the input and then set a pointer
 * to it.
 * The issue was that pointers point at the string, so every loop the string gets overwritten
 * and the pointers have no clue about this. They're just pointing at a string. So they all end
 * up pointing to the same string which has the last value input by the user
 * 
 * So the solution was instead to create an array of strings and use each element in the array
 * to hold one string. Each pointer in the pointer array then points to a string in the string
 * array
 * 
 * Looking online it looks like there is a way around this but it uses malloc which is not
 * something the book has gone over at this point so I id not implement it.
*/

#include <stdio.h>
#include <string.h>

#define NUMELEM 80
#define NUMSTRINGS 6

int main()
{

    // const int N = 6; 
    // char **stringInputs = (char**)malloc(N * sizeof(char*)); 

    void printStrings(char *[NUMSTRINGS][NUMELEM]);
    void customCopy(char[], char *);
    int i = 0;
    char *stringInputs[NUMSTRINGS][NUMELEM];
    char strings[NUMSTRINGS][NUMELEM];

    printf("Please provide six strings to store. Press enter/return at the end of a string.\n");
    do
    {
        fgets(strings[i], NUMELEM, stdin);
        *stringInputs[i] = strings[i];
        i++;
    } while (i < 6);
    printStrings(stringInputs);
}

void customCopy(char inputString[], char *stringPointer)
{
    printf("In custom Copy");
    int strLength = strlen(inputString);
    for(int i = 0; i < strLength; i++)
    {
       *(stringPointer + i) = *(inputString + i);
    }
}

void printStrings(char *stringInputs[NUMSTRINGS][NUMELEM])
{
    for(int i = 0; i < NUMSTRINGS; i++)
        printf("%s", *stringInputs[i]);
}