#include <stdio.h>

#define SIZE 4

int findIfKeyInArray(int* arr, int size, int key)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    int grades[SIZE] = { 80, 85, 72, 90 };
    int result;
    result = findIfKeyInArray(grades, SIZE, 80);
    //
    printf("results %i", result);
    return 0;
}