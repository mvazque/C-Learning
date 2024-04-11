/**
 * Write a C program that includes a declaration in main() that stores the string
 * "Vacation is near" in an array named message. Include a function all to display() that
 * accepts message in a parameter named strng and then displays the message using hte pointer
 * notation *(strng+i)
 * 
 * Modify the display() function written to alter hte address in message. Use the expression *strng
 * rather than *(strng + i) to retrieve the correct element
*/

#include <stdio.h>

int main()
{
    void display(char*);
    char message[] = "Vacation is near";

    display(message);
    return 0;
}

void display(char *strng)
{
    int i = 0;
    while(*strng)
    {
        printf("%c", *strng++);
        i++;
    }
    printf("\n");
    return;
}