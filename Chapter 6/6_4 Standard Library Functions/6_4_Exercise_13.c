/**
 * Here is a version of a problem called "the random walk." It can be extended to two or
 * three dimensions and used to simulate molecular motion, to determine the effectiveness
 * of reactor shielding or to calculate a variety of other probabilities
 * 
 * Assume that your very tired and sleepy pet dog leaves his favorite lamppost on warm summer
 * evenings and staggers randomly either two steps in the direction towards home or one step
 * in the opposite direction. After taking these steps, the dog again staggers randomly two
 * steps in the direction towards home or one step backward and does this again, and again. If the 
 * pet reaches a total distance of 10 steps from the lamppost in the direction toward home, you find
 * him and take him home. If the dog arrives back at the lamppost before reaching 10 steps in the
 * direction towards home , he lies down and spends the night at the foot of the lamppost.
 * 
 * Write a C program that simulates 500 summer evening and calculate and print the percentage of the
 * time your pet sleeps at home for these evenings
 * Hint: In a loop determine forward or backward based on the value of a random number.
 * 
 * Accumulate the distance the dog has reached toward your home. If the distance reaches 10, stop
 * the loop and increment the home count. If the distance reaches 0 before it reaches 10, stop the
 * loop but do not increment the home count. Repeat this loop 500 times and find the ratio
 * of (homeCount)/500.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    #define NUMOFSIMULATIONS 500
    int randomWalk();

    int homeCount = 0;
    srand(time(NULL));

    for(int i = 0; i < NUMOFSIMULATIONS; i++)
    {
        homeCount += randomWalk();
    }
    
    printf("Out of %d simulations, the dog made it home %d times.\n", NUMOFSIMULATIONS, homeCount);
    printf("The dog had a %f%% chance of making it home.\n", (float) homeCount/NUMOFSIMULATIONS);

    return 0;
}

int randomWalk()
{
    #define STARTINGPOINT 0
    #define ENDGOAL 10
    #define FORWARD 2
    #define BACKWARD -1

    int currentPosition = 0, dogHasMovedOnce = 0, moveDecision;

    do
    {
        moveDecision = 1 + (int) rand() % 100;
        // printf("Move Decision: %d\n", moveDecision);
        if(moveDecision % 2 == 0)
        {
            currentPosition += FORWARD;
            if (!dogHasMovedOnce)
                dogHasMovedOnce = 1;
        }     
        else
            if(currentPosition > 0)
                currentPosition += BACKWARD;
        
        if(currentPosition >= 10 || (currentPosition == 0 && dogHasMovedOnce))
            break;

        // printf("The dogs current position is %d.\n", currentPosition);
    } while (1);
    
    return (currentPosition >= 10) ? 1 : 0;
}