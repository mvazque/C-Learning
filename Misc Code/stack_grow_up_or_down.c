#include <stdio.h>
#include <stdbool.h>

bool upOrDown( int *ptr )
{
    int x = 0;

    if(!ptr)
    {
        return upOrDown(&x);
    }
    return(&x > ptr);
}

int main(void)
{
    printf("The stack grows in the direction %s\n", upOrDown(NULL) ? "UP" : "DOWN");
    return 0;
}
