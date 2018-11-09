#ifndef ERRORCHECK_H_INCLUDED
#define ERRORCHECK_H_INCLUDED

#define OK 1
#define NO 0

//Prototypes
int errorCheck(char grade);
float getLowRange(char grade);

int errorCheck(char grade)
{
    //Start out assuming the return value is NO.
    int returnVal = NO;

    //Create a collection of correct entries.
    char correctInput[10] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f'};

    //Indexer.
    int i;
    //Iterate through the valid data entries and compare against the user input.
    for (i = 0; i < 10; i++)
    {
        //If the entered value is equal to any value in the valid entries we're OK.
        if (grade == correctInput[i])
        {
            returnVal = OK;
            break; //Stop here because we found what we needed.
        }
    }
    return returnVal;
}

float getLowRange(char grade)
{
    float returnVal;

    //Evaluate the letter grade and find the lowest possible score.
    switch(grade)
    {
    case 'A':
    case 'a':
    returnVal = 93.9F;
    break;

    case 'B':
    case 'b':
    returnVal = 82.9F;
    break;

    case 'C':
    case 'c':
    returnVal = 72.9F;
    break;

    case 'D':
    case 'd':
    returnVal = 62.9F;
    break;

    case 'F':
    case 'f':
    returnVal = 0.F;
    }

    return returnVal;
}


#endif // ERRORCHECK_H_INCLUDED
