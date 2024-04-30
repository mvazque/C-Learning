/**
 * Modify the function for Exercise 6 to accept the starting value of the table, the number
 * of values to be displayed, and the increment between values. Name your function
 * selectTable(). A call to selectTable(6, 5, 2) should produce a table of five lines, the first
 * line starting with the number 6 and each succeeding number increasing by 2.
*/

#include <stdio.h>

int main(void)
{
    void selectTable(float, float, float);
    float num, tableSize, increment;

    printf("Please provide a starting number: ");
    scanf("%f", &num);

    printf("Please provide the number of numbers you'd like to see on the table: ");
    scanf("%f", &tableSize);

    printf("Please provide the difference between each number: ");
    scanf("%f", &increment);

    selectTable(num, tableSize, increment);

    return 0;
}

void selectTable(float num, float tableSize, float increment)
{
    int count = 0;
    printf("NUMBER    SQUARE     CUBE\n");
    printf("--------  -------  ---------\n");
    

    do
    {
        printf("%8.3f %8.3f %10.3f\n", num, num * num, num * num * num);
        num += increment;
        count++;
    } while (count <= tableSize);

}