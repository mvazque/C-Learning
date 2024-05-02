/**
 * Add a menu function to Program 13.5 that gives the user a choice of adding a name to the
 * stack, removing a name from the stack, or listing the contents of the stack without 
 * removing any structures from it.
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
    void printStack(struct NameRec *);

    tosp = NULL;    /* initialize the top-of-stack pointer */
    // readPush();
    // popShow();

    char input;

    do
    {
        printf("What would you like to do PUSH(w), POP(r), Print Stack (p), exit(x):");
        input = getc(stdin);
        getc(stdin);

        switch (input)
        {
            case 'w': case 'W':
                readPush();
                break;
            case 'r': case 'R':
                popShow();
                break;
            case 'p': case 'P':
                printStack(tosp);
                break;
            case 'x': case 'X':
                exit(1);
                break;
            default:
                printf("Invalid input.\n");
                break;
        }
    } while (input != 'x');
    

    return 0;
}

/* get a name and push it onto the stack */
void readPush()
{
    char name[MAXCHARS];
    void push(char *);

    // printf("Enter as many names as you wish, one per line");
    // printf("\nTo stop entering names, enter a single x\n");
    // while(1)
    // {
        printf("Enter a name: ");
        fgets(name, MAXCHARS, stdin);
        name[strlen(name) - 1] = '\0';
        // if(strcmp(name, "x") == 0)
        //     break;
        push(name);
    // }
}

/* pop and display names from the stack */
void popShow()
{
    char name[MAXCHARS];
    void pop(char *);

    printf("\nThe name popped from the stack are:\n");
    if(tosp == NULL)
    {
        printf("Nothing on stack to pop.\n");
        return;
    }

    pop(name);
    printf("%s\n", name);
}

void push(char *name)
{
    struct NameRec *newaddr; /* pointer to structure of type NameRec */
    if(DEBUG)
        printf("Before the push the address in tosp is %p", tosp);

    newaddr = (struct NameRec *) malloc(sizeof(struct NameRec));
    if(newaddr == (struct NameRec *) NULL)
    {
        printf("\nFailed to allocate memory for this structure\n");
        exit(1);
    }
    strcpy(newaddr->name, name);    /* store the name */
    newaddr->priorAddr = tosp;      /* store address of prior structure */
    tosp = newaddr;                 /* update the top-of-stack pointer */

    if(DEBUG)
        printf("\n After the push the address in tosp is %p\n", tosp);
}

void pop(char *name)
{
    struct NameRec *tempAddr;

    if(DEBUG)
        printf("Before the pop the address in tosp is %p\n", tosp);
    
    strcpy(name, tosp->name);       /* retrieve the name from the top-of-stack */
    tempAddr = tosp->priorAddr;     /* retrieve the prior address */
    free(tosp);                     /* release the structure's memory space */
    tosp = tempAddr;                /* update the top-of-stack pointer */

    if(DEBUG)
        printf(" After the pop the address in tosp is %p\n", tosp);
}

void printStack(struct NameRec *nameRecord)
{
    if(nameRecord == (struct NameRec*) NULL)
    {
        printf("Empty Stack\n");
        return;
    }
    while(nameRecord != NULL)
    {
        puts(nameRecord->name);
        nameRecord = nameRecord->priorAddr;
    }
}
