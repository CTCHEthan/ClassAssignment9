#include <stdio.h>
#include <stdlib.h>
#include "ErrorCheck.h"

#define CONTINUE 1
#define QUIT 0

int main()
{
    //Ask the user to enter a valid letter grade.
    printf("Enter a letter grade A-F: ");

    //Store the entered value into a char variable.
    char userInput;
    scanf("%c", &userInput);

    //Start error checking process.
    if (errorCheck(userInput) == OK)
    {
        //If OK, print proper message.
        printf("\nSUCCESS: You entered the letter %c\n", userInput);

        //Show the lowest possible score for this letter grade.
        float lowestPossible = getLowRange(userInput);
        printf("\nThe lowest possible score for grade %c is %.1f\n", userInput, lowestPossible);
    }
    else
    {
        //NO - not the expected data.
        printf("\nERROR: Not a valid entry!");
    }
    return 0;
}
