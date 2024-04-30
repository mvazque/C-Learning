/**
 * Modify Program 5.11 to produce a table of the numbers 0 through 20 in increments of 2 with
 * their squares and cubes
*/

#include <stdio.h>
int main()
{
    #define TABLESIZE 20
    int num;

    printf("NUMBER SQUARE CUBE\n");
    printf("------ ------ ----\n");

    for(num = 0; num <= TABLESIZE; num += 2)
        printf("%3d %7d %6d\n", num, num * num, num * num * num);

    return 0;
}