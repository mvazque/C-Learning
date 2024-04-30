/**
 * The quadrant in which a line drawn from the origin resides is determined by the angle 
 * that the line makes with the positive X axis as follows
 * 
 * Angle from the Positive X        Quadrant
 * Between 0 and 90 degrees         i
 * Between 90 and 180 degree        ii
 * Between 180 and 270 degrees      iii
 * Between 270 and 360 degrees      iv
 * 
 * Using this information write a C program that accepts the angle of the line as user input
 * and determines and displays the quadrant appropiate to the input data. (Note: If the angle
 * is exactly 0, 90, 180 or 270 degrees, the corresponding line does not reside in any quadrant
 * but lies on an axis.)
 * 
 * Modify the program above so that a message is displayed that identifies an angle of 0 degrees
 * as positive X-axis and angle of 90 as positive Y-axi, 180 degrees as negative X-axis and 270
 * degrees as negative Y-axis
*/

#include <stdio.h>

int main(void)
{
    int degrees;

    printf("Please provide degrees to analyze: ");
    scanf("%d", &degrees);

    degrees %= 360;

    if(degrees >= 0 && degrees < 90)
    {
        if(degrees == 0)
            printf("The line is the positive X axis.\n");
        else
            printf("The line is in quadrant i.\n");
    }
    else if(degrees >= 90 && degrees < 180)
    {
        if(degrees == 90)
            printf("The line is the positive Y axis.\n");
        else
            printf("The line is in quadrant ii.\n");
    }
    else if(degrees >= 180 && degrees < 270)
    {
        if(degrees == 180)
            printf("The line is the negative X axis.\n");
        else
            printf("The line is in quadrant iii.\n");
    }
    else if(degrees >= 270 && degrees < 360)
    {
        if(degrees == 270)
            printf("The line is the negative Y axis.\n");
        else
            printf("The line is in quadrant iv.\n");
    }

    return 0;
}