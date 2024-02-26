/**
 * Write a program that tests the effectiveness of the rand() function provided by your compiler.
 * Start by initializing 10 counters such as onescount, twoscount to tenscount, all to 0. Then
 * generate a large number of random integers between 1 and 10. Each time a 1 occurs increment
 * onescount; when a 2 occurs, increment twoscount; etc. Finally print out hte number of 1s, 2s, etc
 * that occurred and the percentage of time each number occurred.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    #define NUMOFINTEGERS 10000
    int onesCount = 0, twosCount = 0, threesCount = 0, foursCount = 0, fivesCount = 0;
    int sixesCount = 0, sevensCount = 0, eightsCount = 0, ninesCount = 0, tensCount = 0;
    int randNumber;

    srand(time(NULL));

    for(int i = 0; i < NUMOFINTEGERS; i++)
    {
        randNumber = 1 + (int)rand() % 10;
        switch (randNumber)
        {
        case 1:
            onesCount++;
            break;
        case 2:
            twosCount++;
            break;
        case 3:
            threesCount++;
            break;
        case 4:
            foursCount++;
            break;
        case 5:
            fivesCount++;
            break;
        case 6:
            sixesCount++;
            break;
        case 7:
            sevensCount++;
            break;
        case 8:
            eightsCount++;
            break;
        case 9:
            ninesCount++;
            break;
        case 10:
            tensCount++;
            break;
        } 
    }

    printf("NUMBER   TIMES CALLED   PERCENTAGE\n");
    printf("  1         %5d       %8.3f%%\n", onesCount, 100.0 * (float) onesCount / NUMOFINTEGERS);
    printf("  2         %5d       %8.3f%%\n", twosCount, 100.0 * (float) twosCount / NUMOFINTEGERS);
    printf("  3         %5d       %8.3f%%\n", threesCount, 100.0 * (float) threesCount / NUMOFINTEGERS);
    printf("  4         %5d       %8.3f%%\n", foursCount, 100.0 * (float) foursCount / NUMOFINTEGERS);
    printf("  5         %5d       %8.3f%%\n", fivesCount, 100.0 * (float) fivesCount / NUMOFINTEGERS);
    printf("  6         %5d       %8.3f%%\n", sixesCount, 100.0 * (float) sixesCount / NUMOFINTEGERS);
    printf("  7         %5d       %8.3f%%\n", sevensCount, 100.0 * (float) sevensCount / NUMOFINTEGERS);
    printf("  8         %5d       %8.3f%%\n", eightsCount, 100.0 * (float) eightsCount / NUMOFINTEGERS);
    printf("  9         %5d       %8.3f%%\n", ninesCount, 100.0 * (float) ninesCount / NUMOFINTEGERS);
    printf(" 10         %5d       %8.3f%%\n", tensCount, 100.0 * (float) tensCount / NUMOFINTEGERS);
    
}
