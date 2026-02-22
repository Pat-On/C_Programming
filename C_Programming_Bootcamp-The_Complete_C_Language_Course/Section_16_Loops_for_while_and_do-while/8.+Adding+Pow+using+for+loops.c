//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int num, pow;
    int result = 1;
    int i;

    printf("Enter num: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &pow);

    for (i = 1; i <= pow; i++)
    {
        result = result * num;
    }

    printf("%d in the POWER of %d = %d\n", num, pow, result);

    return 0;
}