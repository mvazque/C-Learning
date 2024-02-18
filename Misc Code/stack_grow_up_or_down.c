/*
    This code will indicate whether you computer architecture grows up or down
    Up meaning new items in stack have a higher address than previous
    Down meaning new items in stack have a lower address than previous
*/
#include <stdio.h>
#include <stdbool.h>

/**
 * This code works recursively. 
 * It creates a variable x
 * If there is no previous pointer to compare it will call itself and pass the pointer of the x variable
 * If there is a previous pointer it will compare the previous pointer to the pointer of the new
 * variable and return a comparison of the two addresses
*/
bool upOrDown( int *ptr )
{
    int x = 0;

    if(!ptr)
    {
        return upOrDown(&x);
    }
    return(&x > ptr);
}

/**
 * Will call upOrDown function and print the results for the user to read.
*/
int main(void)
{
    printf("The stack grows in the direction %s\n", upOrDown(NULL) ? "UP" : "DOWN");
    return 0;
}
