#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

// Array of Integers
// We will return the address of the first element
int *createArray();

void printArr(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int *arr;
    arr = createArray();
    printArr(arr, SIZE);
    return 0;
}

int *createArray()
{
    int i;
    // int myArr[SIZE]; //
    //     54_code.c: In function ‘createArray’:
    // 54_code.c:36:12: warning: function returns address of local variable [-Wreturn-local-addr]
    //    36 |     return myArr;
    //       |            ^~~~~
    int *myArr = malloc(SIZE * sizeof(int));  // correct


    printf("Enter %d elements to your array.\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &myArr[i]);
    }
    return myArr;
}