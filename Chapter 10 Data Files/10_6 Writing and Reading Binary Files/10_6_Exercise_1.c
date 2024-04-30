/**
 * Enter and execute Program 10.12. Once the prices.bin file has been written, execute Program
 * 10.12 a second time to verify that it does not overwrite the existing file without your
 * permission
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char response;
    char filename[20] = "prices.bin";
    FILE *outFile;
    int num1 = 125;
    long num2 = -125;
    double num3 = 1.08;

    /* check that a file by the given name does not already exist */
    outFile = fopen(filename, "r");
    if(outFile != NULL)
    {
        printf("\nA file by the name %s exists.", filename);
        printf("\nDo you want to continue and overwrite it");
        printf("\n with the new data (y or n): ");
        scanf("%c", &response);
        if(response == 'n')
        {
            printf("\nThe existing file %s will not be overwritten.\n", filename);
            fclose(outFile);
            exit(1);
        }
    }

    /* okay to proceed */
    outFile = fopen(filename, "wb"); /* now open the file for writing*/
    
    if(outFile == NULL)
    {
        printf("\nThe file %s was not successfully opened.\n", filename);
        exit(1);
    }

    /* Write to the file */
    fwrite(&num1, sizeof(num1), 1, outFile);
    fwrite(&num2, sizeof(num2), 1, outFile);
    fwrite(&num3, sizeof(num3), 1, outFile);

    fclose(outFile);
    printf("\nThe file %s has successfully been written as a binary file.\n", filename);

    return 0;
}