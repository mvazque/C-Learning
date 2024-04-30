/**
 * Write a program that has a delaration in main() to store the string "Vacation is near" 
 * into an array named message. There should be a function call to display() that accepts
 * message as a parameter named string and then displays the contents in a message
 * 
 * Modify the display function written to display the first eight elements of the message array
*/

#include <stdio.h>

int main()
{
    void display(char []);

    char message[] = "Vacation is near";

    display(message);

    return 0;
}

void display(char strng[])
{
    int i = 0;
    while(i < 8)
    {
        printf("%c", strng[i]);
        i++;
    }

    printf("\n");
}