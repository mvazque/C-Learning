/**
 * Design, write, compile, and execute a C++ program to calculate the dollar amount contained
 * in a piggy bank. The bank currently contains 12 half dollars, 20 quarters, 32 dimes,
 * 45 nickels and 27 pennies.
 * The total current in the piggy bank is $16.72
 * 
 * Check the values computed by your program by hand. After you have verified that your 
 * program is working correctly modify it to determine the dollar value of a bank containing
 * no half dollars, 17 quarters, 19 dimes, 10 nickels, and 42 pennies.
 * The total current in the piggy bank is $7.7
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    #define HALFDOLLARVALUE 50
    #define QUARTERVALUE 25
    #define DIMEVALUE 10
    #define NICKELVALUE 5

    cout << "Hello World\n";

    int halfDollars = 0;
    int quarters = 17;
    int dimes = 19;
    int nickels = 10;
    int pennies = 42;

    int total = halfDollars * HALFDOLLARVALUE + quarters * QUARTERVALUE + dimes * DIMEVALUE + nickels * NICKELVALUE + pennies;

    int dollars = total / 100;
    int cents = total % 100;

    cout << "The total current in the piggy bank is $" << dollars << "." << cents << "\n";
}