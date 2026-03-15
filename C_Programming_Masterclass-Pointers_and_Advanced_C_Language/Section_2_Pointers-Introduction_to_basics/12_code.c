#include <stdio.h>

void findMinMax(int num1, int num2, int *pMax, int *pMin)
{
    if (num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
    // No need for any return
}

int main()
{
    int a = 3, b = 9, max, min;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // it will update values in this variables using the passed addresses
    findMinMax(a, b, &max, &min);

    printf("Max = %d, Min = %d\n", max, min);

    return 0;
}