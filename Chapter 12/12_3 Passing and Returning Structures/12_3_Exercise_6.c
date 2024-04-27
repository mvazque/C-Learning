/**
 * Rewrite Program 10.10 to read the Holidays.txt file into an array of structures where each
 * individual structure consists of an integer day, month, and year member.
*/

#include <stdio.h>
#include <stdlib.h>
#define HOLIDAYS 20

struct Date
{
    int year;
    int month;
    int day;
};

struct Date holidays[HOLIDAYS];

int main()
{
    int getHolidays();
    int i, numHolidays;

    numHolidays = getHolidays();

    printf("The Holiday array contains %d holidays\n", numHolidays);
    printf(" and contains the elements:\n");
    for(i = 0; i < numHolidays; i++)
        printf("%d/%d/%d\n", holidays[i].month, holidays[i].day, holidays[i].year);
    
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
    {
        holidays[i].year = yr;
        holidays[i].month = mo;
        holidays[i].day = day;
        i++;
    }
    
    fclose(inFile);

    return i;
}