/**
 * A bookstore summarizes its monthly transactions by keeping the following information for each
 * book in stock
 *  Book identification number
 *  Inventory balance at the beginning of the month
 *  Number of copies received during the month
 *  Number of copies sold during the month
 * 
 * Write a C program that accepts this data for each book and then displays the book identification
 * number and an updated book inventory balance using the relationship
 * 
 * New Balance = InventoryAtBeginningOfMonth + NumCopiesReceivedInMonth - NumCopiesSoldInMonth
 * 
 * Your program should use a while statement with a fixed-count condition so that information on
 * only three books is requested
*/

#include <stdio.h>

int main()
{
    int bookId, copiesSold, copiesReceived, inventoryAtStartOfMonth, maxCount = 3, count = 0;

    while(count < maxCount)
    {
        printf("Please provide the ID of the book: ");
        scanf("%d", &bookId);

        printf("Please provide monthly starting inventory for this book: ");
        scanf("%d", &inventoryAtStartOfMonth);

        printf("Please provide the amount of copies of this book received this month: ");
        scanf("%d", &copiesReceived);

        printf("Please provide the amount of sales of this book received this month: ");
        scanf("%d", &copiesSold);

        printf("The amount of inventory for the book with ID %d, is %d.\n", bookId, inventoryAtStartOfMonth + copiesReceived - copiesSold);

        count++;
    }
    return 0;
}