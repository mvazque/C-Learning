/**
 * Write a C code for the algorithm developed in Short Answer Question 2 
 * (Deleting from the list)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXCHARS 30
#define DEBUG 0

/* here is the declaratoin of a linked list structure */
struct NameRec
{
    char name[MAXCHARS];
    struct NameRec *nextAddr;
};

/* here is the definition of the first structure pointer */
struct NameRec *firstRec;

int main()
{
    void readInsert(); /* function prototypes */
    void display();
    void processDelete();

    firstRec = NULL;    /* initialize list pointer*/
    readInsert();
    display();

    processDelete();
    display();

    return 0;
}

/* get a name and insert it into the linked list */
void readInsert()
{
    char name[MAXCHARS];
    void insert(char *);

    printf("\nEnter as many names as you wish, one per line");
    printf("\nTo stop entering names, enter a single x\n");
    while(1)
    {
        printf("Enter a name: ");
        fgets(name, MAXCHARS, stdin);
        name[strlen(name)-1] = '\0';
        if(strcmp(name,"x") == 0)
            break;
        insert(name);
    }
}


void insert(char *name)
{
    struct NameRec *linearLocate(char *); /* function prototype */
    struct NameRec *newaddr, *here; /*pointers to structure of type NameRec*/

    newaddr = (struct NameRec *) malloc(sizeof(struct NameRec));
    if(newaddr == (struct NameRec*) NULL) /* check the address */
    {
        printf("\nCould not allocate the requested space\n");
        exit(1);
    }

    /* Locate where the new structure should be placed and update all pointer members*/
    if(firstRec == NULL) /* no list currently exists */
    {
        newaddr->nextAddr = NULL;
        firstRec = newaddr;
    }
    else if(strcmp(name, firstRec->name) < 0) /* a new first structure */
    {
        newaddr->nextAddr = firstRec;
        firstRec = newaddr;
    }
    else /* structure is not the first structure of the list */
    {
        here = linearLocate(name);
        newaddr->nextAddr = here->nextAddr;
        here->nextAddr = newaddr;
    }

    strcpy(newaddr->name, name); /* store the name */
}

/**
 * This function locates the address of where a new structure should be inserted within
 * an existing list.
 * It receives the address of a name and returns the address of a  structure of type NameRec
*/
struct NameRec *linearLocate(char *name)
{
    struct NameRec *one, *two;
    one = firstRec;
    two = one->nextAddr;

    if(two == NULL)
        return(one); /* new structure goes after the existing single structure */
    while(1)
    {
        if(strcmp(name, two->name) < 0 ) /*if it is located within the list */
            break;
        else if(two->nextAddr == NULL) /*it goes after the last structure */
        {
            one = two;
            break;
        }
        else /* more structures to search against*/
        {
            one = two;
            two = one->nextAddr;
        }
    } /*the break takes us here*/

    return (one);
}

/* display names from the linked list */
void display()
{
    struct NameRec *contents;

    contents = firstRec;
    printf("\nThe names currently in the list, in alphabetical");
    printf("\norder, are:\n");
    while(contents != NULL) /* display till end of list */
    {
        printf("%s\n", contents->name);
        contents = contents->nextAddr;
    }
}

/**
 * Handles the delete options for the linked list
*/
void processDelete()
{
    char name[MAXCHARS];
    void delete(char *);

    printf("\nEnter as many names as you wish to delete, one per line");
    printf("\nTo stop entering names, enter a single x\n");
    while(1)
    {
        printf("Enter a name: ");
        fgets(name, MAXCHARS, stdin);
        name[strlen(name)-1] = '\0';
        if(strcmp(name,"x") == 0)
            break;
        delete(name);
    }
}

/**
 * Deletes a structure from the linked List
 * Will search through the list to find a structure with a name matching the input
 * If found the list will have the item before updated to point to the item after the 
 * deleted structure.
*/
void delete(char *nameToDelete)
{
    struct NameRec *iterationPtr = firstRec, *prevPointer = firstRec;
    printf("Name to delete: %s\n", nameToDelete);
    while(iterationPtr != NULL)
    {
        if(strcmp(iterationPtr->name, nameToDelete) == 0)
        {
            printf("Found the name.\n");
            /**
             * If firstRec is the element that will be deleted that means it should equal
             * the value of the second structure whether NULL if its the only element
             * in the list or a value if there is a second value in the list 
            */
            if(firstRec == iterationPtr)
                firstRec = iterationPtr->nextAddr;
            prevPointer->nextAddr = iterationPtr->nextAddr;
            iterationPtr = iterationPtr->nextAddr;
            return;
        }
            
        prevPointer = iterationPtr;
        iterationPtr = iterationPtr->nextAddr;
        
    }

    if(iterationPtr == NULL)
        printf("The name %s was not found.\n", nameToDelete);
}