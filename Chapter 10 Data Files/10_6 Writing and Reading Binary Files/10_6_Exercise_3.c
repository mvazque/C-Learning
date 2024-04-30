/**
 * Write, compile and run a C program that writes the numbers 92.65, 88.72, 77.46, and 82.93
 * as double-precision values to a binary file named results.bin. After writing the data to the
 * file, the program should read the data from the file, determine the average of the
 * four numbers read and display the average. Verify the output produced by the program by 
 * manually calculating the average of the four input numbers
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[] = "exercise3.bin";
    FILE *outFile;
    double num1 = 92.65;
    double num2 = 88.72;
    double num3 = 77.46;
    double num4 = 82.93;

    outFile = fopen(fileName, "wb");

    if(outFile == NULL)
    {
        printf("\nThe file %s was not successfully opened.\n", fileName);
        exit(1);
    }

    fwrite(&num1, sizeof(num1), 1, outFile);
    fwrite(&num2, sizeof(num2), 1, outFile);
    fwrite(&num3, sizeof(num3), 1, outFile);
    fwrite(&num4, sizeof(num4), 1, outFile);

    fclose(outFile);

    FILE *inFile = fopen(fileName, "rb");
    double readNum1, readNum2, readNum3, readNum4;
    fread(&readNum1, sizeof(readNum1), 1, inFile);
    fread(&readNum2, sizeof(readNum2), 1, inFile);
    fread(&readNum3, sizeof(readNum3), 1, inFile);
    fread(&readNum4, sizeof(readNum4), 1, inFile);

    printf("The four numbers are %.2f, %.2f, %.2f, %.2f.\n", readNum1, readNum2, readNum3, readNum4);
    printf("The average value is %.2f\n", (readNum1 + readNum2 + readNum3 + readNum4)/ 4.0);
}