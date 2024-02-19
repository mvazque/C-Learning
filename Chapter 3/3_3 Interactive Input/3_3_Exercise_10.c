/**
 * Why do you think that most successful commercial applications programs contain extensive 
 * data input validity checks?
 * 
 * Validity checks are important because otherwise there is a chance for data corruption or
 * errors in the program. This would help ensure a better experience for the user and more 
 * stability in our program.
 * 
 * 
 * 
 * What do you think is the difference between a data type check and a data reasonableness check?
 * 
 * Data type check would just check that the data matches the type. So that an int is provided for int.
 * Data reasonableness check ensures the data is within a reasonable range.For example if you ask
 * for an hour you know the range must be between 1-12 or 0 - 24 and any number outside of that range
 * is incorrect.
 * 
 * 
 * 
 * Assume that a program requests that a month, day and year be entered by the user. 
 * What are some checks that could be made on the data entered?
 * 
 * All the inputs could be checked for being an integer as there wouldn't be partial days, months
 * or years. On top of that days could have a range of 1-31, months a range of 1-12 and year
 * depending on the context could go back to a certain range of time.
*/