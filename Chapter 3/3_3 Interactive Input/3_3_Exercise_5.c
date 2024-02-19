/**
 * Write a C program that displays the following prompts
 * Enter the length of the swimming pool:
 * Enter the width of the swimming pool:
 * Enter the average depth of the swimming pool:
 * After each prompt is displayed, your program should use a scanf() function call to
 * accept data from hte keyboard for the displayed prompt. After the depth of the swimming pool
 * is entered your program should calculate and display the volume of the pool. The volume should 
 * be included in an appropriate message and calculated using the equation volume = length * width * average depth
 * 
 * Check the volume calculated by the program by testing manually
 * 
 * Length   Width   Depth   Volume (Manual)     Volume(Program)
 * 10       10      10      1000                1000.000000
 * 10       11      12      1320                1320.000000
 * 1        1       10      10                  10.000000
 * 0        100     100     0                   0.000000
 * 15       25      6       2250                2250.000000
 * 13       11      7       1001                1001.000000
 * 11.015   12.4    16.78   2291.913            2291.913086
*/

#include <stdio.h>

int main(void)
{
    float length;
    float width;
    float depth;

    printf("Enter the length of the swimming pool:");
    scanf("%f", &length);

    printf("Enter the width of the swimming pool:");
    scanf("%f", &width);

    printf("Enter the depth of the swimming pool:");
    scanf("%f", &depth);

    float volume = length * width * depth;

    printf("The volume of a pool of length %f, width %f and average depth %f is %f.\n", length, width, depth, volume);

    return 0;
}