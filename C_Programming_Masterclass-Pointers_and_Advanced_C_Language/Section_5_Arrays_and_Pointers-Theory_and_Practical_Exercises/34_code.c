#include <stdio.h>

#define SIZE 4

// Exercise: Write a function that receives an Array and its size.
//           The function should calculate and return the Average Value of the Array.

int findSumArray(int* arr, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum = sum + arr[i];
    return sum;
}

double findArrayAverage(int* arr, int size)
{
    int sumOfArray;
    sumOfArray = findSumArray(arr, size);
    return (double)sumOfArray / size;
}

int main()
{
    int grades[SIZE] = { 80, 85, 72, 90 };
    double average;
    average = findArrayAverage(grades, SIZE);
    printf("Average = %.2f\n", average);
    return 0;
}