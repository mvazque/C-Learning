/**
 * The fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13 ... where the first two terms are 0 and 1,
 * and each term thereafter is defined recursively as the sum of the preceding terms; that is
 * 
 * Fib(n) = n for n < 2
 * Fib(n) = Fib(n-1) + Fib(n-2) for n >= 2
 * 
 * Write a recursive function that returns the nth number in a Fibonacci sequence when n is passed
 * to the function as an argument. For example, when n = 8, the function returns the 8th number in
 * the sequence which is 13.
 * 
 * Write a function that uses repetition to calculate the nth term of Fibonacci
*/

#include <stdio.h>

int main()
{
    int fibRecurs(int);
    int fibRep(int);

    int input;

    printf("Please provide the index of the fibonacci value you would like to see: ");
    scanf("%d", &input);

    printf("The number of index %d in the fibonacci sequence is %d.\n", input, fibRecurs(input - 1));
    printf("The number of index %d in the fibonacci sequence using repetition is %d.\n", input, fibRep(input));

    return 0;
}

int fibRecurs(int index)
{
    if(0 == index || 1 == index)
    {
        return index; 
    }
    else
    {
        return fibRecurs(index - 1) + fibRecurs(index - 2);
    }
}

int fibRep(int index)
{
    int fibValue = 0;
    int prev1 = 0;
    int prev2 = 0;
    for(int i = 0; i < index; i++)
    {
        if(i == 0)
        {
            prev2 = 0;
        }
        else if (1 == i)
        {
            prev1 = 1;
        }
        else
        {
            fibValue = prev1 + prev2;
            prev2 = prev1;
            prev1 = fibValue;
        }
    }
    return fibValue;
}