#include <stdio.h>

// Write a function called "updateAverage".
// The function should receive 2 values and update by "reference" the average (of the caller).
// The function SHOULD NOT print/return anything.

void updateAverage(int num1, int num2, float *avg)
{
    *avg = (num1 + num2) / 2.0;
}

int main()
{
    int a, b;
    float average = 100; // it is passed by pointer and then updated

    printf("Enter the value for variable 'a': ");
    scanf("%d", &a);
    printf("Enter the value for variable 'b': ");
    scanf("%d", &b);

    updateAverage(a, b, &average);

    printf("Average = %f\n", average);

    return 0;
}