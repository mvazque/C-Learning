/**
 * A recipe for making enough acorn squash for four people requires the following ingredients
 * 
 * 2 acorn squashes
 * 2 teaspoons of lemon juice
 * 1/4 cup of raisins
 * 1 1/2 cups of applesauce
 * 1/4 cup of brown sugar
 * 3 tablespoons of chopped walnuts
 * 
 * Using this information, write and test six function that each accept the number of people
 * that must be served and return the amount of each ingredient respectively, that is required
*/

#include <stdio.h>

int main()
{
    float acornSquashes(int);
    float lemonJuice(int);
    float raisins(int);
    float applesauce(int);
    float brownSugar(int);
    float choppedWalnuts(int);

    int numPersons;

    printf("Please the amount of people you will need the recipe for: ");
    scanf("%d", &numPersons);

    printf("For this amount of people the recipe will need:\n");
    printf("%.3f acorn squashes\n", acornSquashes(numPersons));
    printf("%.3f teaspoon(s) of lemon juice\n", lemonJuice(numPersons));
    printf("%.3f cup(s) of raisins\n", raisins(numPersons));
    printf("%.3f cup(s) of applesauce\n", applesauce(numPersons));
    printf("%.3f cup(s) of brown sugar\n", brownSugar(numPersons));
    printf("%.3f tablespoon(s) of chopped walnuts\n", choppedWalnuts(numPersons));
}

/**
 * acornSquashes: Returns the number of acorn squashes needed based on the amount of people being
 * served
 * 
 * @input numPeople: The number of people that will be served
 * @return The amount of acorn squash needed for the amount of people
*/
float acornSquashes(int numPeople)
{
    #define SQUASHPERSPERSON 2/4
    return numPeople * SQUASHPERSPERSON;
}

/**
 * lemonJuice: Returns the amount of lemon juice teaspoons needed based on the amount of people being
 * served
 * 
 * @input numPeople: The number of people that will be served
 * @return The amount of lemon juice needed for the amount of people 
*/
float lemonJuice(int numPeople)
{
    #define LEMONJUICEPERPERSON 2/4
    return numPeople * LEMONJUICEPERPERSON;
}

/**
 * raisins: Returns the amount of raisin teaspoons needed based on the amount of people being
 * served
 * 
 * @input numPeople: The number of people that will be served
 * @return The amount of raisins needed for the amount of people 
*/
float raisins(int numPeople)
{
    #define RAISINSPERPERSON 0.25 * 0.25
    return numPeople * RAISINSPERPERSON;
}

/**
 * applesauce: Returns the cups of applesauce needed based on the amount of people being
 * served
 * 
 * @input numPeople: The number of people that will be served
 * @return The amount of applesauce needed for the amount of people
*/
float applesauce(int numPeople)
{
    #define APPLESAUCEPERPERSON 1.5 * 0.25
    return numPeople * APPLESAUCEPERPERSON;
}

/**
 * brownSugar: Returns the amount of brown sugar needed based on the amount of people being
 * served
 * 
 * @input numPeople: The number of people that will be served
 * @return The amount of brown sugar needed for the amount of people 
*/
float brownSugar(int numPeople)
{
    #define BROWNSUGARPERPERSON 0.25 * 0.25
    return numPeople * BROWNSUGARPERPERSON;
}

/**
 * choppedWalnuts: Returns the amount of chopped walnuts needed based on the amount of people being
 * served
 * 
 * @input numPeople: The number of people that will be served
 * @return The amount of walnuts needed for the amount of people 
*/
float choppedWalnuts(int numPeople)
{
    #define WALNUTSPERPERSON 3 * 0.25
    return numPeople * WALNUTSPERPERSON;
}