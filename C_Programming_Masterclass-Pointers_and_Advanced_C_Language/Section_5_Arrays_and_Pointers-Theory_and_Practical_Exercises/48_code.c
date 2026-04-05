#include <stdio.h>

void printValuesFrequency(int* arr, int size)
{
    int i, j;
    int leftFlag;
    int countValue;

    for (i = 0; i < size; i++)
    {
        countValue = 1;
        leftFlag = 0;

        // Left Part..
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                leftFlag = 1;
                break;
            }
        }

        if (leftFlag == 1)
            continue;

        // Right Part..
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
                countValue++;
        }

        // Print the actual frequency...
        // Value at arr[i] appears countValue times...
        printf("Value %d appears %d times\n", arr[i], countValue);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printValuesFrequency(arr, size);

    return 0;
}