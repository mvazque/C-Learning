/**
 * Write, compile, and execute a C program that creates a binary file named points and writes the
 * following numbers to the file:
 * 
 * 6.3  8.2 18.25   24.32
 * 4.0  4.0 10.0    -5.0
 * -2.0 5.0 4.0     5.0
 * 
 * Using the data in the points file created above, write, compile and run a C program that reads
 * four numbers using a for loop and interprets the first and second numbers in each record as the
 * coordinates of one point and the third and fourth numbers as the coordinates of a second point.
 * Have the program compute and display the slope and midpoint of each pair of entered points.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void computeSlopeAndMid(double[]);
    char fileName[] = "points.bin";
    FILE *outfile = fopen(fileName, "wb");

    if(outfile == NULL)
    {
        printf("File was not properly set up for write.\n");
        exit(1);
    }

    double set1[4] = {6.3, 8.2, 18.25, 24.32};
    double set2[4] = {4.0, 4.0, 10.0, -5.0};
    double set3[4] = {-2.0, 5.0, 4.0, 5.0};

    fwrite(&set1, sizeof(set1), 4, outfile);
    fwrite(&set2, sizeof(set2), 4, outfile);
    fwrite(&set3, sizeof(set3), 4, outfile);

    fclose(outfile);

    FILE *inFile = fopen(fileName, "rb");

    fread(&set1, sizeof(set1), 4, inFile);
    fread(&set2, sizeof(set2), 4, inFile);
    fread(&set3, sizeof(set3), 4, inFile);

    computeSlopeAndMid(set1);
    computeSlopeAndMid(set2);
    computeSlopeAndMid(set3);

    fclose(inFile);
}

void computeSlopeAndMid(double coordinates[4])
{
    double x1 = coordinates[0];
    double y1 = coordinates[1];
    double x2 = coordinates[2];
    double y2 = coordinates[3];

    double slope = (y2-y1) / (x2-x1);
    double midpointX = (x2 + x1) / 2.0;
    double midpointY = (y2 + y1) / 2.0;

    printf("For coordinates (%.2lf, %.2lf) and (%lf, %lf)\n", x1, y1, x2, y2);
    printf("The slope is %.2lf\n", slope);
    printf("The midpoint is (%.2lf, %.2lf)\n\n", midpointX, midpointY);

}
