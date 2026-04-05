#include <stdio.h>

#define SIZE 4

// InputArray Function
void inputArray(int* arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter value #%d:", i + 1);
        scanf("%d", &arr[i]);
    }
}

// DisplayArray Function
void displayArray(int* arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Value #%d: %d\n", i + 1, arr[i]);
    }
}

int main()
{
    int grades[SIZE];
    inputArray(grades, SIZE);
    // grades array should be "filled with values"...
    displayArray(grades, SIZE);
    return 0;
}