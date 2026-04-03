#include <stdio.h>

int main() {
    int *ptr1;

    printf("%zu \n", sizeof(ptr1));

    int grade1 = 80;

    ptr1 = &grade1;

    printf("%zu \n", sizeof(ptr1));

    double *ptr2;

    printf("%zu \n", sizeof(ptr2));

    double grade2 = 75.5;

    ptr2 = &grade2;

    printf("%zu \n", sizeof(ptr2));

    printf("%i \n", ptr2);

    // -------

    int arr[6] = {6};
    arr[1] = 9;


    printf("Address: %p \n", arr);
    // Address: 3000

    printf("Array Size: %d \n", sizeof(arr));
    // printed result: 24 bytes

    int *aPtr = arr;

    printf("Address: %p \n", aPtr);
    // Address: 3000

    printf("Array Size: using pointer wrong %d \n", sizeof(aPtr));

    printf("Array Size: using pointer wrong %d \n", sizeof(*aPtr));

    printf("Value %d \n", *aPtr);
    printf("Value %d \n", *(aPtr+1));




    return 0;
}