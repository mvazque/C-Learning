/*
    Enter, compile and execute Program 2.11 on your
    computer to determine how many bytes of storage 
    your compiler allocates for each of C's data types
*/
#include <stdio.h>
int main()
{
    printf("Data Type       Bytes\n");
    printf("---------       -----\n");
    printf("char              %d\n", sizeof(char));
    printf("short int         %d\n", sizeof(short));
    printf("int               %d\n", sizeof(int));
    printf("long int          %d\n", sizeof(long));
    printf("float             %d\n", sizeof(float));
    printf("double            %d\n", sizeof(double));
    printf("long double       %d\n", sizeof(long double));

    return 0;
}