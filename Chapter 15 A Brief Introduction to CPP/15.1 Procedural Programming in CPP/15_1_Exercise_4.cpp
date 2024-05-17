/**
 * Write, compile, and execute a C++ program that displays the following prompt:
 * 
 * Enter the radius of a circle
 * 
 * After accepting a value for hte radius, your program should calculate and display the
 * circumference of the circle using the formula
 * 
 * circumference = 2 * pi * radius
 * 
 * 
 * 
 * Check the values computed by your program using a test input radius of 3 inches. After
 * manually determining that the result produced by you program is correct, use your program
 * to determine the circumference for the following data.
 * 
 * Data set 1: radius = 1.0
 * Data set 2: radius = 1.5
 * Data set 3: radius = 2.0
 * Data set 4: radius = 2.5
 * Data set 5: radius = 3.0
 * Data set 6: radius = 3.5
 * 
 * 1.0
 * The circumference of the circle with radius 1inches is  6.28
 * 
 * 1.5
 * The circumference of the circle with radius 1.5inches is  9.42
 * 
 * 2.0
 * The circumference of the circle with radius 2inches is 12.57
 * 
 * 2.5
 * The circumference of the circle with radius 2.5 inches is 15.71
 * 
 * 3.0
 * The circumference of the circle with radius 3inches is 18.85
 * 
 * 3.5
 * The circumference of the circle with radius 3.5 inches is 21.99
*/

#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float radius;

    cout << "Enter the radius of a circle: ";
    cin >> radius;

    float circumference = 2 * M_PI * radius;

    cout << "The circumference of the circle with radius " << radius << " inches is " << fixed << setw(5) << setprecision(2) << circumference << "\n";

}