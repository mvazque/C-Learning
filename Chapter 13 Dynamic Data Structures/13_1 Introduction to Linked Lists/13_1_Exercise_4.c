/** 
 * Write a program containing a linked list of 10 integer numbers. Have the program display the
 * numbers in the list.
*/

#include <stdio.h>

struct IntList
{
    int num;
    struct IntList *nextInt;
};

typedef struct IntList Int_List;

int main()
{
    void printNums(Int_List *);
    Int_List listNum0 = {0};
    Int_List listNum1 = {1};
    Int_List listNum2 = {2};
    Int_List listNum3 = {3};
    Int_List listNum4 = {4};
    Int_List listNum5 = {5};
    Int_List listNum6 = {6};
    Int_List listNum7 = {7};
    Int_List listNum8 = {8};
    Int_List listNum9 = {9};
    Int_List *first = &listNum0;

    listNum0.nextInt = &listNum1;
    listNum1.nextInt = &listNum2;
    listNum2.nextInt = &listNum3;
    listNum3.nextInt = &listNum4;
    listNum4.nextInt = &listNum5;
    listNum5.nextInt = &listNum6;
    listNum6.nextInt = &listNum7;
    listNum7.nextInt = &listNum8;
    listNum8.nextInt = &listNum9;
    listNum9.nextInt = NULL;

    printNums(first);

}

void printNums(Int_List *listNum)
{
    while(listNum != NULL)
    {
        printf("%d\n", listNum->num);
        listNum = listNum->nextInt;
    }
}