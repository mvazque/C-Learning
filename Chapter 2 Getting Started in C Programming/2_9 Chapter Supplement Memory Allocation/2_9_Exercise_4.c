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

    printf("The address of variable key is %p\n", &key);
    printf("The address of variable choice is %p\n", &choice);
    printf("The address of variable num is %p\n", &num);
    printf("The address of variable count is %p\n", &count);
    printf("The address of variable date is %p\n", &date);
    printf("The address of variable yield is %p\n", &yield);
    printf("The address of variable price is %p\n", &price);

    return 0;
}

// key -> [0x16da82f0f, Remaining bytes]
// choice -> [0x16da82f0e, Remaining bytes]
// num -> [0x16da82f08, Remaining bytes]
// count -> [0x16da82f04, Remaining bytes]
// date -> [0x16da82ef8, Remaining bytes]
// yield -> [0x16da82ef4, Remaining bytes]
// price -> [0x16da82ee8, Remaining bytes]
