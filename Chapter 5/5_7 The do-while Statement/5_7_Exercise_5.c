/**
 * Repeat any of the exercises in 5.4 using a do-while statement rather than a for statement
 * 
 * Remake of 5_4 Exc 1
*/

#include <stdio.h>
int main()
{
    #define TABLESIZE 20
    int num = 0;

    printf("NUMBER SQUARE CUBE\n");
    printf("------ ------ ----\n");

    do
    {
        printf("%3d %7d %6d\n", num, num * num, num * num * num);
        num++;
    } while (num <= TABLESIZE);

    return 0;
}