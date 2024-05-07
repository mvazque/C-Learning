/**
 * Modify Program 13.6 so that the arguments to both enque() and serve() are a structure name
 * rather than a single field variable
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    void readEnque(); /* function prototypes */
    void serveShow();
    queueIn = NULL; /* initialize queue pointers */
    queueOut = NULL;
    readEnque();
    serveShow();
}

/* get a name and enque it onto the queue */
void readEnque()
{
    char name[MAXCHARS];
    void enque(struct NameRec *);

    printf("Enter as many names as you wish, one per line");
    printf("\nTo stop entering names, enter a single x\n");
    while(1)
    {
        printf("Enter a name: ");
        fgets(name, MAXCHARS, stdin);
        name[strlen(name) - 1] = '\0';
        if(strcmp(name, "x") == 0)
            break;
        
        struct NameRec *newAddr; 

        newAddr = (struct NameRec*) malloc(sizeof(struct NameRec));
        if(newAddr == (struct NameRec *) NULL)
        {
            printf("\nFailed to allocate memory for this structure");
            exit(1);
        }
        strcpy(newAddr->name, name);

        enque(newAddr);
    }
}

/* serve and display names from the queue */
void serveShow()
{
    void serve(struct NameRec *);
    struct NameRec *newAddr; 
    newAddr = (struct NameRec*) malloc(sizeof(struct NameRec));
    if(newAddr == (struct NameRec *) NULL)
    {
        printf("\nFailed to allocate memory for this structure");
        exit(1);
    }

    printf("\nThe names served from the queue are:\n");
    while(queueOut != NULL) /* display till end of queue */
    {
        

        serve(newAddr);
        printf("%s\n", newAddr->name);
    }
}

void enque(struct NameRec *newAddr)
{
    if(DEBUG)
    {
        printf("Before the enque the address in queue is %p", queueIn);
        printf("\nand the address in queueOut is %p", queueOut);
    }

    /* the next two if statements handle the empty queue initialization */
    if(queueOut == NULL)
        queueOut = newAddr;
    if(queueIn != NULL)
        queueIn->nextAddr = newAddr; /* fill in prior to structure's address field */

    newAddr->nextAddr = NULL;
    queueIn = newAddr;

    if(DEBUG)
    {
        printf("\n After the enque the address in queueIn is %p\n", queueIn);
        printf("  and the address in queueOut is %p\n", queueOut);
    }
}

void serve(struct NameRec *newAddr)
{
    struct NameRec *nextAddr;

    if(DEBUG)
        printf("Before the serve the address in queueOut is %p\n", queueOut);
    
    /* retrieve the name from the bottom-of-queue */
    strcpy(newAddr->name, queueOut->name);

    /* capture the next address field */
    nextAddr = queueOut->nextAddr;

    free(queueOut);

    /* update the bottom-of-queue pointer */
    queueOut = nextAddr;
    if(DEBUG)
        printf("   After the serve the address in queueOut is %p\n", queueOut);
}