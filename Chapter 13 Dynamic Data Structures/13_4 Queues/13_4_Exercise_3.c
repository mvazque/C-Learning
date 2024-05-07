/**
 * Add a menu function to program 13.6 that gives the user a choice of adding a name to the
 * queue, removing a name from the queue, or listing the contents of the queue without removing
 * any structures from it
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXCHARS 30
#define DEBUG 0

/* here is the declaration of a queue structure */
struct NameRec
{
    char name[MAXCHARS];
    struct NameRec *nextAddr;
};

/* here is the definition of the top and bottom queue pointers */
struct NameRec *queueIn, *queueOut;

int main()
{
    void menuHandle(char);
    queueIn = NULL; /* initialize queue pointers */
    queueOut = NULL;
    char userInput;

    do
    {
        printf("What would you like to do?\n");
        printf("Add to queue(w), serve from queue (s), print the queue (p), exit(x): ");
        userInput = getchar();
        getchar();

        if('x' == tolower(userInput))
        {
            exit(1);
        }
        menuHandle(tolower(userInput));
    } while (1);
    


    // readEnque();
    // serveShow();
}

void menuHandle(char inputOption)
{
    void readEnque();
    void serveShow();
    void printQueue(struct NameRec *);
    switch (inputOption)
    {
        case 'w':
            readEnque();
            break;
        case 's':
            serveShow();
            break;
        case 'p':
            printQueue(queueOut);
            break;
    }
}

/* get a name and enque it onto the queue */
void readEnque()
{
    char name[MAXCHARS];
    void enque(char *);
    printf("Enter a name: ");
    fgets(name, MAXCHARS, stdin);
    name[strlen(name)-1] = '\0';
    enque(name);
}

/* serve and display names from the queue */
void serveShow()
{
    char name[MAXCHARS];
    void serve(char *);

    printf("\nThe name served from the queue is: ");
    serve(name);
    printf("%s\n", name);
}

void enque(char *name)
{
    struct NameRec *newaddr; /* pointer to structure of type NameRec */

    if(DEBUG)
    {
        printf("Before the enque the address in queue is %p", queueIn);
        printf("\nand the address in queueOut is %p", queueOut);
    }

    newaddr = (struct NameRec*) malloc(sizeof(struct NameRec));
    if(newaddr == (struct NameRec *) NULL)
    {
        printf("\nFailed to allocate memory for this structure");
        exit(1);
    }

    /* the next two if statements handle the empty queue initialization */
    if(queueOut == NULL)
        queueOut = newaddr;
    if(queueIn != NULL)
        queueIn->nextAddr = newaddr; /* fill in prior to structure's address field */

    strcpy(newaddr->name, name);
    newaddr->nextAddr = NULL;
    queueIn = newaddr;

    if(DEBUG)
    {
        printf("\n After the enque the address in queueIn is %p\n", queueIn);
        printf("  and the address in queueOut is %p\n", queueOut);
    }
}

void serve(char *name)
{
    struct NameRec *nextAddr;

    if(DEBUG)
        printf("Before the serve the address in queueOut is %p\n", queueOut);
    
    /* retrieve the name from the bottom-of-queue */
    strcpy(name, queueOut->name);

    /* capture the next address field */
    nextAddr = queueOut->nextAddr;

    free(queueOut);

    /* update the bottom-of-queue pointer */
    queueOut = nextAddr;
    if(DEBUG)
        printf("   After the serve the address in queueOut is %p\n", queueOut);
}

/**
 * Prints all the structures in the queue starting from the front
*/
void printQueue(struct NameRec *nameRecord)
{
    if(nameRecord == NULL)
    {
        printf("No items in the queue.\n");
        return;
    }

    while(nameRecord != NULL)
    {
        printf("Attempt to print");
        printf("%s\n", nameRecord->name);
        nameRecord = nameRecord->nextAddr;
    }
}