/**
 * A model of worldwide population, in billions of people, is given by the equation
 * population = 6.0 * exp(0.02, t);
 * 
 * Where t is the time in years (t = 0 is Jan 2000 and t = 1 is Jan 2001). Using this
 * formula, writhe a C program that displays a monthly population table for the months
 * Jan 2007 through Dec 2008
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    #define INCREMENT 1.0/12.0
    #define MAXCOUNT 12 * 2
    #define INITIALYEAR 2007
    #define FORMULASTARTYEAR 2000
    // #define INITIALYEAR

    float time = INITIALYEAR;
    int month = 0;

    for(int i = 0; i < MAXCOUNT; i++)
    {
        
        printf("Population is %f, in month %2d, %d\n", 6.0 * exp(0.02 * (time - FORMULASTARTYEAR)), month + 1, (int)time);
        month++;
        month %= 12;
        time += INCREMENT;
        
    }

    return 0;
}
