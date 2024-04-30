/**
 * A well-regarded manufacturer of widgets has been losing 4 percent of its sales each year.
 * The annual profit for the firm is 10 percent of sales. This year the firm has had $10 million
 * in sales and a profit of $1 million. Determine the expected sales and profit for the next
 * 10 years. Your program should complete and produce a display as follows:
*/

#include <stdio.h>

int main(void)
{
    #define MAXYEARS 10
    float salesAmount = 10000000.00, expectedTotal = 0, projectedTotal = 0;

    printf("       SALES AND PROFIT PROJECTION\n");
    printf("       ---------------------------\n\n");
    printf("YEAR    EXPECTED SALES   PROJECTED PROFIT\n");
    printf("----    --------------   ----------------\n");

    for(int i = 1; i <= 10; i++)
    {
        expectedTotal += salesAmount;
        projectedTotal += salesAmount * 0.1;

        printf("%3d     $%11.2f      $%10.2f\n", i, salesAmount, salesAmount * 0.1);

        salesAmount *= 0.96;
    }

    printf("        --------------   ----------------\n");
    printf("Totals: $%.2f     $%.2f\n", expectedTotal, projectedTotal);

    return 0;
}