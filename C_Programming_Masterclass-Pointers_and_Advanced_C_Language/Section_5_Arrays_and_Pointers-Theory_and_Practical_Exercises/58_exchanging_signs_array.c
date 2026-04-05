#include <stdio.h>

// Exercise - Recursion & Arrays //
// Develop a recursive function that receives an array of integers and its size.
// The function should return:
//      - 1, if every two adjacent elements have the opposite sign.
//      - 0, otherwise (at least one pair of adjacent elements with the same sign).
//
// For example:
//      arr = -1,2,-4, size = 3 --> 1
//      arr = 1,-2,4,5,-3 size = 5 --> 0

// Version 1 - checking from the end
int isArrayAlternatingSign(int* arr, int size)
{
    if (size == 1)
        return 1;
    if (arr[size - 1] * arr[size - 2] >= 0)
        return 0;
    return isArrayAlternatingSign(arr, size - 1);
}

// Version 2 - checking from the front
int isArrayAlternatingSign2(int* arr, int size)
{
    if (size == 1)
        return 1;
    if (arr[0] * arr[1] >= 0)
        return 0;
    return isArrayAlternatingSign2(arr + 1, size - 1);
}

int main()
{
    int arr1[] = {-1, 2, -4};
    int arr2[] = {1, -2, 4, 5, -3};

    printf("arr1 Version1: %d\n", isArrayAlternatingSign(arr1, 3));   // 1
    printf("arr1 Version2: %d\n", isArrayAlternatingSign2(arr1, 3));  // 1

    printf("arr2 Version1: %d\n", isArrayAlternatingSign(arr2, 5));   // 0
    printf("arr2 Version2: %d\n", isArrayAlternatingSign2(arr2, 5));  // 0

    return 0;
}