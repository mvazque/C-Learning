/**
 * The following data wre collected on a recent automobile trip
 * 
 * Mileage                     Gallons              MPG         Total Gallons   Cul. MPG
 * 22495 (Start of trip)        Full Tank
 * 22841                        12.2                28.361      12.2            28.361
 * 23185                        11.3                30.442      23.5            29.362
 * 23400                        10.5                20.476      34              26.618
 * 23772                        11.0                33.818      45              28.378
 * 24055                        12.2                23.197      57.2            27.273
 * 24434                        14.7                25.782      71.9            26.968
 * 24804                        14.3                25.874      86.2            26.787
 * 25276                        15.2                31.053      101.4           27.426
 * 
 * 
 * Write a C program that accepts a mileage and gallons value and calculates the mpg achieved for
 * that segment of the trip. The mpg is obtained as the difference in mileage between fill-ups 
 * divided by the number of gallons of gasoline received in the fill-up.
 * 
 * 
 * Modify the program written for the above exercise to additionally compute and display the 
 * cumulative mpg achieved after each fill-up. The cumulative MPG is calculated as the difference
 * between each fill-up mileage and the mileage at the start of the trip divided by the sum
 * of the gallons used to that point in the trip
*/

#include <stdio.h>

int main(void)
{
    float mileage1, mileage2, gallons, gallonsSum = 0.0, initialMileage;

    printf("To end this program provide a negative value for the mileage input.\n");
    printf("Please provide the mileage at the start of the trip: ");
    scanf("%f", &mileage1);

    if(mileage1 < 0)
    {
        printf("Exit command detected. Closing this program.\n");
        return 0;
    }

    initialMileage = mileage1;

    while(mileage1 != -1)
    {
        printf("Please provide the mileage at the fill up: ");
        scanf("%f", &mileage2);

        if(mileage1 < 0)
        {
            printf("Exit command detected. Closing this program.\n");
            break;
        }

        if(mileage1 > mileage2)
        {
            printf("Error, the new mileage should not be lower than previous.\n");
            break;
        }

        printf("Please provide the amount of gallons of gas: ");
        scanf("%f", &gallons);

        printf("The mpg for this segment is %.3f.\n", (mileage2 - mileage1) / gallons);


        gallonsSum += gallons;

        printf("The cumulative mpg to this point of the trip is %.3f.\n", (mileage2 - initialMileage)/gallonsSum);


        mileage1 = mileage2;
    }

    return 0;
}