/**
 * Write, compile, and execute a C++ program that displays the following prompts:
 * 
 * Enter a number: 
 * Enter a second number: 
 * Enter a third number: 
 * Enter a fourth number: 
 * 
 * After each prompt is displayed, your program should use a cin statement to accept a number
 * from the keyboard for the displayed prompt. After the fourth number has been entered, your
 * program should calculate and display the average of the numbers. The average should be
 * included in an appropriate message
 * 
 * 
 * Check the values computed by your program using the numbers 100, 0, 100, 0. After manually
 * determining that the result produced by your program is correct, use your program to 
 * determine the average for the following data 
 * The average of al four numbers is: 50
 * 
 * Data set 1: 100, 100, 100, 100
 * The average of al four numbers is: 100
 * 
 * Data set 2: 92, 98, 79, 85
 * The average of al four numbers is: 88
 * 
 * Data set 3: 86, 84, 75, 86
 * The average of al four numbers is: 82
 * 
 * Data set 4: 63, 85, 74, 82
 * The average of al four numbers is: 78
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter a second number: ";
    cin >> num2;

    cout << "Enter a third number: ";
    cin >> num3;

    cout << "Enter a fourth number: ";
    cin >> num4;

    float avg = (num1 + num2 + num3 + num4) / 4;

    cout << "The average of al four numbers is: " << avg << "\n";
}