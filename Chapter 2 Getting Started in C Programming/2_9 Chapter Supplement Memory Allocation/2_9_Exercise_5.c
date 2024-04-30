/*
    Write a C program that includes the following declariont statements
    char key, choice;
    int num, count;
    long date;
    float yield;
    double price;

    Have the program use the address operator and the printf() 
    function to display the addresses corresponding to each variable
*/

#include <stdio.h>

int main(void)
{
    char key, choice;
    int num, count;
    long date;
    float yield;
    double price;

    printf("The size of variable key is %lu\n", sizeof(key));
    printf("The size of variable choice is %lu\n", sizeof(choice));
    printf("The size of variable num is %lu\n", sizeof(num));
    printf("The size of variable count is %lu\n", sizeof(count));
    printf("The size of variable date is %lu\n", sizeof(date));
    printf("The size of variable yield is %lu\n", sizeof(yield));
    printf("The size of variable price is %lu\n", sizeof(price));

    return 0;
}
