//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>


int main()
{
    char myCharacter;
    printf("Enter character: ");
    scanf("%c", &myCharacter);

    if (myCharacter >= 'A' && myCharacter <= 'Z')
        printf("It's a uppercase!\n");
    else if (myCharacter >= 'a' && myCharacter <= 'z')
        printf("It's a lowercase!\n");
    else if (myCharacter >= '0' && myCharacter <= '9')
        printf("It's a digit!\n");
    else
        printf("Other..!\n");
    return 0;
}