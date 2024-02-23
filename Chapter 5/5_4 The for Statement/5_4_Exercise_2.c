/**
 * Modify Program 5.11 to produce a table of the numbers 10 through 1 instead of 1 to 10 as it
 * currently does.
*/

#include <stdio.h>
int main()
{
    #define ENDVALUE 1
    int num;

    printf("NUMBER SQUARE CUBE\n");
    printf("------ ------ ----\n");

    for(num = 10; num >= ENDVALUE; num--)
        printf("%3d %7d %6d\n", num, num * num, num * num * num);

    return 0;
}