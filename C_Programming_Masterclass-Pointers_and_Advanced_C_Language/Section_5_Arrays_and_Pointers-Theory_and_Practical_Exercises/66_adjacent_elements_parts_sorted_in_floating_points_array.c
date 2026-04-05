#include <stdio.h>

// For example #2:
// Given array: 1.4, 3.25, 4.2
// The function should return 0

// Version 1 - with helper variables
int isSpecialFloatingSorted(double* arr, int size)
{
    int leftElementInteger, rightElementInteger;
    double leftElementFractional, rightElementFractional;

    if (size == 1)
        return 1;

    leftElementInteger  = (int)arr[0];
    rightElementInteger = (int)arr[1];

    leftElementFractional  = arr[0] - leftElementInteger;
    rightElementFractional = arr[1] - rightElementInteger;

    if (leftElementInteger <= rightElementInteger && leftElementFractional >= rightElementFractional)
        return isSpecialFloatingSorted(arr + 1, size - 1);
    else
        return 0;
}

// Version 2 - compact version
int isSpecialFloatingSorted2(double* arr, int size)
{
    if (size == 1)
        return 1;

    if (((int)arr[0] <= (int)arr[1]) && (arr[0] - (int)arr[0] >= arr[1] - (int)arr[1]))
        return isSpecialFloatingSorted(arr + 1, size - 1);
    else
        return 0;
}

int main()
{
    double arr1[] = {1.9, 2.7, 3.4};   // integer ASC, fractional DESC
    double arr2[] = {1.4, 3.25, 4.29};  // fails fractional check

    printf("arr1: %d\n", isSpecialFloatingSorted(arr1, 3));   // 1
    printf("arr2: %d\n", isSpecialFloatingSorted(arr2, 3));   // 0

    printf("arr1: %d\n", isSpecialFloatingSorted2(arr1, 3));   // 1
    printf("arr2: %d\n", isSpecialFloatingSorted2(arr2, 3));   // 0

    return 0;
}