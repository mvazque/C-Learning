/**
 * Rewrite program 5.4 to produce a table that starts at a Celsius value of -10 and ends with
 * a Celsius value of 60, in increments of 10 degrees.
 * */

#include <stdio.h>

#define ENDVALUE 60

int main()
{
    int celsius;
    float fahren;

    /* display the heading lines*/
    printf("Degrees Degrees\n");
    printf("CELSIUS FAHRENHEIT\n");
    printf("------- ----------\n");

    // now fill in the table using a while loop
    celsius = -10; /* starting Celsius value */

    while(celsius <= ENDVALUE )
    {
        fahren = (9.0/5.0) * celsius + 32.0;
        printf("%5d%11.2f\n", celsius, fahren);
        celsius = celsius + 10;
    }

    return 0;
}