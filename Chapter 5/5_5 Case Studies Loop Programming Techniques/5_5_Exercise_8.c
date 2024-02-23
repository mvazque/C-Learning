/**
 * A child's parents promised to give the child $10 on her 12th birthday and double the gift
 * on every subsequent birthday until the gift exceeded $1000. Write a C program to determine
 * how old the girl will be when the last amount is given and the total amount she received
 * including the last gift.
*/

#include <stdio.h>

int main(void)
{
    int giftAmount = 10, culGiftAmount, age = 11;

    while(giftAmount <= 1000)
    {
        culGiftAmount += giftAmount;
        age++;
        giftAmount *= 2;
    }

    culGiftAmount += giftAmount;
    age++;

    printf("The child will be %d when their gift exceeds $1000 and will have received $%d.\n", age, culGiftAmount);
}