/*
    Enter, compile and execute Program 2.13 on 
    your computer to determine whe in memory 
    your computer has stored the variable num
*/

#include <stdio.h>
int main(void)
{
    int num = 22;
    printf("num = %d The address of num is %p\n", num, &num);
    return 0;
}