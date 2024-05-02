/**
 * Write a stack program that accepts a structure consisting of an integer identification
 * number and a floating-point hourly pay rate
*/

#include <stdio.h>
#include <stdlib.h>

struct UserRec
{
    int idNum;
    float payRate;
    struct UserRec *prevRec;
};

int main()
{
    void printStack(struct UserRec *);
    int userId, elemCount = 0;
    float userPayRate;
    struct UserRec *topAddr = NULL, *prevAddr = NULL;
    do
    {
        struct UserRec *userRecord;
        userRecord = (struct UserRec*) malloc(sizeof(struct UserRec));
        if(userRecord == (struct UserRec*) NULL)
        {
            printf("Could not reserve the memory space.\n");
            exit(1);
        }

        printf("\nPlease provide a user ID:");
        scanf("%d", &userId);
        userRecord->idNum = userId;

        printf("Please provide a pay rate:");
        scanf("%f", &userPayRate);
        userRecord->payRate = userPayRate;
        
        userRecord->prevRec = prevAddr;
        prevAddr = userRecord;

        topAddr = userRecord;
        
        elemCount++;
    } while (elemCount < 5);
    
    printStack(topAddr);
}


void printStack(struct UserRec *userRecord)
{
    while(userRecord != NULL)
    {
        printf("%d %.2f\n", userRecord->idNum, userRecord->payRate);
        userRecord = userRecord->prevRec;
    }
}
