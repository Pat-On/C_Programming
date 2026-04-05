#include <stdio.h>

// For example: Given array: 1,3,2,4, size = 4
// Func A should print: 1 3 2 4
// Func B should print: 4 2 3 1

// Func A - prints normally
void printArrayRecursive1(int* arr, int size)
{
    if (size > 0)
    {
        printf("%d ", arr[0]);
        printArrayRecursive1(arr + 1, size - 1);
    }
}

// Func B - prints reversed
void printArrayReversedRecursive1(int* arr, int size)
{
    if (size > 0)
    {
        printArrayRecursive1(arr + 1, size - 1);
        printf("%d ", arr[0]);
    }
}

int main()
{
    int arr[] = {1, 3, 2, 4};

    printf("Func A: ");
    printArrayRecursive1(arr, 4);
    printf("\n");

    printf("Func B: ");
    printArrayReversedRecursive1(arr, 4);
    printf("\n");

    return 0;
}