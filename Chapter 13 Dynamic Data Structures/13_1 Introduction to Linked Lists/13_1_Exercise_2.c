/**
 * Enter and execute Program 13.2
*/

#include <stdio.h>
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

    first = &t1;        /* store t1's address in first */
    t1.nextaddr = &t2;  /* store t2's address in t1.nextaddr */
    t2.nextaddr = &t3;  /* store t3's address in t2.nextaddr */
    t3.nextaddr = NULL; /* store the NULL address in t3.nextaddr */

    printf("%s\n%s\n%s\n", first->name, t1.nextaddr->name, t2.nextaddr->name);

    return 0;
}