/**
 * Write a C function fracpart() that returns the fractional part of any number passed to
 * the function. For example if the number 256.879 is passed to fracpart(), the number .879
 * should be returned. Have the function fracpart() call the function whole that you wrote
 * in the previous exercise. The number returned can then be determined as the number passed to
 * fracoart less the returned value when the same argument is passed to whole. The completed
 * program should consist of main, followed by fracpart followed by whole()
 * 
 * Include the function in a working program. Make sure your function is called from main() and 
 * correctly returns a value to main(). Have main() use printf() to display the value returned. 
 * Test the function by passing various data to it
*/

#include <stdio.h>

int main()
{
    float fracpart(float);

    float num;

    printf("Please provide a number: ");
    scanf("%f", &num);

    printf("The fractional part of the number %f is %f.\n", num, fracpart(num));

    return 0;
}

float fracpart(float num){
    int whole(float);

    return num - whole(num);
}

int whole(float num)
{
    return (int) num;
}