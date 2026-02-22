//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int grade; //0 <= grade <= 100
    do {
        printf("Enter a grade between 0 to 100: ");
        scanf("%d", &grade);
    } while (grade < 0 || grade>100);
    printf("Thanks! You' ve inserted a legit grade of %d\n", grade);
    return 0;
}