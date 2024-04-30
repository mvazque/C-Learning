#include <stdio.h>
/*minutes in a year*/
int main(void)
{
    int minutesToHour = 60;
    int hoursToDay = 24;
    int daysToYear = 365;

    printf("The number of minutes in a year is %d.\n", minutesToHour * hoursToDay * daysToYear);

    return 0;
}