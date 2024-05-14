/**
 * Write a C program that reverses the bits in an integer variable named okay and store
 * the reversed bits in a variable named revOkay. For example, if hte bit pattern
 * 11100101, corresponding to the octal number 0345, is assigned to okay, the bit pattern
 * 10100111, corrsponding to the octal number 0247, should be produced an stored in 
 * revOkay
*/

#include <stdio.h>

int main()
{
    #define NUMBITS 8
    void displayEightBitBinary(int);
    int okay = 0345;
    int revOkay = 0;
    int mask = 001;
    printf("%d\n", okay);

    for(int i = 0; i < NUMBITS; i++)
    {
        revOkay *= 2;
        revOkay += okay & mask ? 1 : 0;
        mask = mask << 1;
    }

    printf("okay value is %o or ", okay);
    displayEightBitBinary(okay);

    printf("revOkay value is %o or ", revOkay);
    displayEightBitBinary(revOkay);
}

void displayEightBitBinary(int num)
{
    #define NUMBITS 8

    int mask = 0x80;
    for(int i = 0; i < NUMBITS; i++)
    {
        printf("%d", num & mask ? 1 : 0);
        mask = mask >> 1;
    }
    printf("\n");
}