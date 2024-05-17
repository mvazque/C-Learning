/**
 * Design, write, compile, and execute a C++ program to calculate the sum of the numbers from
 * 1 to 100. The formula for calculating this sum is
 * 
 * sum = (n/2)[ 2a + (n - 1)d]
 * 
 * where n = number of terms to be added, a = the first number, and d = the difference between
 * each number.
 * The sum of numbers between 1 and 100 is 5050
 * 
 * 
 * 
 * Check the values computed by your program by hand. After you have verified that your
 * program is working correctly, modify it to determine the sum of the integers from
 * 100 to 1000.
 * 
 * The sum of numbers between 100 and 1000 is 495000
 * So this is wrong according to Wolfram Alpha which says its 495,550. I don't know why
 * it fails here but not on the 1 to 100
 * 
 * 
 * The sum of numbers between 100 and 1000 is 495550
 * Found the issue had something to do with int and float. I think the n/2 can give
 * a whole number or a .5 but if its int it will just lose the .5. So dividing n/2.0
 * seems to leave everything working fine.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int startingNum = 100;
    int endingNum = 1000;
    int numOfNumbers = endingNum - startingNum + 1;
    int numDelta = 1;

    // (n/2)[ 2a + (n - 1)d]
    float sum = (numOfNumbers / 2.0) * ( 2 * startingNum + (numOfNumbers - 1) * numDelta);

    cout << "The sum of numbers between " << startingNum << " and " << endingNum << " is " << sum << "\n";
}