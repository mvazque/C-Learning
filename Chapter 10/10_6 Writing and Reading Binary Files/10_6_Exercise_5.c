/**
 * Write, compile, and run a C program that creates a binary file named grades.bin and writes
 * the following five lines of data to the file:
 * 
 * 90.3 92.7 90.3 99.8
 * 85.3 90.5 87.3 90.8
 * 93.2 88.4 93.8 75.6
 * 82.4 95.6 78.2 90.0
 * 93.5 80.2 92.9 94.4
 * 
 * Using the data in the file, write, compile and run a C program that reads, computes and displays
 * the average of each group of four grades.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 5
#define COLS 4

int main()
{
    void writeData(char[]);
    void averageData(char[]);
    char fileName[] = "grades.bin";
    writeData(fileName);
    averageData(fileName);
}

void writeData(char fileName[])
{
    float grades[ROWS][COLS] = {
        {90.3, 92.7, 90.3, 99.8},
        {85.3, 90.5, 87.3, 90.8},
        {93.2, 88.4, 93.8, 75.6},
        {82.4, 95.6, 78.2, 90.0},
        {93.5, 80.2, 92.9, 94.4}
    };
    FILE *writeFile = fopen(fileName, "wb");

    for(int i = 0; i < ROWS; i++)
    {
        fwrite(&grades[i], sizeof(grades[i]), COLS, writeFile);
    }

    fclose(writeFile);
}

void averageData(char fileName[])
{
    FILE *readFile = fopen(fileName, "rb");
    float grades[ROWS][COLS], num1, num2, num3, num4;

    for(int i = 0; i < ROWS; i++)
    {
        fwrite(&grades[i], sizeof(grades[i]), COLS, readFile);
        num1 = grades[i][0];
        num2 = grades[i][1];
        num3 = grades[i][2];
        num4 = grades[i][3];
        printf("Numbers %.2f, %.2f, %.2f, %.2f\n", num1, num2, num3, num4);
        printf("The average value is %.2f\n\n", (num1 + num2 + num3 + num4) / 4);
    }

    fclose(readFile);
}