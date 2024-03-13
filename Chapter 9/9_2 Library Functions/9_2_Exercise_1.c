/**
 * Enter and execute Program 9.5 on your computer
*/

#include <stdio.h>
#include <string.h> /* required for hte string function library */

int main()
{
    #define MAXELS 50
    char string1[MAXELS] = "Hello";
    char string2[MAXELS] = "Hello there";
    int n;

    n = strcmp(string1, string2);

    if(n < 0)
        printf("%s is less than %s\n\n", string1, string2);
    else if(n == 0)
        printf("%s is equal to %s\n\n", string1, string2);
    else
        printf("%s is greater than %s\n\n", string1, string2);
    
    printf("The length of string1 is %lu characters\n", strlen(string1));
    printf("The length of string2 is %lu characters\n", strlen(string2));

    strcat(string1, " there World!");

    printf("After concatenation, string1 contains the string value\n");
    printf("%s\n", string1);
    printf("The length of this string is %lu characters\n\n", strlen(string1));

    printf("Type in a sequence of characters for string2:\n");
    fgets(string2, MAXELS, stdin);

    strcpy(string1, string2);

    printf("After copying string2 to string1");
    printf(" the string value in string1 is: \n");
    printf("%s\n", string1);
    printf("The length of this string is %lu characters\n\n", strlen(string1));
    printf("\nThe starting address of the string1 string is: %p\n",  (void *)string1);

    return 0;
}