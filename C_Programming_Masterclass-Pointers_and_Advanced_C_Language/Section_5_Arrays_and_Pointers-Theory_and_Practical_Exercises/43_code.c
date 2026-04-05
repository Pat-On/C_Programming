#include <stdio.h>

// Recursive Approach - Solution
// Recursive Calls (with some logic behind them)
// Base/Stopping Condition

int checkIsSortedRecursive(int *arr, int size, int *isReallySorted)
{
    int result; // Returned Result

    if (size == 1) // The array has just 1 element
    {
        *isReallySorted = 1; // We will assume that the array is Really Sorted
        return 1;
    }

    result = checkIsSortedRecursive(arr, size - 1, isReallySorted);

    if (result != 0 && arr[size-1] == arr[size-2]) // If the array is Really Sorted / Sorted AND last elements are equal
    {
        *isReallySorted = 0;
    }

    if (result != 0 && arr[size-1] < arr[size-2]) // If the array is Really Sorted / Sorted AND the element on right is less
    {
        *isReallySorted = 0;
        return 0;
    }

    return result;
}

int main()
{
    int valuesArr[] = {1, 2, 5, 7, 10};
    int isReallySortedFlag;
    int result;

    result = checkIsSortedRecursive(valuesArr, 5, &isReallySortedFlag);

    if (result == 1)
        printf("The array is Really Sorted / Sorted\n");
    else if (result == 0)
        printf("The array is Not Sorted At All\n");

    if (isReallySortedFlag == 1)
        printf("The array is Really Sorted\n");
    else if (isReallySortedFlag == 0)
        printf("The array is NOT Really Sorted\n");

    return 0;
}