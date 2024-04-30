/**
 * Store the following data in a file
 * 
 * 5 96 87 78 93 21 4 92 82 85 87 6 72 69 85 75 81 73
 * 
 * Write a C program to calculate and display the average of each group of numbers in the file
 * created. The data is arranged in the file so that each group of numbers is preceded by the number
 * of data items in the group. Thus the first number in the file, 5, indicates that the next five
 * numbers should be grouped together. The number 4 indicates that the following four numbers are
 * a group, and the 6 indicates that the last six numbers are a group. 
 * (Hint: Use a nested loop, The outer loop should terminate when the EOF marker is encountered)
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define NUMELEM 20
    char fileName[NUMELEM] = "exercise10.dat";
    FILE *readFile = fopen(fileName, "r");

    if(readFile == NULL)
    {
        printf("File %s was not found.\n", fileName);
        exit(1);
    }
    int numInGroup, groupLabel = 1;    
    while(fscanf(readFile, "%d", &numInGroup) == 1)
    {
        int sum = 0, num;
        for(int i = 0; i < numInGroup; i++)
        {
            fscanf(readFile, "%d", &num);
            sum += num;
        }
        printf("Group %d average: %.2f\n", groupLabel, (float) sum / numInGroup);
        groupLabel++;
    }
    
}
