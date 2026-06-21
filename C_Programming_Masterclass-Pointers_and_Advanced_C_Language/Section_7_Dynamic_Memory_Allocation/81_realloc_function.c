#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("grades[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}

int main()
{
    int i, totalGrades, extraGrades;
    int *gradesArray;
    int *temp;

    printf("How many grades? ");
    scanf("%d", &totalGrades);

    gradesArray = (int*)malloc(sizeof(int) * totalGrades);
    if (gradesArray == NULL)
    {
        printf("Allocation failed.\n");
        return 1;
    }

    for (i = 0; i < totalGrades; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &gradesArray[i]);
    }

    printf("\nOriginal array (%d grades):\n", totalGrades);
    printArray(gradesArray, totalGrades);

    printf("How many extra grades to add? ");
    scanf("%d", &extraGrades);

    /* Safe realloc: use a temp pointer so the original is not lost on failure */
    temp = (int*)realloc(gradesArray, sizeof(int) * (totalGrades + extraGrades));
    if (temp == NULL)
    {
        printf("Reallocation failed. Original data preserved.\n");
        free(gradesArray);
        return 1;
    }
    gradesArray = temp;

    for (i = totalGrades; i < totalGrades + extraGrades; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &gradesArray[i]);
    }

    totalGrades += extraGrades;

    printf("\nExpanded array (%d grades):\n", totalGrades);
    printArray(gradesArray, totalGrades);

    free(gradesArray);
    return 0;
}
