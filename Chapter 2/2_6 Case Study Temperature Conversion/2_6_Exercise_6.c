/* 
    Sum all the numbers between 1-100
    use the formula sum = (n/2)(2 * a + (n - 1)*d)
    n is number of terms
    a is the first value
    d is the difference between terms
*/

#include <stdio.h>

int main(void) {
    int a = 100;
    int n = 1000;
    int d = 1;
    float sum = (n/2) * (2 * a + (n - 1) * d);

    printf("The sum of the terms between %d-%d is %.0f.\n", a, n, sum);
}