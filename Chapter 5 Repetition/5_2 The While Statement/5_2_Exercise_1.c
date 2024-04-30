/**
 * Rewrite program 5.1 to print the numbers 2 to 10 in increments of two. The output
 * of your program should be
 * 
 * 2 4 6 8 10
*/

#include <stdio.h>

int main()
{
    int count = 2;
    while(count <= 10)
    {
        printf("%d ", count);
        count += 2;
    }

    printf("\n");
    
    return 0;
}