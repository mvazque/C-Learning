/**
 * Determine why the if-else chain in Program 4.5 cannot be replaced with a switch statement
 * 
 * The reason a switch statement wouldn't work in this case is due to it referencing a range
 * instead of exact numbers. Cases would need to be set up for each individual case. We
 * would need to figure a way to round to the floor of the 10000's place in order to 
 * get a case to be valid
*/

#include <stdio.h>

int main()
{
    float monthlySales, income;

    printf("Enter the value of monthly sales: ");
    scanf("%f", &monthlySales);

    if(monthlySales >= 50000.00)
    {
        income = 575.00 + 0.16 * monthlySales;
    }
    else if (monthlySales >= 40000.00)
    {
        income = 550.00 + 0.14 * monthlySales;
    }
    else if (monthlySales >= 30000.00)
    {
        income = 525.00 + 0.12 * monthlySales;
    }
    else if (monthlySales >= 20000.00)
    {
        income = 500.00 + 0.09 * monthlySales;
    }
    else if (monthlySales >= 10000.00)
    {
        income = 450.00 + 0.05 * monthlySales;
    }
    else
    {
        income = 400.00 + 0.03 * monthlySales;
    }

    printf("The income is $%7.2f\n", income);

    return 0;
}