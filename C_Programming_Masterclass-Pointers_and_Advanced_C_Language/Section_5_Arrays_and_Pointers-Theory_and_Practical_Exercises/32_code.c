#include <stdio.h>

#define SIZE 4

// Exercise: Write a function that should receive an array and its size.
//           The function should find and return the maximum value in the array.

int findMaxInArray(int* arr, int size)
{
    int maxSoFar;
    int i;

    if (size <= 0)
        return -1;

    maxSoFar = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > maxSoFar)
            maxSoFar = arr[i];
    }

    return maxSoFar;
}

int main()
{
    int grades[SIZE] = { 80, 85, 72, 90 };
    int maxGrade;
    maxGrade = findMaxInArray(grades, SIZE);
    printf("Max Grade = %d\n", maxGrade);
    return 0;
}