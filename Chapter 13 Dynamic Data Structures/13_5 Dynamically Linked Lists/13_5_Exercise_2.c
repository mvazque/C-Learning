/**
 * Write a function named modify() that can be used to modify the name member of the
 * structures created in Program 13.7. The argument passed to modify should be the address
 * of the structure to be modified. The modify function should first display the existing
 * name in the selected structure and then request new data for this member.
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
    void findRecord();

    firstRec = NULL;    /* initialize list pointer*/
    readInsert();
    display();

    findRecord();
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
    int counter = 0;

    contents = firstRec;
    printf("\nThe names currently in the list, in alphabetical");
    printf("\norder, are:\n");
    while(contents != NULL) /* display till end of list */
    {
        printf("%d. %s\n", counter++, contents->name);
        contents = contents->nextAddr;
    }
}

void findRecord()
{
    void modify(struct NameRec *);
    char userInput[MAXCHARS];
    int index;
    struct NameRec *tempRec = firstRec;

    printf("Please provide the index of the record you would like to modify:\n");
    scanf("%d", &index);

    for(int i = 0; i < index; i++)
    {
        tempRec = tempRec->nextAddr;
    }

    modify(tempRec);
}


void modify(struct NameRec *recordToModify)
{
    void insert(char *name);
    void delete(char *nameToDelete);
    char inputVal[MAXCHARS];
    
    getchar();

    printf("The record, currently has name %s\n", recordToModify->name);
    printf("Please provide a new value for the name: ");

    fgets(inputVal, MAXCHARS, stdin);
    inputVal[strlen(inputVal) - 1] = '\0';

    delete(recordToModify->name);
    insert(inputVal);
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