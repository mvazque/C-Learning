/**
 * Write a C program that displays the first 8 bits of each character value input into a 
 * variable named ch. 
 * (Hint, assume each character is stored using 8 bits, start by using the hexadecimal
 * mask 80, which corresponds to the binary number 10000000, If the result of the masking
 * operation is a 0, display 0; else display a 1. Then shift the mask one place to the right
 * to examine the next bit and so on until all bits in the variable ch have been processed.)
 * 
*/

#include <stdio.h>

int main()
{
    #define NUMBITS 8
    char ch;
    int mask = 0x80;

    printf("Provide a character to get the first 8 bits of it:");
    ch = getchar();
    getchar();

    for(int i = 0; i < NUMBITS; i++)
    {
        printf("%d", ch & mask ? 1 : 0);
        mask = mask >> 1;
    }
    printf("\n");
}