/**
 * Modify program 13.3 to prompt the user for a name. Have the program search the existing list for 
 * the entered name. If the name is in the list, display the corresponding phone number; 
 * otherwise display the message: 
 * The name is not in the current phone directory.
*/

#include <stdio.h>
#include <string.h>
#define MAXNAME 30
#define MAXPHONE 15

struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType *nextaddr;
};

int main()
{
    struct TeleType t1 = {"Acme, Sam", "(555) 898-2392"};
    struct TeleType t2 = {"Dolan, Edith", "(555) 682-3104"};
    struct TeleType t3 = {"Landfrank, John", "(555) 718-4581"};
    struct TeleType *first; /* Create a pointer to a structure */
    void display(struct TeleType *);
    int findName(struct TeleType *, char []);
    char inputName[MAXNAME];

    printf("Please provide a name to look up in the directory (last, first): ");
    fgets(inputName, MAXNAME, stdin);
    inputName[strlen(inputName) - 1] = '\0';

    first = &t1;        /* store t1's address in first */
    t1.nextaddr = &t2;  /* store t2's address in t1.nextaddr */
    t2.nextaddr = &t3;  /* store t3's address in t2.nextaddr */
    t3.nextaddr = NULL; /* store the NULL address in t3.nextaddr */

    // display(first);

    if(!findName(first, inputName))
    {
        printf("The name is not in the current phone directory.\n");
    }

    return 0;
}

void display(struct TeleType *contents)
{
    while(contents != NULL)
    {
        printf("%-30s %-20s\n", contents->name, contents->phoneNum);
        contents = contents->nextaddr;
    }
}

int findName(struct TeleType *teleInfo, char name[])
{
    while(teleInfo != NULL)
    {
        if(strcmp(name, teleInfo->name) == 0)
        {
            printf("%-30s %-20s\n", teleInfo->name, teleInfo->phoneNum);
            return 1;
        }
            
        teleInfo = teleInfo->nextaddr;
    }

    return 0;
}