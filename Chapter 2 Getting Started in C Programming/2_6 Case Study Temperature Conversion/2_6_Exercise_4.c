/* Calculate the value of a light year
    given it represents the distance traveled by light in a year 
    and the formula is 3 * 108 meters in a second*/

#include <stdio.h>

int main(void)
{
    float secondsPerMinute = 60.0;
    float minutesPerHour = 60.0;
    float hoursPerDay = 24.0;
    float daysPerYear = 365.0;
    float secondsPerYear = secondsPerMinute * minutesPerHour * hoursPerDay * daysPerYear;

    int lightYearSpeed = 3 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10;
    // float lightYearSpeed = 299792458.0;
    float lightYearDistance = lightYearSpeed * secondsPerYear;

    printf("Given that there are %.2f seconds in a year.\nThe distance light travels in a year is %.2f meters\n", secondsPerYear, lightYearDistance);
}