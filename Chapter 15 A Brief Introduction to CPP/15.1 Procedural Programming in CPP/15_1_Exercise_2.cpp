/**
 * Design, write, compile, and execute a C++ program to calculate the elapsed time it took
 * to make a 183.67-mile trip. The equation for computing elapsed time is 
 * elapsed time = total distance / average speed
 * Assume that the average speed during the trip was 58 miles per hour.
 * The time for a trip of 183.67 miles at 58 mph is:  3.17 hours
 * 
 * Check the values computed by your program by hand. After you have verified that your program
 * is working correctly, modify it to determine the elapsed time it takes to make a 372-mile
 * trip at an average speed of 67 miles per hour.
 * The time for a trip of 372 miles at 67 mph is:  5.55 hours
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float tripDistance = 372;
    int speed = 67;

    float tripTime = tripDistance / speed;

    cout << "The time for a trip of " << tripDistance << " miles at " << speed <<" mph is: " << fixed << setw(5) << setprecision(2) << tripTime << " hours\n"; 
}