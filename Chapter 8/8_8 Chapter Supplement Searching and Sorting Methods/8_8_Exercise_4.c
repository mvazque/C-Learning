/**
 * An alternate form of the bubble sort is presented below 
 * 
 * An advantage of this version of the bubble sort that processing is terminated whenever a sorted
 * list is encountered. In the best case, when the data is in sorted order to begin with, an
 * exchange sort requires no moves (the same for selection sort) and only N-1 comparisons (the 
 * selection sort always requires N(N-1)/2 comparisons)
 * 
 * After you have run this program, to convince yourself that it correctly sorts a list of integers
 * rewrite the sort algorithm it contains as a function named newbubble(), and test your function
 * using the driver function from program 8.14
 * 
 * Oddly enough they both do the same amount of "moves" as in swaps, I wonder if they wanted to count
 * the number of loop iterations as well.
*/


#include <stdio.h>
#define NUMEL 10

int bubbleSort(int[], int);
int newBubble(int[], int);

int main()
{
    int nums[NUMEL] = {22, 5, 67, 98, 45, 32, 101, 99, 73, 10};
    int numsNew[NUMEL] = {22, 5, 67, 98, 45, 32, 101, 99, 73, 10};
    int i, moves, movesNew;

    moves = bubbleSort(nums, NUMEL);
    movesNew = newBubble(numsNew, NUMEL);

    printf("The sorted list, in ascending order, is: \n");
    for(i = 0; i < NUMEL; i++)
        printf("%d ", nums[i]);
    printf("\n %d moves were made to sort this list\n", moves);



    printf("The sorted list, in ascending order using new Bubble Sort, is: \n");
    for(i = 0; i < NUMEL; i++)
        printf("%d ", nums[i]);
    printf("\n %d moves were made to sort this list\n", movesNew);

    return 0;
}

int bubbleSort(int num[], int numel)
{
    int i, j, temp, moves = 0;

    for(i = 0; i < numel - 1; i++)
    {
        for(j = 1; j < numel; j++)
        {
            if(num[j] < num[j-1])
            {
                temp = num[j];
                num[j] = num[j-1];
                num[j-1] = temp;
                moves++;
            }
        }
    }

    return moves;
}


int newBubble(int nums[], int numel)
{
    #define TRUE 1
    #define FALSE 0
    int i, temp, moves, npts, outord;

    moves = 0;
    npts = 10;
    outord = TRUE;
    while(outord && npts > 0)
    {
        outord = FALSE;
        for(i = 0; i < npts - 1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                temp = nums[i+1];
                nums[i+1] = nums[i];
                nums[i] = temp;
                outord = TRUE;
                moves++;
            }
            
        }
        npts--;
    }

    return moves;
}
