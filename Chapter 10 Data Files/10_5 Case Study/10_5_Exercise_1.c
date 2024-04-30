/**
 * Enter, compile, and execute Program 10.10
*/

#include <stdio.h>
#include <stdlib.h>
#define HOLIDAYS 20
int htable[HOLIDAYS];

int main()
{
    int getHolidays();
    int i, numHolidays;

    numHolidays = getHolidays();

    printf("The Holiday array contains %d holidays\n", numHolidays);
    for(i = 0; i < numHolidays; i++)
        printf("%d\n", htable[i]);

    return 0;
}

int getHolidays()
{
    char HolidayFile[] = "Holidays.txt";
    int i = 0;
    int mo, day, yr;
    char del1, del2;
    FILE *inFile;

    inFile = fopen(HolidayFile, "r");
    if(inFile == NULL)
    {
        printf("\nFailed to open the file.\n");
        exit(1);
    }

    while(fscanf(inFile, "%d%c%d%c%d", &mo, &del1, &day, &del2, &yr) != EOF)
        htable[i++] = yr * 10000 + mo * 100 + day;
        

    fclose(inFile);
    return i;
}