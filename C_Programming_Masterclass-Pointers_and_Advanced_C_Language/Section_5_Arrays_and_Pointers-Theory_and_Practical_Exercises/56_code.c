#include <stdio.h>

// For example:
// "121"    --> 1
// "12342"  --> 0
// "987789" --> 1

int isArrayPalindrome(int* arr, int size)
{
    if (size <= 1) // an array with 0 or 1 elements (considered to be a palindrome)
        return 1;

    if (arr[0] != arr[size - 1])
        return 0;
    else
        return isArrayPalindrome(arr + 1, size - 2);
}

int main()
{
    int arr1[] = {9, 8, 7, 7, 8, 9};
    int arr2[] = {1, 2, 3, 4, 2};
    int arr3[] = {9, 8, 7, 7, 8, 9};

    printf("arr1 is palindrome: %d\n", isArrayPalindrome(arr1, 6));  // 1
    printf("arr2 is palindrome: %d\n", isArrayPalindrome(arr2, 5));  // 0
    printf("arr3 is palindrome: %d\n", isArrayPalindrome(arr3, 6));  // 1

    return 0;
}