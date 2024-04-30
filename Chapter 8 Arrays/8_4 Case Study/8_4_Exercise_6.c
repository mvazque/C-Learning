/**
 * Define an array named PeopleTypes that can store a maximum of 50 integer values that
 * will be entered at the keyboard. Enter a series of 1s, 2s, 3s, and 4s, into the array, where
 * 1 represents infant
 * 2 represents child
 * 3 represents a teenager
 * 4 represents an adult
 * 
 * who were present at a local school function.
 * 
 * Any other integer value should not be accepted as valid input and data entry should stop when a
 * negative value has been entered
 * 
 * Your program should count the number of each 1, 2, 3 and 4 in the array and output a list of how
 * many infants, children, teenagers and adults were at the school function
*/
#include <stdio.h>

int main()
{
    void printResults(int[]);
    int PeopleTypes[50];
    int peopleCounter[] = {0, 0, 0, 0};
    int input, peopleIndex = 0;

    do
    {
        printf("Please provide a code for the person at the meeting (1 - 4): ");
        scanf("%d", &input);
        if(input > 4 || input < 1)
            continue;
        
        peopleCounter[input - 1]++;
        PeopleTypes[peopleIndex] = input;
        peopleIndex++;

    } while (input > 0 && peopleIndex < 50 );

    printResults(peopleCounter);
    
}

void printResults(int counter[])
{
    printf("The people who attended the function are:\n");
    printf("------------------------------------------\n");

    printf("Infants:   %2d\n", counter[0]);
    printf("Children:  %2d\n", counter[1]);
    printf("Teenagers: %2d\n", counter[2]);
    printf("Adults:    %2d\n", counter[3]);

}