#include <stdio.h>

int main(void)
{
    float laptopPrice = 889;
    float salesTax = 0.06;
    float totalPrice = (1 + salesTax) * laptopPrice;

    printf("The total of a laptop priced at %f with a sales tax of %f is %f.\n", laptopPrice, salesTax, totalPrice);
}