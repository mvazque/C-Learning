/**
 * Rewrite program 4.6 using a character variable for the select code. (Hint: Review data
 * entry of characters in Section 3.3 if you program does not operate as you would think)
*/

#include <stdio.h>

int main()
{
    int opSelect;
    char fChar, sChar;

    printf("Please type in two characters: ");
    scanf("%c %c", &fChar, &sChar);
    printf("Enter a select code: ");
    printf("\n 1 for addition");
    printf("\n 2 for multiplication");
    printf("\n 3 for division : ");
    scanf("%d", &opSelect);

    switch (opSelect)
    {
    case 1:
        printf("The sum of the characters entered is %6.3f\n", (float)fChar + (float)sChar);
        break;
    case 2:
        printf("The product of the characters entered is %6.3f\n", (float)fChar * (float)sChar);
        break;
    case 3:
        printf("The quotient of the characters entered is %6.3f\n", (float)fChar / (float)sChar);
        break;
    
    default:
        break;
    }

    return 0;
}