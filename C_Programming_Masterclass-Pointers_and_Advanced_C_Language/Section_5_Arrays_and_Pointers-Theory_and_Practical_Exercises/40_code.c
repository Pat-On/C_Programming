#include <stdio.h>
#include <stdlib.h>

// Work With Neighbors!

// Write a function that receives an array and its size.
// Return 1, if the array has some element which value equals to the sum of both its neighbors (right,left).
// Return 0.

// Example #1 - [1,4,7,3,2]  --> Return 1
// Example #2 - [1,4,1,4,2]  --> Return 0

int hasNeighbors(int *arr, int size)
{
    int i;
    for (i = 1; i < size - 1; i++)
    {
        if (arr[i] == arr[i-1] + arr[i+1])
            return 1;
    }
    return 0;
}

int main()
{
    int arr1[] = {1, 4, 7, 3, 2};
    int arr2[] = {1, 4, 1, 4, 2};

    printf("Array 1 result: %d\n", hasNeighbors(arr1, 5));  // 1
    printf("Array 2 result: %d\n", hasNeighbors(arr2, 5));  // 0

    return 0;
}