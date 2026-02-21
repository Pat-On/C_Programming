//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Please enter a numberl: ");
    scanf("%d", &num1);
    printf("Please enter a number2: ");
    scanf("%d", &num2);
    if (num1 == num2)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}