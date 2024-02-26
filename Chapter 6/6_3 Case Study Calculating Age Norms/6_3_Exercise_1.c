/**
 * Modify program 6.7 to calculate a child's normal weight and a percent difference, in addtion
 * to the calculated height values. Assum the formula for predicitng normal weight in pounds is
 * given by the formula
 * 
 * Normal Weight = 0.5(Age-6) + 5.0(Age -6) + 48
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float norm(float); /* These are the function prototypes */
	float normWeight(float);
	float pcdif(float, float);
	void showit(float, float);
	void showWeight(float, float);

	int years, months; 
	float height, normht, weight, normWght;
	float age, perdif, perdifWght;

	/* This is the input section */
	printf("\nHow old (in years) is this child? ");
	scanf("%d", &years);
	printf("How many months since the child's birthday? ");
	scanf("%d", &months);
	age = years + months / 12.0; /* convert to total years */
	printf("Enter the child's height (in inches): ");
	scanf("%f", &height);

	printf("Enter the child's weight (in pounds): ");
	scanf("%f", &weight);

	/* This is the calculation section */
	normht = norm(age);
	perdif = pcdif(height, normht);

	normWght = normWeight(age);
	perdifWght = pcdif(weight, normWght);

	/* This is the display section */
	showit(normht, perdif);
	showWeight(normWght, perdifWght);
	return 0;
}

float norm(float age)
{
	#define MINAGE 6.0
	float agedif, avght;

	agedif = age - MINAGE;
	avght = -0.25 * pow(agedif, 2) + 3.5 * agedif + 45.0;
	return avght;
}

float normWeight(float age)
{
	#define MINAGE 6.0
	float agedif, avght;

	agedif = age - MINAGE;
	avght = 0.5 * agedif + 5.0 * agedif + 48;
	return avght;
}

float pcdif(float actual, float base)
{
	return (actual - base)/ base * 100.0;
}

void showit(float normht, float perdif)
{
	printf("\nThe average height in inches is %5.2f\n", normht);
	printf("The actual height deviates from the norm by: %6.2f%c\n" , perdif, '%');
}

void showWeight(float normWght, float perdif)
{
	printf("\nThe average weight in pounds is %5.2f\n", normWght);
	printf("The actual weight deviates from the norm by: %6.2f%c\n" , perdif, '%');
}