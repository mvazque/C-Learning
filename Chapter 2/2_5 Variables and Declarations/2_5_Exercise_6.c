#include <stdio.h>

int main(void)
{
    /* determine the amount of pennies in the change 
        change = (paid - check) * 100 */

    /* determine the number of dollars in the change
        dollars = change / 100 */

    float paid = 20;
    float check = 12.36;
    int change = paid * 100 - check * 100;

    // printf("Change at start %d\n", change);

    int dollars = change / 100;
    change = change - dollars * 100;

    // printf("Change before quarters %d\n", change);

    int quarters = change / 25;
    change = change-(quarters * 25);

    int dimes = change / 10;
    change = change-(dimes * 10);

    int nickles = change / 5;
    change = change - (nickles * 5);

    int pennies = change;

    printf("For a bill of %f paid with %f you will need:\n", check, paid);
    printf("%d Dollars\n", dollars);
    printf("%d Quarters\n", quarters);
    printf("%d Dimes\n", dimes);
    printf("%d Nickles\n", nickles);
    printf("%d Pennies\n", pennies);


    return 0;
}