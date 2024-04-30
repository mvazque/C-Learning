/**
 * Modify the program from the previous exercise to keep requesting books until a sentinel
 * identification value of 999 is enterd
*/

#include <stdio.h>

int main()
{
    int bookId = -1, copiesSold, copiesReceived, inventoryAtStartOfMonth;

    printf("In order to stop this program provide the value 999 for the book ID prompt\n");

    while(bookId != 999)
    {
        printf("Please provide the ID of the book: ");
        scanf("%d", &bookId);

        if(bookId == 999)
        {
            printf("Program termination code detected. The program will stop now.\n");
            continue;
        }
            

        printf("Please provide monthly starting inventory for this book: ");
        scanf("%d", &inventoryAtStartOfMonth);

        printf("Please provide the amount of copies of this book received this month: ");
        scanf("%d", &copiesReceived);

        printf("Please provide the amount of sales of this book received this month: ");
        scanf("%d", &copiesSold);

        printf("The amount of inventory for the book with ID %d, is %d.\n", bookId, inventoryAtStartOfMonth + copiesReceived - copiesSold);
    }
    return 0;
}