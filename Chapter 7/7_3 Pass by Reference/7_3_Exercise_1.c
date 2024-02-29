/**
 * Write a program that includes the following declaration statements. Have the program use
 * the address operator and the printf() function display teh addresses corresponding to
 * each variable
 * 
 * char key, choice;
 * int num, count;
 * float yield;
 * double price;
 * 
 * After running the program draw a diagram of how your computer has set aside storage for the
 * variables in the program. On your diagram, fill in the addresses displayed by the program
 * 
 * Modify the program to display the amount of storage your computer reserves for each data type
 * (use the sizeof operator). With this information and the address information, determine if your
 * computer set aside storage fo the variable in the order the were declared
 * 
 * It looks like they are all in descending order although not necessarily next to each other
*/

#include <stdio.h>

int main()
{
    char key, choice;
    int num, count;
    float yield;
    double price;

    printf("The addresses for key and choice are %p and %p respectively.\n", &key, &choice);
    printf("The sizes of key and choice are %lu and %lu respectively.\n", sizeof(key), sizeof(choice));
    printf("The addresses for num and count are %p and %p respectively.\n", &num, &count);
    printf("The sizes of num and count are %lu and %lu respectively.\n", sizeof(num), sizeof(count));
    printf("The address for yield is %p.\n", &yield);
    printf("The size of yield is %lu.\n", sizeof(yield));
    printf("The address for price is %p.\n", &price);
    printf("The size of price is %lu.\n", sizeof(price));

    return 0;
}