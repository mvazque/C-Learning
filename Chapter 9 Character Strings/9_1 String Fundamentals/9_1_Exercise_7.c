/**
 * Write a C function named delChar() that can be used to delete characters from a string. The
 * function should accept three arguments, the string name, the numbers of characters to delete
 * and the starting position in hte string where characters should be deleted.
 * 
 * For example the function delChar(strng, 13, 5) when applied to the string "all enthusiastic 
 * people" should result in the string "all people"
*/

#include <stdio.h>
#include <string.h>

int main()
{
    void delChar(char[], int, int);

    #define NUMELEM 80

    char inputStr[NUMELEM];
    int index, quantity;

    printf("Please provide the string to delete a portion of.\n");
    fgets(inputStr, NUMELEM, stdin);

    printf("What is the index where you would like to start deleting: ");
    scanf("%d", &index);

    printf("How many characters would you like to delete: ");
    scanf("%d", &quantity);
    
    delChar(inputStr, index, quantity);

    return 0;

}

void delChar(char str[], int startIndex, int numToDelete)
{
    int i;
    int stringLength = strlen(str);
    

    for(i = startIndex; i != 10 && i < stringLength - 1; i++)
    {
        str[i] = str[i + numToDelete];
    }
    str[i] = '\0';
    printf("%s", str);
}