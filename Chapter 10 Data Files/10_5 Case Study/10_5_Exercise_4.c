/**
 * Pollen count readings, which are taken from August through September in hte northeastern region
 * of the United States, measure the number of ragweed pollen grains in the air. Pollen counts in
 * the range of 10 to 200 grains per cubic meter of air are typical during this time of year. Pollen
 * counts above 10 begin to affect a small percentage of hay fever sufferers, counts in hte range 
 * of 30 to 40 will noticeably bother approximately 30 percent of hay fever sufferers, and counts
 * between 40 and 50 adversely affect more than 60 percent of all hay fever sufferers.
 * 
 * Write a C program that updates a file containing the 10 most recent pollen counts. Add each
 * new count to the end of the file. As you add a new count to the end of the file, delete the
 * oldest count, which is the first value in the file. Your program should also calculate and 
 * display the averages of the data for the old and new files.
 * 
 * To test your program, first create a file named Pollen.dat that contains the following pollen 
 * count data: 30, 60, 40, 80, 90, 120, 150, 130, 160, 170. Here the first value, 30 corresponds
 * to the oldest pollen count and the last value 170 corresponds to the most recent pollen count
 * The pseudo code for the file update program is
 * 
 * Display a message indicating what the program does
 * Request the name of the data file
 * Request a new pollen count reading
 * Open the data file as an input file
 * Do for 10 data items
 *  Read a value into an array
 *  Add the value to a total
 * EndDo
 * Close the file
 * Open the file as an output file
 * Calculate and display the old 10-day average
 * Calculate and display the new 10-day average
 * Write the nine most recent pollen counts from the array to the file
 * Write the new pollen count to the file
 * Close the file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMPOLLENCOUNTS 10
#define NUMELEM 80

int firstElem, runningTotal = 0;
int pollenCounts[NUMPOLLENCOUNTS];

int main()
{
    void getData(char[]);
    void displayAverages(int);
    void saveData(char[]);

    char filename[NUMELEM];
    int newPollenCount;

    printf("This program will update the provided file to maintain the 10 most recent pollen counts.\n");
    printf("User will need to provide the file name and the new pollen count.\n");
    printf("Program will also show the previous average pollen count and the new average pollen count.\n");


    printf("Please provide the name of the file to interact with: ");
    fgets(filename, NUMELEM, stdin);
    filename[strlen(filename) - 1] = '\0';

    printf("Please provide the new pollen count value: ");
    scanf("%d", &newPollenCount);

    getData(filename);

    pollenCounts[NUMPOLLENCOUNTS - 1] = newPollenCount;

    displayAverages(newPollenCount);
    saveData(filename);

}

/**
 * Gets the data from the designated file. Will save the items to an array and keep track
 * of the element that will be removed.
 * @param filename: The name of the file to try and read
*/
void getData(char filename[])
{
    FILE *readFile = fopen(filename, "r");

    if(NULL == readFile)
    {
        printf("File %s not found.\n", filename);
        exit(1);
    }

    fscanf(readFile, "%d", &firstElem);

    for(int i = 0; i < NUMPOLLENCOUNTS; i++)
    {
        fscanf(readFile, "%d", &pollenCounts[i]);
        runningTotal += pollenCounts[i];
    }

    fclose(readFile);
}

/**
 * Displays the average of the previous pollen counts and the new pollen counts
 * @param newCount: The new pollen count that was provided by the user
*/
void displayAverages(int newCount)
{
    int countToShow = runningTotal + firstElem;

    printf("Previous pollen count average: %.2f\n", countToShow/10.0);

    countToShow = runningTotal + newCount;
    printf("New pollen count average: %.2f\n", countToShow/10.0);
}

/**
 * Saves the pollen counts to the designated file.
 * @param filename: The name of the file to write to.
*/
void saveData(char fileName[])
{
    FILE *writeFile = fopen(fileName, "w");
    char countStr[NUMELEM];

    for(int i = 0; i < NUMPOLLENCOUNTS; i++)
    {
        sprintf(countStr, "%d\n", pollenCounts[i]);
        fputs(countStr, writeFile);
    }

    fclose(writeFile);
}