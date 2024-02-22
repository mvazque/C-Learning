/**
 * Based on an automobile's model year and weight, the state of New Jersey determines the car's
 * weight class and registration fee using the following schedule:
 * 
 * Model Year Registration      Weight              Weight Class        Fee
 * 1970 <= earlier              < 2700              1                   16.50
 *                              2700 < x < 3800     2                   25.50
 *                              x > 3800            3                   46.50
 * 1970 to 1979                 x < 2700            4                   27.00
 *                              2700 < x < 3800     5                   30.50
 *                              x > 3800            6                   52.50
 * x =>1980                     x < 3500            7                   35.50
 *                              x >= 3500           8                   65.60
 * 
 * Being this information, write a C program that accepts the year and weight of an automobile
 * and determines and displays the weight class and registration fee for the car.
*/

#include <stdio.h>

int main(void)
{
    int year, weight, weightClass;
    float fee;

    printf("Please provide the year and weight of the vehicle: ");
    scanf("%d %d", &year, &weight);

    if(year < 0)
    {
        printf("Invalid year input.\n");
        return 0;
    }

    if(weight < 0)
    {
        printf("Invalid weight input.\n");
        return 0;
    }

    if(year <= 1970){
        if(weight < 2700)
        {
            weightClass = 1;
            fee = 16.50;
        }
        else if( weight >= 2700 && weight <= 3800)
        {
            weightClass = 2;
            fee = 25.50;
        }
        else{
            weightClass = 3;
            fee = 46.50;
        }
    }
    else if(year > 1970 && year < 1979){
        if(weight < 2700)
        {
            weightClass = 4;
            fee = 27.00;
        }
        else if( weight >= 2700 && weight <= 3800)
        {
            weightClass = 5;
            fee = 30.50;
        }
        else{
            weightClass = 6;
            fee = 52.50;
        }
    }
    else
    {
        if( weight < 3500 )
        {
            weightClass = 7;
            fee = 35.50;
        }
        else if( weight >= 3500 )
        {
            weightClass = 8;
            fee = 65.60;
        }
    }

    printf("For a vehicle of year %d and weight %d\n", year, weight);
    printf("the weight class is %d and fee is $%.2f.\n", weightClass, fee);

    return 0;
}