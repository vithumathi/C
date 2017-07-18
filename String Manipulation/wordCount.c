
/* Objective: The purpose of the program is to perform a characterCount & wordcount for a used input sentence

    Author: Vithusanan Mathiaparanam
*/


#include <stdio.h>
#include <ctype.h>

int main(void)
{
    float characterCount = 0.0f, wordCount = 0.0f; // Input declaration 
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {

        if (ch == ' ') {                // Every time a space is encountered, the word count is increased by 1
            wordCount++;
            continue;
        }
        characterCount++;
    }
    
    wordCount += 1;                     //Since last word isn't counted due to the \n, it is increment by one here.
    printf("Average word length: %.1f\n\n", characterCount / wordCount);

    return 0;
}
