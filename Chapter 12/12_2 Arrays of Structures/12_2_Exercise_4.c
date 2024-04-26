/**
 * Declare a single structure type suitable for a car record consisting of an integer car 
 * identification number, an integer value for the miles driven by the car, and an integer
 * value for the number of gallons used by each car
 * 
 * 
 * Using the structure type declared that interactively accepts the following data into an array
 * of five structures
 * 
 * Car_Number   Miles_Driven    Gallons_Used
 * 25           1450            62
 * 36           3240            136
 * 44           1792            76
 * 52           2360            105
 * 68           2114            67
 * 
 * Once the data has been entered, the program should create a report listing each car number
 * and the miles per gallon achieved by the car. At the end of the report, include the average miles
 * per gallon achieved by the complete fleet of cars
 * 
 * 25 1450 62
 * 36 3240 136
 * 44 1792 76
 * 52 2360 105
 * 68 2114 67
*/

#include <stdio.h>
struct Car
{
    int carId;
    int milesDriven;
    int gallonsUsed;
};


int main()
{
    #define NUMCARS 5
    struct Car cars[NUMCARS];

    int i = 0;
    do
    {
        printf("\nPlease provide the details of a car (Car_Number Miles_Driven Gallons_used): \n");
        scanf("%d %d %d", &cars[i].carId, &cars[i].milesDriven, &cars[i].gallonsUsed);
        i++;
    } while (i < NUMCARS);
    
    float mpgTotal = 0.0;
    float mpg;

    printf("\nCar_Number  MPG\n");
    printf("-----------------\n");
    for(i = 0; i < NUMCARS; i++)
    {
        mpg = 1.0 * cars[i].milesDriven / cars[i].gallonsUsed;
        mpgTotal += mpg;
        printf("%-10d  %.2f\n", cars[i].carId, mpg);
    }

    printf("Total Average MPG:  %6.2f\n", mpgTotal / NUMCARS);
}