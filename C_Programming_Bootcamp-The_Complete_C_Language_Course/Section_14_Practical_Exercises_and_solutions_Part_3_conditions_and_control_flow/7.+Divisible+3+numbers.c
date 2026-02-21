//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>


// 3 integers
// a,b,c
// (a,b) , (b,c), (a,c) --> Divisible

int main()
{
    int a, b, c;

    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
        printf("Cannot Divide by 0! Check your input once again\n");
    else if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0))
        printf("Divisible Numbers!\n");
    else
        printf("Not Divisible Numbers!\n");

    return 0;
}