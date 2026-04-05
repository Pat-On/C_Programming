#include <stdio.h>

// Exercise: Write a function that receives a Sorted (smallest->largest) Array of elements.
//           The function also receives a "value".
//           The function should find if there's a sum of 2 elements in the array that
//           equals to the received "value".
//           If there are such 2 elements, then return 1, and pass their indexes.
//           Else, return 0, and pass for both of them the value 0.

int findIf2ElementsSum(int* arr, int size, int value, int *iPtr, int *jPtr)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == value)
            {
                *iPtr = i;
                *jPtr = j;
                return 1;
            }
        }
    }
    *iPtr = 0;
    *jPtr = 0;
    return 0;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 9, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 13;
    int iIdx, jIdx;
    int result;

    result = findIf2ElementsSum(arr, size, value, &iIdx, &jIdx);

    if (result == 1)
        printf("Found! arr[%d]=%d + arr[%d]=%d = %d\n",
               iIdx, arr[iIdx], jIdx, arr[jIdx], value);
    else
        printf("No two elements sum to %d\n", value);

    return 0;
}