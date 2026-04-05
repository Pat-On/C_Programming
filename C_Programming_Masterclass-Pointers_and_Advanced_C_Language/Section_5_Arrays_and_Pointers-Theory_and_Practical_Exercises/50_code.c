#include <stdio.h>

int findSecondSmallest(int* arr, int size)
{
    int i;
    int min1 = arr[0];
    int min2 = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    return min2;
}

int main()
{
    int arr[] = {5, 3, 1, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Second Smallest = %d\n", findSecondSmallest(arr, size));

    return 0;
}