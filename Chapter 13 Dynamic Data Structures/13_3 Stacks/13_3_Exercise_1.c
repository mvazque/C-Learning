/**
 * Modify Program 13.5 so that the arguments transmitted to both push() and pop() are a
 * structure name rather than a single field variable name.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXCHARS 30
#define DEBUG 0

/* Here is the declaration of a stack structure */
struct NameRec
{
    char name[MAXCHARS];
    struct NameRec *priorAddr;
};

/* Here is the definition of the top-of-stack pointer */
struct NameRec *tosp;

int main()
{
    void readPush(); /* function prototypes */
    void popShow();

    tosp = NULL;    /* initialize the top-of-stack pointer */
    readPush();
    popShow();

    return 0;
}

/* get a name and push it onto the stack */
void readPush()
{
    char name[MAXCHARS];
    void push(struct NameRec*);

    printf("Enter as many names as you wish, one per line");
    printf("\nTo stop entering names, enter a single x\n");
    while(1)
    {
        printf("Enter a name: ");
        fgets(name, MAXCHARS, stdin);
        name[strlen(name) - 1] = '\0';
        if(strcmp(name, "x") == 0)
            break;
        
        struct NameRec *nameRecord;
        nameRecord = (struct NameRec *) malloc(sizeof(struct NameRec));

        if(nameRecord == (struct NameRec *) NULL)
        {
            printf("\nFailed to allocate memory for this structure\n");
            exit(1);
        }
        strcpy(nameRecord->name, name); 
        
        push(nameRecord);
    }
}

/* pop and display names from the stack */
void popShow()
{
    // char name[MAXCHARS];
    struct NameRec *nameRecord;
    void pop(struct NameRec *);

    nameRecord = (struct NameRec *) malloc(sizeof(struct NameRec));
    if(nameRecord == (struct NameRec *) NULL)
    {
        printf("\nFailed to allocate memory for this structure\n");
        exit(1);
    }

    printf("\nThe names popped from the stack are:\n");
    while(tosp != NULL) /* display till end of stack */
    {
        pop(nameRecord);
        printf("%s\n", nameRecord->name);
    }
}

void push(struct NameRec *nameRecord)
{
    // struct NameRec *newaddr; /* pointer to structure of type NameRec */
    if(DEBUG)
        printf("Before the push the address in tosp is %p", tosp);
    
    nameRecord->priorAddr = tosp;      /* store address of prior structure */
    tosp = nameRecord;                 /* update the top-of-stack pointer */

    if(DEBUG)
        printf("\n After the push the address in tosp is %p\n", tosp);
}

void pop(struct NameRec *nameRecord)
{
    struct NameRec *tempAddr;

    if(DEBUG)
        printf("Before the pop the address in tosp is %p\n", tosp);
    
    strcpy(nameRecord->name, tosp->name);       /* retrieve the name from the top-of-stack */
    tempAddr = tosp->priorAddr;     /* retrieve the prior address */
    free(tosp);                     /* release the structure's memory space */
    tosp = tempAddr;                /* update the top-of-stack pointer */

    if(DEBUG)
        printf(" After the pop the address in tosp is %p\n", tosp);
}