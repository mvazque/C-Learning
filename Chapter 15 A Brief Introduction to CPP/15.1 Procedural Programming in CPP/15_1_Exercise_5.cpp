/**
 * Write, compile, and execute a C++ program that displays the following prompt
 * 
 * Enter the miles driven:
 * Enter the gallons of gas used:
 * 
 * After each prompt is displayed your program should use a cin statement to accept data from
 * the keyboard for the displayed prompt. After the gallons of gas used number has been
 * entered, your program should calculate and display miles per gallon obtained. This value
 * should be included in an appropriate message and calculated using the equation
 * 
 * miles per gallon = miles / gallons used.
 * 
 * 
 * 
 * Check the values computed by your program using data of 176 miles and 10 gallons.
 * After manually determining that the result produced by your program is correct, use your
 * program to determine the miles-per-gallon for the following data:
 * The average miles per gallon is: 17.6
 * 
 * Data set 1: miles = 250, gas = 16.50 gallons
 * The average miles per gallon is: 15.15
 * 
 * Data set 2: miles = 275, gas = 18.00 gallons
 * The average miles per gallon is: 15.28
 * 
 * Data set 3: miles = 312, gas = 19.54 gallons
 * The average miles per gallon is: 15.97
 * 
 * Data set 4: miles = 296, gas = 17.39 gallons
 * The average miles per gallon is: 17.02
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float milesDriven;
    float gallonsUsed;

    cout << "Enter the miles driven: ";
    cin >> milesDriven;

    cout<< "Enter the gallons of gas used: ";
    cin >> gallonsUsed;

    cout << "The average miles per gallon is: " << fixed << setprecision(2) << (milesDriven / gallonsUsed) << "\n";
}