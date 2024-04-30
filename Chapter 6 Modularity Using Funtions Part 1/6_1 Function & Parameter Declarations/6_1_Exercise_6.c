/**
 * Write a function that produces a table of the number from 1 to 10, their squares, and cubes.
 * The function should produce the same display produced by Program 5.11.
*/

#include <stdio.h>

int main(void)
{
    void createTable();

    createTable();

    return 0;
}

void createTable()
{
    #define TABLESIZE 10
    int num = 0;

    printf("NUMBER SQUARE CUBE\n");
    printf("------ ------ ----\n");

    do
    {
        printf("%3d %7d %6d\n", num, num * num, num * num * num);
        num++;
    } while (num <= TABLESIZE);

}