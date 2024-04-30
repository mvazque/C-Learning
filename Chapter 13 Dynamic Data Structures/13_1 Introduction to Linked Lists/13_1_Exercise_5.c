/**
 * A double linked list is a list in which each structure contains a pointer to both the 
 * following and previous structures in the list. Define an appropriate template for a doubly
 * linked list of names and telephone numbers
 * 
 * Using the template defined, modify program 13.3 to list the names and phone numbers in
 * reverse order
*/



#include <stdio.h>
#include <string.h>
#define MAXNAME 30
#define MAXPHONE 15

struct DoublyLinkedList
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct DoublyLinkedList *prevaddr;
    struct DoublyLinkedList *nextaddr;
};

typedef struct DoublyLinkedList TeleType;

int main()
{
    TeleType t1 = {"Acme, Sam", "(555) 898-2392"};
    TeleType t2 = {"Dolan, Edith", "(555) 682-3104"};
    TeleType t3 = {"Landfrank, John", "(555) 718-4581"};
    TeleType *first; /* Create a pointer to a structure */
    TeleType *last; /* Create a pointer to a structure */
    void display(TeleType *);
    void displayReverse(TeleType *);

    first = &t1;        /* store t1's address in first */
    last = &t3;
    t1.nextaddr = &t2;  /* store t2's address in t1.nextaddr */
    t2.nextaddr = &t3;  /* store t3's address in t2.nextaddr */
    t3.nextaddr = NULL; /* store the NULL address in t3.nextaddr */

    t1.prevaddr = NULL;  /* store t2's address in t1.nextaddr */
    t2.prevaddr = &t1;  /* store t3's address in t2.nextaddr */
    t3.prevaddr = &t2; /* store the NULL address in t3.nextaddr */

    display(first);
    printf("Now in reverse.\n");
    displayReverse(last);


    return 0;
}

void display(TeleType *contents)
{
    while(contents != NULL)
    {
        printf("%-30s %-20s\n", contents->name, contents->phoneNum);
        contents = contents->nextaddr;
    }
}

void displayReverse(TeleType *contents)
{
    while(contents != NULL)
    {
        printf("%-30s %-20s\n", contents->name, contents->phoneNum);
        contents = contents->prevaddr;
    }
}
