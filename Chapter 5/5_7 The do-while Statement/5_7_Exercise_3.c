/**
 * Write a C program to reverse the digits of a positive integer number. For example, if the number
 * 8375 is entered, the number displayed should be 5738.
 * 
 * Hint Use a do statement and continuously strip off and display the units digit of hte number.
 * If the variable sum initially contains the number entered the units digit is obtained as 
 * num % 10. After a units digit is displayed, dividing the number by 10 sets up the number for
 * the next iteration. Thus (8735 % 10) is 5 and (8735 / 10) is 873.
 * 
 * The do statement should continue  as long as the remaining number is not 0
 * 
 * 
*/

#include <stdio.h>

int main(void)
{
    #define TRUE 1
    int input, tempInput;

    do
    {
        printf("Please provide a positive integer value to reverse: ");
        scanf("%d", &input);

        if(input < 0)
        {
            printf("Value must be a positive integer");
            continue;
        }
        break;
    } while (TRUE);

    do
    {
        printf("%d", input % 10);
        input /= 10;
    } while (input != 0);
    printf("\n");
    
    
}