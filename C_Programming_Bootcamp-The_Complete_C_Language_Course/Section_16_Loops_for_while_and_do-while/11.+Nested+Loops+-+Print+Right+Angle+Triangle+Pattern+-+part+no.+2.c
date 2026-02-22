//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

// n = 3
// 1
// 22
// 333

int main()
{
    int i, j;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        j = i;
        while (j > 0)
        {
            printf("%d ", i);
            j--;
        }
        printf("\n");
    }
    return 0;
}
