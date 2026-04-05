#include <stdio.h>

#define SIZE 4

void swap(char* ptr1, char* ptr2)
{
    char temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArray(char* arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}

void reverseArrIterative(char* arr, int size)
{
    int i;
    for (i = 0; i < size / 2; i++)
        swap(&arr[i], &arr[size - 1 - i]);
}

void reverseArrRecursive(char* arr, int size)
{
    if (size > 1)
    {
        swap(&arr[0], &arr[size - 1]);
        // swap(arr, arr+size-1);
        reverseArrRecursive(arr + 1, size - 2);
    }
}

int main()
{
    char arr[SIZE] = { 'a', 'f', 'k', 'd' };

    char arr2[SIZE] = { 'a', 'f', 'k', 'd' };

    printArray(arr, SIZE);

    reverseArrRecursive(arr, SIZE);
    printArray(arr, SIZE);

    printArray(arr2, SIZE);

    reverseArrIterative(arr2, SIZE);
    printArray(arr2, SIZE);

    return 0;
}