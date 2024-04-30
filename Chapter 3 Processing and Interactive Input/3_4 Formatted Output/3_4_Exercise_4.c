/**
 * For display purposes the %f conversion control sequence allows the programmer to
 * round all outputs to the desired number of decimal places. This can however, yield
 * seemingly incorrect results when used in financial program that requires all monetary
 * values be displayed to the nearest penny. For example, the display produced by the
 * statements below
 * 
 * double a, b;
    a = 1.674;
    b = 1.322;

    printf("\n%4.2f", a);
    printf("\n%4.2f", b);
    printf("\n----");
    c = a + b;

    printf("\n%4.2f", c);


    This produces the value 3.00 when it should be 3.00. The problem is that although the 
    values in a and b are displayed with two decimal digits they were added within the 
    program as three digit numbers. The solution is to round the values in a nd b before
    they are added by the statement c = a + b. Using the (int) cast devise a method to round
    the values in the variables a and b to the nearest hundredth value before they are added
 * 
*/

#include <stdio.h>

int main(void)
{
    double a, b;
    a = 1.674;
    b = 1.322;

    printf("\n%4.2f", a);
    printf("\n%4.2f", b);
    printf("\n----");
    float roundedSum = (int) (a * 100) + (int) (b * 100);
    float c = roundedSum / 100.0;

    printf("\n%4.2f\n", c);

    return 0;
}