#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swapArrayO1(int **ptr1, int **ptr2)
{
    int *temp;
    temp  = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArr(int *arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int *Array1 = malloc(SIZE * sizeof(int)); // AI coded it in a funny way xD
    int *Array2 = malloc(SIZE * sizeof(int));

    Array1[0]=1; Array1[1]=3; Array1[2]=6; Array1[3]=8;  Array1[4]=10;
    Array2[0]=2; Array2[1]=2; Array2[2]=4; Array2[3]=11; Array2[4]=17;

    printf("Array values before swap\n");
    printArr(Array1);
    printArr(Array2);

    swapArrayO1(&Array1, &Array2);  // swap the POINTERS

    printf("Array values after swap\n");
    printArr(Array1);
    printArr(Array2);

    free(Array1);
    free(Array2);

    return 0;
}