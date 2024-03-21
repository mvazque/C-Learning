/**
 * Enter and execute Program 10.2 on your computer
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char response;
    FILE *outFile;
    
    outFile = fopen("prices.dat", "r"); /* open the file having the external name prices.dat*/

    if(outFile != NULL) /* check for a successful open */
    {
        printf("\nA file by the name prices.dat exists.");
        printf("\nDo you want to continue and overwrite it");
        printf("\n with the new data (y or n):");
        scanf("%c", &response);

        if(response == 'n')
        {
            printf("\nThe existing file will not be overwritten.\n");
            exit(1);
        }
    }

    outFile = fopen("prices.dat", "w"); /* now open the file for writing */

    if(outFile == NULL) /* check for an unsuccessful opening */
    {
        printf("\nThe file was not successfully opened.\n");
        exit(1);
    }

    printf("\nThe file has been successfully opened for output.\n");

    return 0;
}