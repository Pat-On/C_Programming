#include <stdio.h>

void printValuesFrequency(int* arr, int size)
{
    int keys[100];    // stores unique values
    int counts[100];  // stores count for each value
    int mapSize = 0;  // how many unique values found

    int i, j;
    int found;

    for (i = 0; i < size; i++)
    {
        found = 0;

        // Check if value already exists in our "map"
        for (j = 0; j < mapSize; j++)
        {
            if (keys[j] == arr[i])
            {
                counts[j]++;  // increment count
                found = 1;
                break;
            }
        }

        // If not found, add new entry to "map"
        if (found == 0)
        {
            keys[mapSize] = arr[i];
            counts[mapSize] = 1;
            mapSize++;
        }
    }

    // Print all key-count pairs
    for (i = 0; i < mapSize; i++)
    {
        printf("Value %d appears %d times\n", keys[i], counts[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printValuesFrequency(arr, size);

    return 0;
}