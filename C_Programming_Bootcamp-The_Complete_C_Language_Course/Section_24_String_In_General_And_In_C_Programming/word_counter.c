#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[30];
    int countWords = 0;
    int i;

    printf("Please enter a string/text: ");
    gets(sentence);  // Note: gets() is unsafe/deprecated → better use fgets in real code

    for (i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == ' ')
        {
            countWords++;
        }
    }
    countWords++;  // add 1 because number of words = number of spaces + 1

    printf("Total amount of words in \"%s\" = %d\n", sentence, countWords);

    return 0;
}