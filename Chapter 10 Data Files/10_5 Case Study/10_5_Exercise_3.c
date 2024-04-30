/**
 * Create a function named setHolidays() that reads and displays the current list of holidays and
 * then lets the user change, add, or delete holidays from the list. After a holiday has been 
 * modified, the function should sort the holidays and display the new list. Finally, the function
 * should ask the user whether the new list should be saved; if the user responds affirmatively the
 * function should write the new data to the existing Holidays.txt file, overwriting the contents
 * of the existing file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define HOLIDAYS 80
#define NUMELEM 80

int htable[HOLIDAYS];
int numOfHolidays = 0;
char HolidayFile[] = "Holidays.txt";

void intToStringDate(int, char[]);
void saveHolidays();
void printHolidays(int[]);

void swap(int *, int *);
int partition(int[], int, int);
void quickSort(int[], int, int);

int main()
{
    void setHolidays();    
    setHolidays();
    return 0;
}

void setHolidays()
{
    void appendHoliday();
    void modifyHoliday();
    void deleteHoliday();
    int getHolidays();
    char userInput;

    printf("Current list of holidays");
    getHolidays();

    printf("Would you like to add new holidays (a), modify an existing holiday (m), or delete a holiday (d)? \n");
    userInput = getchar();
    getchar();
    switch (userInput)
    {
    case 'a':
        appendHoliday();
        break;
    case 'm':
        modifyHoliday();
        break;
    case 'd':
        deleteHoliday();
        break;
    }
}

int getHolidays()
{
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
        
    numOfHolidays = i;
    printHolidays(htable);
    fclose(inFile);
    return i;
}

/**
 * Prints all the holidays we in the mm/dd/yyyy format
 * @param holidays: Array of holidays in a single yyyymmdd integer format
*/
void printHolidays(int holidays[])
{
    int i = 0;
    int yr, mo, day, hol;
    char dateString[NUMELEM];
    while(holidays[i])
    {
        intToStringDate(holidays[i], dateString);
        printf("%3d: %s", i + 1, dateString);
        i++;
    }

}

void appendHoliday()
{
    #define DATESTRINGLEN 12
    FILE *appendFile;
    char holidayInput[DATESTRINGLEN];
    printf("Please provide a holiday in the mm/dd/yyyy format\n");
    fgets(holidayInput, DATESTRINGLEN, stdin);

    appendFile = fopen(HolidayFile, "a");
    fputs(holidayInput, appendFile);
}

void modifyHoliday()
{
    #define TRUE 1
    int indexInput;
    int mo, day, yr;
    char del1, del2;
    printf("Please provide the index of the number you would like to modify.\n");

    do
    {
        scanf("%d", &indexInput);
        if(indexInput <= 0 || indexInput > numOfHolidays)
        {
            printf("Invalid input, number must be between 1 and %d\n", numOfHolidays);
            continue;
        }
        break;
    } while (TRUE);

    printf("Please provide the modified date value (mm/dd/yyyy): ");
    scanf("%d%c%d%c%d", &mo, &del1, &day, &del2, &yr);
    getchar();

    htable[indexInput - 1] = yr * 10000 + mo * 100 + day;
    
    quickSort(htable, 0, numOfHolidays - 1);
    printHolidays(htable);

    char saveResponse;
    printf("Above is the updated list. Would you like to overwrite existing list? (y/n): ");
    scanf("%c", &saveResponse);

    if('y' == saveResponse || 'Y' == saveResponse)
    {
        saveHolidays();
        printf("List has been updated.\n");
    }
    else
    {
        printf("List will not be updated. Program will now terminate.\n");
    }
}

void deleteHoliday()
{
    int holidayIndex;
    char strVersion[NUMELEM];
    printf("Please provide the index of the of holiday you wish to delete from the table above.\n");
    scanf("%d", &holidayIndex);

    holidayIndex -= 1;
    for(int i = holidayIndex; i < numOfHolidays-1; i++)
    {
        printf("Did a change.\n");
        htable[i] = htable[i+1];
    }
    htable[numOfHolidays] = -1;
    numOfHolidays--;

    saveHolidays();
}

void saveHolidays()
{
    FILE *inFile = fopen(HolidayFile, "w");
    char dateString[NUMELEM];

    for(int i = 0; i < numOfHolidays; i++)
    {
        intToStringDate(htable[i],dateString);
        printf("%s", dateString);
        fputs(dateString, inFile);
    }

    fclose(inFile);
}

void intToStringDate(int date, char str[])
{
    int day, mo, yr;
    char strVersion[20];
    day = date % 100;
    date /= 100;

    mo = date % 100;
    date /= 100;

    yr = date;

    sprintf(str, "%d/%d/%d\n", mo, day, yr);

    // printf("String to add %s\n", str);
    
}




void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int nums[], int lowIndex, int highIndex)
{
    int i = lowIndex;
    int j = highIndex;
    int pivot = nums[lowIndex];

    while(i < j)
    {
        while(nums[i] <= pivot && i <= highIndex - 1)
            i++;
        
        while(nums[j] > pivot && j >= lowIndex + 1)
            j--;
        
        if(i < j)
            swap(&nums[i], &nums[j]);
    }

    swap(&nums[lowIndex], &nums[j]);

    return i;
}

void quickSort(int nums[], int lowIndex, int highIndex)
{
    if(lowIndex >= highIndex)
        return;

    int partitionIndex = partition(nums, lowIndex, highIndex);

    quickSort(nums, lowIndex, partitionIndex - 1);
    quickSort(nums, partitionIndex + 1, highIndex);
    
}