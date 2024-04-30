/**
 * A common statistical problem is to determine how many ways n objects can be selected from a
 * group of m objects. The number of such possibilities is given by the formula
 * 
 * (m!)/(n!*(m-n)!)
 * 
 * For example, using this formula can determine that the number of committees of three people
 * (n=3) tha can be created from a pool of 8 people (m = 8) is 56
 * 
 * Using this formula, write a function that accepts values for n and m and returns the number 
 * of possibilities.
 * 
 * 
 * Include the function written in Exercise 6a in a working program. Make sure your function is
 * called from main() and correctly returns a value to main(). Have main() display the value 
 * returned. Test the function by passing various data to it. Then use your program to determine
 * the number of ways 5 people can be selected from a group of 10 people.
*/

#include <stdio.h>

int main()
{
    float numOfPossibilities(int, int);
    float m,n;
    printf("Please provide the number of objects in a specific group: ");
    scanf("%f", &n);

    printf("Please provide the number of objects total in the group: ");
    scanf("%f", &m);

    printf("The number of ways the object can be found in the group is %.2f.\n", numOfPossibilities(n, m));

}

float numOfPossibilities(int n, int m)
{
    float factorial1 = 1, factorial2 = 1, factorial3 = 1;

    for(int i = 1; i <= m; i++){
        factorial1 *= i;
    }

    for(int i = 1; i <= n; i++){
        factorial2 *= i;
    }

    for(int i = 1; i <= m - n; i++){
        factorial3 *= i;
    }
    
    return factorial1 / (factorial2 * factorial3);
}