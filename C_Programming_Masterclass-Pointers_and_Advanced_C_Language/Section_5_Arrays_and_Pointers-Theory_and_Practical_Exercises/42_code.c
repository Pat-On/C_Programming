#include <stdio.h>

// Iterative Approach - Solution

int checkIsSorted(int *arr, int size, int *isReallySorted)
{
    int i;
    *isReallySorted = 1;  // Assuming that the array is "Really Sorted"
    for (i = 1; i < size; i++)
    {
        if (arr[i] <= arr[i-1])  // If the element on the right is less than or equals to the element on the left
            *isReallySorted = 0; // The Array IS NOT "Really Sorted"
        if (arr[i] < arr[i-1])  // If the element on the right is less than the element on the left
            return 0;
    }
    return 1;
}

int main()
{
    int valuesArr[] = {1, 2, 5, 7, 10};
    int isReallySortedFlag;
    int result;

    result = checkIsSorted(valuesArr, 5, &isReallySortedFlag);

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