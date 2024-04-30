/**
 * Write a program that has a declaration in main() to store the following numbers into an 
 * array named rates: 6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0. There should be a function 
 * call to show() that accepts the rates array as a parameter named rates and then displays the 
 * numbers in the array
*/

#include <stdio.h>

int main()
{
    void show(float []);
	float rates[9] = {6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};

	show(rates);
	return 0;
}

void show(float rates[9])
{
	int numElements = 9;

	for(int i = 0; i < numElements; i++)
	{
		printf("%6.2f\n", rates[i]);
	}
}
