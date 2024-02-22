/**
 * You're given a an array of numbers without repeating numbers. Create a program
 * that will take an array as well as a value. The program will check the array to find
 * the position of two numbers that will add up to the value.
 * 
 * Ex
 * [2, 1, 5, 3] and val 4
 * 
 * The answer would be [1], [3] which leads to the values of 1 and 3 which add up to 4
 * 
 * pseudocode
 * Create hash map
 * Go through index
 *  Check value in position
 *  find value of desired sum - value in index
 *  does the difference exist on our map?
 *      yes - use map to find index for other pair that leads to solution
 *      no - Add curent value to the map
 *  repeat the loop
*/
