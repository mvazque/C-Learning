/**
 * Enter and execute Program 10.11 on your computer
*/

#include <stdio.h>
#include <stdlib.h>
#define HOLIDAYS 20
int htable[HOLIDAYS];

int main()
{
    int isHoliday(int);
    int mo, day, yr, testDate;

    printf("Enter a month, day and year: ");
    scanf("%d %d %d", &mo, &day, &yr);
    testDate = yr * 10000 + mo * 100 + day;

    if(isHoliday(testDate))
        printf("This date is a holiday.\n");
    else
        printf("This date is not a holiday.\n");
    
    return 0;
}

int isHoliday(int testDate)
{
    #define TRUE 1
    #define FALSE 0
    int getHolidays();
    int i;

    if(htable[0] == 0)
        getHolidays();
    
    for(i = 0; i < HOLIDAYS; i++)
        if(testDate == htable[i])
            return TRUE;
        
    
    return FALSE;
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