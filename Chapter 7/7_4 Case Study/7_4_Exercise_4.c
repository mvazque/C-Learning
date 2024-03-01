/**
 * Modify Program 7.10 to accept a character parameter named sortOrder. If sortOrder is in a,
 * swap() should exchange values only if the first value is larger than the second value; that
 * is, the function should return the values in ascending order (smallest number first, largest 
 * number second). For any other value, the function should return the values in descending order
 * (largest number first, smallest number second).
*/
#include <stdio.h>

void swap(float *, float *, char); /* function prototype */

int main()
{
	float firstnum, secnum;
    char sortOrder;

	printf("Enter two numbers: ");
	scanf("%f %f", &firstnum, &secnum);
    getchar();

    printf("Would you like the numbers in ascending (a) order or descending(d): ");
    scanf("%c", &sortOrder);

	printf("\nBefore the call to swap():\n");
	printf("  The value in firstnum is %5.2f\n", firstnum);
	printf("  The value in secnum is %5.2f\n", secnum);

    if('a' == sortOrder)
    {
        if(firstnum > secnum)
            swap(&firstnum, &secnum, sortOrder);
    }
    else
    {
        if(secnum > firstnum)
            swap(&firstnum, &secnum, sortOrder);
    }
        
	printf("\nAfter the call to swap(): \n");
	printf("  The value in firstnum is %5.2f\n", firstnum);
	printf("  The value in secnum is %5.2f\n", secnum);

	return 0;
}

void swap(float *num1Addr, float *num2Addr, char sortOrder)
 {
	float temp;

	temp = *num1Addr; /* save firstnums value */
	*num1Addr = *num2Addr; /* move secnum's value into firstnum */
	*num2Addr = temp; /* change secnum's value */ 
 }
