//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int numOfAsterisks;
    int i = 0;

    printf("Enter a number of asterisks you would like to see: ");
    scanf("%d", &numOfAsterisks);

    while (i < numOfAsterisks)
    {
        printf("*");
        i++;
    }
    printf("\n");

    return 0;
}