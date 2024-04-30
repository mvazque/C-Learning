/**
 * Enter and execute Program 7.10
*/
#include <stdio.h>

void swap(float *, float *); /* function prototype */

int main()
{
	float firstnum, secnum;

	printf("Enter two numbers: ");
	scanf("%f %f", &firstnum, &secnum);

	printf("\nBefore teh call to swap():\n");
	printf("  The value in firstnum is %5.2f\n", firstnum);
	printf("  The value in secnum is %5.2f\n", secnum);

	swap(&firstnum, &secnum);

	printf("\nAfter the call to swap(): \n");
	printf("  The value in firstnum is %5.2f\n", firstnum);
	printf("  The value in secnum is %5.2f\n", secnum);

	return 0;
}

void swap(float *num1Addr, float *num2Addr)
 {
	float temp;

	temp = *num1Addr; /* save firstnums value */
	*num1Addr = *num2Addr; /* move secnum's value into firstnum */
	*num2Addr = temp; /* change secnum's value */ 
 }
