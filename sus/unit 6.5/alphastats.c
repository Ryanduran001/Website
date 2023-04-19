#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


// Procedure that will take in a string and convert it into a form in which it is in alphabetical order.
string alphabetize(string input);


int main(void)
{
    // Input for program
    int sentencecount = get_int("How many sentences? \n");


    // Initializing list of strings strlist
    string strlist[sentencecount];
    for (int i = 0; i < sentencecount; i++)
    {
        // MAIN input for program
        strlist[i] = get_string("Sentence or Word: ");
        for (int j = 0; j < strlen(strlist[i]); j++)
        {
            // Make letters lowercase
            if (isupper(strlist[i][j]))
            {
                strlist[i][j] = tolower(strlist[i][j]);
            }
        }
    }
    //Both partner and I worked on this segment (33-37)
    for (int i = 0; i < sentencecount; i++)
    {
        printf("%s\n", alphabetize(strlist[i]));
    }
}


// Procedure to convert a string to be in alphabetical order
// Both partner and I worked on this segment of code (43-65)
string alphabetize(string input)
{
    // Temporary variable to hold a character to replace another in the string
    char temp;
    // Double loop with if statements to go through a string and
    // Determine what parts need to be made into alphabetical order
    for (int i = 0; i < strlen(input); i++)
    {
        for (int j = i; j < strlen(input); j++)
        {
            if (input[j] == ' ' || input[j] == '.' || input[j] == '?' || input[j] == '!' || input[j] == ';')
            {
                break;
            }
            if (input[i] > input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    return input;
}