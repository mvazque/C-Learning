/**
 * Write a program that stores the following letters in the array named message: This is a test.
 * Have your program copy the data stored in the message to another array named mess2 and then
 * display the letters in the mess2 array.
*/

#include <stdio.h>

int main()
{
    #define NUMELEM 15   
    char message[NUMELEM] = "This is a test.";
    char *messPtr = message;
    char mess2[NUMELEM];

    for(int i  = 0; i < NUMELEM; i++)
        mess2[i] = *messPtr++;
    
    messPtr = mess2;
    while(messPtr < mess2 + NUMELEM)
        printf("%c", *messPtr++);

    printf("\n");
    return 0;
}