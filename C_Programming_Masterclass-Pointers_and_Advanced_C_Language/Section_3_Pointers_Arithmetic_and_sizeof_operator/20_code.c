#include <stdio.h>

int main() {

// 1. Array of 3 integers
    int arr[3];
    printf("Array Size (int): %zu bytes\n", sizeof(arr));
    // Calculation: 3 elements * 4 bytes each = 12 bytes

    // 2. Array of 5 doubles
    double brr[5];
    printf("Array Size (double): %zu bytes\n", sizeof(brr));
    // Calculation: 5 elements * 8 bytes each = 40 bytes
    return 0;
}
