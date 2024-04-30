/**
 * Write a C program that prompts the user for a cost per item, number of items purchased,
 * and a discount rate. The program should then calculate and print the total cost, discounted
 * total cost, tax due and amount due. Use the formulas
 * 
 * total cost = number of items * cost--per-item
 * total cost (discounted) = total cost - (discount rate * total cost)
 * tax due = total cost * TAXRATE;
 * amount due = total cost + tax due
 * 
 * For this problem assume TAXRATE is 6%
*/

#include <stdio.h>
#define TAXRATE 0.06

int main(void)
{
    float costPerItem, numItems, discountRate;

    printf("Please provide the cost per items: ");
    scanf("%f", &costPerItem);

    printf("Please provide the amount of items purchased: ");
    scanf("%f", &numItems);

    printf("Please provide the discount rate: ");
    scanf("%f", &discountRate);

    float totalCost, discountedCost, taxDue, amountDue;

    totalCost = numItems * costPerItem;
    discountedCost = totalCost - (totalCost * discountRate / 100.0);
    taxDue = discountedCost * TAXRATE;
    amountDue = discountedCost + taxDue;

    printf("The original cost of your purchase is $%.2f.\n", totalCost);
    printf("The discounted cost is $%.2f.\n", discountedCost);
    printf("The taxes due are %.2f.\n", taxDue);
    printf("The total amount due is $%.2f.\n", amountDue);

    return 0;
}