/**
 * Rewrite program 4.3 using a switch statement
 * 
 * #include <stdio.h>
 * int main()
 * {
 * char marcode;
 * 
 *  printf("Enter a marital code: ");
 *  scanf("%c", &marcode);
 * 
 *  if(marcode == 'M')
 *      printf("\nIndividual is married. \n");
 *  else if (marcode == 'S')
 *      printf("\nIndividual is single.\n");
 *  else if (marcode = 'D')
 *      printf("\nIndividual is divorced.\n");
 *  else if (marcode = 'W')
 *      printf("\nIndividual is widowed.\n");
 *  else
 *      printf("\nAn invalid code was entered.\n")
 * 
 *  return 0;
 * }
*/

#include <stdio.h>

int main(void)
{
    char marcode;

    printf("Enter a marital code: ");
    scanf("%c", &marcode);

    switch (marcode)
    {
    case 'M':
        printf("\nIndividual is married. \n");
        break;
    case 'S':
        printf("\nIndividual is single.\n");
        break;
    case 'D':
        printf("\nIndividual is divorced.\n");
        break;
    case 'W':
        printf("\nIndividual is widowed.\n");
        break;
    
    default:
        printf("\nAn invalid code was entered.\n");
        break;
    }
}