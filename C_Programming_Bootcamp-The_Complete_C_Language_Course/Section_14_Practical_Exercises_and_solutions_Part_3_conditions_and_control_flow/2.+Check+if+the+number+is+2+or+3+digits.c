//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

// If a given number is "double-digit" / "triple-digit" / neither...
// 1,2,3,.., 10,11,12, 99, 100, 101, 999, 1000, 1001, ...

int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num); // 1005

    if (num >= 10 && num <= 99)
        printf("This number is a 'double-digit' number\n");
    else if (num >= 100 && num <= 999)
        printf("This number is a 'triple-digit' number\n");
    else
        printf("This number is neither 'double-digit' nor 'triple-digit'\n");
    return 0;
}