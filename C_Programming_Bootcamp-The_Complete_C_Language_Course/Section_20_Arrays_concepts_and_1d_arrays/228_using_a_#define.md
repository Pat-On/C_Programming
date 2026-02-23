# using a `#define`

## Question - how to change the length array?
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int i, maxIndex;

    // Input 7 numbers
    for (i = 0; i < 7; i++)
    {
        printf("Enter number %d: ", i + 1);
        // scanf("%d", &arr[i]);
        grades[i] = i;
    }

    // Assume first element is the maximum
    maxIndex = 0;

    // Find index of maximum value
    for (i = 1; i < 7; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("Index of Max Digit is: %d\n", maxIndex);

    return 0;
}

```


## Answer

```c
#include <stdio.h>

#define SIZE 7          # <---- setting constant

int main()
{
    int arr[SIZE];
    int i, maxIndex;

    // Input loop: read SIZE (7) numbers from the user
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize: assume the first element (index 0) is the maximum
    maxIndex = 0;

    // Find the index of the maximum value
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("Index of Max Digit is: %d\n", maxIndex);

    return 0;
}
```

# Modern style with const int (C99+) instead of #define

```c
const int SIZE = 7;
int grades[SIZE];
```