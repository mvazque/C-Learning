/**
 * Create a file containing the following data:
 * 
 * H.Baker 614 Freeman St. Orange NJ
 * D.Rosso 83 Chambers St. Madison NJ
 * K.Tims 891 Ridgewood Rd. Millburn NJ
 * B.Williams 24 Tremont Ave. Brooklyn NY
 * 
 * Write a program to read and display the data file created using the following output format
 * 
 * Name:
 * Address
 * City, State:
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    #define NUMELEM 80
    void formattedPrint(char[]);
    FILE *readFile = fopen("exercise5.dat", "r");

    if(readFile == NULL)
    {
        printf("File was not found.\n");
        exit(1);
    }

    char fileLine[NUMELEM];

    while(fgets(fileLine, 80, readFile)!= NULL)
        formattedPrint(fileLine);

}

void formattedPrint(char str1[])
{
    char *tok;
    int count = 1;
    tok = strtok(str1, " ");
    while(tok != NULL)
    {
        switch (count)
        {
        case 1:
            printf("Name: %s\n", tok);
            break;
        case 2:
            printf("Address: %s ", tok);
            break;
        case 3:
            printf("%s ", tok);
            break;
        case 4: case 6:
            printf("%s\n", tok);
            break;
        case 5:
            printf("City, State: %s, ", tok);
            break;
        }
        
        count++;        
        tok = strtok(NULL, " ");
    }
}