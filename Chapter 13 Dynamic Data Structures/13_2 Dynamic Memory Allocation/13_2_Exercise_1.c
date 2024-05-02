/**
 * Enter and Execute Program 13.4
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numgrades, i;
    int *grades;

    printf("\nEnter the number of grades to be processed: ");
    scanf("%d", &numgrades);

    /* here is where the request for memory is made */
    grades = (int *) malloc(numgrades * sizeof(int));

    /* here we check that the allocation was satisfied */
    if(grades == (int *) NULL)
    {
        printf("\n Failed to allocate grades array\n");
        exit(1);
    }

    for(i = 0; i < numgrades; i++)
    {
        printf("  Enter a grade: ");
        scanf("%d", &grades[i]);
    }

    printf("\nAn array was created for %d integers", numgrades);
    printf("\nThe values stored in the array are:\n");

    for(i = 0; i < numgrades; i++)
        printf(" %d\n", grades[i]);
    
    free(grades);

    return 0;
}