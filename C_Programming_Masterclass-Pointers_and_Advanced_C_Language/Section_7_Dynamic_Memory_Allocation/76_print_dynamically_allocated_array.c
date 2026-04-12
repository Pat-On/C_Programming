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

int main()
{
    int *grades;
    int arraySize;
    printf("Enter the number of grades that you have: ");
    scanf("%d", &arraySize);
    grades = (int*)malloc(sizeof(int)*arraySize);

    printArray(grades, arraySize);
    return 0;
}