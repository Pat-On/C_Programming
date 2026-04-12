#include <stdio.h>
#include <stdlib.h>

void printArray(int *ptr, int size)
{
    int i;
    printf("Printing the GRADES:\n");
    for (i=0; i<size; i++)
    {
        printf("grades[%d] = %d\n", i, ptr[i]);
    }
    printf("Done.\n");
}

int main ()
{
    int *a;
    int arraySize;
    scanf("%d", &arraySize);
    // a = (int*)calloc(arraySize, sizeof(int));

    a = (int*)malloc(arraySize *sizeof(int));


    printArray(a, arraySize);
}