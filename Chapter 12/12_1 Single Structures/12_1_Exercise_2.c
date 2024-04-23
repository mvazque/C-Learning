/**
 * Write a program that uses a structure for storing the name of a stock, its estimated earnings per
 * share, and its estimated price-to-earnings ratio. Have the program prompt the user to enter
 * these items for five different stocks, each time using the same structure to store the entered
 * data. When the data have been entered for a particular stock, have the program compute and
 * display the anticipated stock price based on the entered earnings and price-per-earnings values.
 * 
 * For example, if a user entered the data XYZ, 1.56, 12, the anticipated price for a share of XYZ
 * stock is (1.56) * (12) = $18.72
*/

#include <stdio.h>

int main()
{
    #define NUMSTOCKS 5

    struct Stock
    {
        char stockName[20];
        float earningsPerShare;
        float priceToEarnings;
    };

    struct Stock stocks[5];

    int i = 0;
    do
    {
        printf("Please provide the stock name, earning per share and price to earning separated by space:\n");
        scanf("%s %f %f", stocks[i].stockName, &stocks[i].earningsPerShare, &stocks[i].priceToEarnings);

        printf("The %s stock is worth %.2f\n", stocks[i].stockName, stocks[i].earningsPerShare * stocks[i].priceToEarnings);
        i++;
    } while ( i != 5 );
    
    return 0;
}