/**
 * Write a C program that displays the following prompts:
 * Enter the miles driven:
 * Enter the gallons of gas used:
 * After each prompt is displayed your program should use scanf function call to
 * accept data from the keyboard for the displayed prompt. After the gallons of gas used has
 * been entered your program should calculate and displaye miles per gallon obtained. This
 * value should be included in an appropriate message and calculated using the equation
 * mpg = miles/gallonsUsed. Verify your program using the following test data
 * 
 * Miles    Gas
 * 276      10 gallons
 * 200      15.5 gallons
 * 
 * When you complete your verification use your program to complete the following
 * 
 * Miles    Gas     MPG
 * 250      16.00   15.625
 * 275      18.00   15.277778
 * 312      19.54   15.967246
 * 296      17.39   17.021276
 * 
 * 
 * For this program determine how many verifications runs are required to ensure the 
 * program is working correctly and give a reason supporting your answer
 * 
 * Testing can only prove the existence of a bug and not the absence of a bug. As such
 * no matter how much testing there is a chance it will not work. That said one can
 * feel comfortable in their code. For the sake of this simple code without user validation
 * we are assuming inputs are perfect. Thus with the example we only used 2 test cases
 * before assuming our program was working as expected
*/

#include <stdio.h>

int main(void)
{
    float miles;
    float gasUsed;

    printf("Enter the miles driven:");
    scanf("%f", &miles);

    printf("Enter the gallons of gas used:");
    scanf("%f", &gasUsed);

    float mpg = miles/gasUsed;

    printf("The mpg for a trip of %f using %f gallons of gas is %f.\n", miles, gasUsed, mpg);
}