#include <stdio.h>

// For example:
// Given array: 1,4,3 , size = 3
// The function should return 2.66666... (8/3)

double findArrayAverage(int* arr, int size)
{
    double avgSoFar;

    if (size == 1)
        return arr[0];

    avgSoFar = findArrayAverage(arr + 1, size - 1);

    return (avgSoFar * (size - 1) + arr[0]) / size;
}

int main()
{
    int arr[] = {1, 4, 3};
    printf("Average = %f\n", findArrayAverage(arr, 3));
    return 0;
}