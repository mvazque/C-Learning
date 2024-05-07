/**
 * Write a queue program that accepts a structure consisting of an integer identification
 * number and a floating-point hourly pay rate;
*/

#include <stdio.h>
#include <stdlib.h>

struct UserRec
{
    int idNum;
    float payRate;
    struct UserRec *nextAddr;
};

struct UserRec *queueBack, *queueFront;


int main()
{
    void enque(int, float);
    struct UserRec* serve();
    void printQueue(struct UserRec *);
    int inputId;
    float inputPayRate;
    printf("To end the data request phase, provide a negative value.\n");
    
    do
    {
        printf("\nPlease provide a user ID number to record: ");
        scanf("%d", &inputId);  

        printf("Please provide a user Pay Rate to record: ");
        scanf("%f", &inputPayRate);

        if(inputId < 0 || inputPayRate < 0)
            break;

        enque(inputId, inputPayRate);
        
    } while (1);

    struct UserRec *functionResponse = serve();
    printf("Serve Test: %d %.2f\n", functionResponse->idNum, functionResponse->payRate);
    
    printQueue(queueFront);
    
}

/**
 * Creates a new structure that will be put into the queue
 * @param: userId: The ID of the user that will be created
 * @param: userPayRate: The pay rate associated to with the user
*/
void enque(int userId, float userPayRate)
{
    struct UserRec *userRecord;
    userRecord = (struct UserRec*) malloc(sizeof(struct UserRec));
    if(userRecord == (struct UserRec*) NULL)
    {
        printf("Could not allocate memory for the structure.\n");
        exit(1);
    }

    /* Sets the values of the structure members*/
    userRecord->idNum = userId;
    userRecord->payRate = userPayRate;

    /* New item will always be last and as such will have NULL as its pointer for next in list*/
    userRecord->nextAddr = NULL;

    /** 
     * If the queueBack pointer is NULL the queue is empty. Will set the queueBack to the new
     * structure
     * 
     * Otherwise will set the nextAddr
    */
    if(queueBack == NULL)
    {
        queueBack = userRecord;
    }
    else
    {
        queueBack->nextAddr = userRecord;
        queueBack = userRecord;
    }

    if(queueFront == NULL)
        queueFront = userRecord;

}

/**
 * Serves from the queue
 * @return Pointer to the structure at the front of the queue when starting the function call
*/
struct UserRec* serve()
{
    if(queueFront == NULL)
    {
        printf("No items to pop.\n");
        return NULL;
    }

    struct UserRec *tempStruct;
    tempStruct = queueFront;

    queueFront = queueFront->nextAddr;

    return tempStruct;
}


/**
 * Prints all the structures in the queue starting from the front
*/
void printQueue(struct UserRec *userRecord)
{
    while(userRecord != NULL)
    {
        printf("%5d %5.2f\n", userRecord->idNum, userRecord->payRate);
        userRecord = userRecord->nextAddr;
    }
}