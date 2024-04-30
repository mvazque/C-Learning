/**
 * Enter and Execute Program 13.1
*/

#include <stdio.h>

struct Test
{
    int idNum;
    double *ptPay;
};

int main()
{
    struct Test emp;
    double pay = 456.20;

    emp.idNum = 12345;
    emp.ptPay = &pay;

    printf("Employee number %d was paid $%6.2f\n", emp.idNum, *emp.ptPay);

    return 0;
}