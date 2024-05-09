/**
 * Write a C program that initially presents a menu of choices for the user. The menu should
 * consist of the following choices
 * 
 * a. Create an initial linked list of names.
 * b. Insert a new structure into the linked list.
 * c. Modify an existing structure in the linked list.
 * d. Delete an existing structure from the list.
 * e. Exit the program.
 * 
 * Upon the user's selection, the program should execute the appropriate functions to
 * satisfy the request
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXCHARS 30
#define DEBUG 0

void insert(char *);

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
    void menuControl();

    firstRec = NULL;    /* initialize list pointer*/
    menuControl();
    return 0;
}

void menuControl()
{
    void initializeList();
    void display();
    void readInsert();
    void findRecordToModify();
    void processDelete();

    char userInput;
    do
    {
        printf("What would you like to do?\n");
        printf("Initialize a Linked List (i)\n");
        printf("Insert a new structure (n)\n");
        printf("Read the current list (r)\n");
        printf("Modify an existing structure (m)\n");
        printf("Delete an existing structure from the list (d)");
        printf("Exit this program (x)\n");
        printf("\n\nEnter command here: ");

        userInput = getchar();
        getchar();

        switch (tolower(userInput))
        {
            case 'i':
                initializeList();
                break;
            case 'n':
                readInsert();
                break;
            case 'm':
                findRecordToModify();
                break;
            case 'd':
                processDelete();
                break;
            case 'r':
                display();
                break;
            case 'x':
                return;
                break;
        }
    } while (1);
    
    
}

void initializeList()
{
    insert("John");
    insert("Jane");
    insert("Janice");
}

/* get a name and insert it into the linked list */
void readInsert()
{
    char name[MAXCHARS];

    printf("Enter a name: ");
    fgets(name, MAXCHARS, stdin);
    name[strlen(name)-1] = '\0';
    insert(name);
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
    int itemCounter = 0;
    char tempStr[20];
    contents = firstRec;
    printf("\nThe names currently in the list, in alphabetical");
    printf("\norder, are:\n");
    while(contents != NULL) /* display till end of list */
    {
        printf("%d. %s\n", itemCounter++, contents->name);
        contents = contents->nextAddr;
    }

    printf("Press enter/return to continue.");
    fgets(tempStr, 20, stdin);
}

void findRecordToModify()
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
 * Handles the delete options for the linked list
*/
void processDelete()
{
    char name[MAXCHARS];
    void delete(char *);
    printf("Enter a name to delete: ");
    fgets(name, MAXCHARS, stdin);
    name[strlen(name)-1] = '\0';
    delete(name);
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