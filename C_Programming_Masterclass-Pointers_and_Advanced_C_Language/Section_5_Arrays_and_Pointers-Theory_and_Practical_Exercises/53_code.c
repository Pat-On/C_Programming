#include <stdio.h>

int findIf2ElementsSumOptimized(int* arr, int size, int value, int* iPtr, int* jPtr)
{
    int i, j;
    int currentSum;

    i = 0;
    j = size - 1;

    while (i < j)
    {
        currentSum = arr[i] + arr[j];

        if (currentSum == value)
        {
            *iPtr = i;
            *jPtr = j;
            return 1;
        }
        else if (currentSum < value)
            i++;
        else // currentSum > value
            j--;
    }

    *iPtr = 0;
    *jPtr = 0;
    return 0;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 9, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 11;
    int iIdx, jIdx;
    int result;

    result = findIf2ElementsSumOptimized(arr, size, value, &iIdx, &jIdx);

    if (result == 1)
        printf("Found! arr[%d]=%d + arr[%d]=%d = %d\n",
               iIdx, arr[iIdx], jIdx, arr[jIdx], value);
    else
        printf("No two elements sum to %d\n", value);

    return 0;
}