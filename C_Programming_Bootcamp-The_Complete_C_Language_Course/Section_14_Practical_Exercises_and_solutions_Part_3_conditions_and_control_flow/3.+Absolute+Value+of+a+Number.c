//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

// Value --> |Value|

int main()
{
    int num;
    printf("Enter Integer (whether Positive/Negative): ");
    scanf("%d", &num);

    if (num < 0)// Negative (-3)
        printf("The absolute value of %d is |%d|\n", num, (-1) * num);
    else
        printf("The absoulte value of %d is |%d|\n", num, num);

    return 0;
}