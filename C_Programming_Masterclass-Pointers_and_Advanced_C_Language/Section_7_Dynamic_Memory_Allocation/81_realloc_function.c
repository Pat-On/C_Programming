#include <stdio.h>
#include <stdlib.h>  /* required for malloc, realloc, free, exit */

/* prints every element of a dynamically allocated int array */
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
    int *temp;  /* temporary pointer used for safe realloc (see below) */

    printf("How many grades? ");
    scanf("%d", &totalGrades);

    /* malloc allocates a block of (totalGrades * 4) bytes on the heap
       and returns a pointer to the start of that block.
       The memory is uninitialized — values are garbage until we write to them. */
    gradesArray = (int*)malloc(sizeof(int) * totalGrades);

    /* malloc returns NULL if it cannot allocate the requested memory */
    if (gradesArray == NULL)
    {
        printf("Allocation failed.\n");
        return 1;
    }

    /* fill the array with values entered by the user */
    for (i = 0; i < totalGrades; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &gradesArray[i]);
    }

    printf("\nOriginal array (%d grades):\n", totalGrades);
    printArray(gradesArray, totalGrades);

    printf("How many extra grades to add? ");
    scanf("%d", &extraGrades);

    /* realloc resizes an existing heap block.
       It copies the old data to the new (larger) block and frees the old one.
       Three possible outcomes:
         1. Success, same address  — block was extended in place.
         2. Success, new address   — data was moved; old pointer is now invalid.
         3. Failure                — returns NULL; original block is untouched.

       DANGER: never write  gradesArray = realloc(gradesArray, ...)
       If realloc fails it returns NULL and gradesArray becomes NULL,
       meaning we also lose the pointer to the original block — memory leak! */
    temp = (int*)realloc(gradesArray, sizeof(int) * (totalGrades + extraGrades));

    /* if realloc returned NULL it means it could not find enough memory.
       Because we used temp instead of overwriting gradesArray directly,
       gradesArray still holds the original pointer — the old data is safe.
       We free gradesArray to release that original block before exiting,
       otherwise it would leak (no one else holds a pointer to it). */
    if (temp == NULL)
    {
        printf("Reallocation failed. Original data preserved.\n");
        free(gradesArray);  /* release the original block — we still have its address */
        return 1;
    }

    /* realloc succeeded — safe to update the main pointer now */
    gradesArray = temp;

    /* fill only the newly added slots (indices totalGrades to totalGrades+extraGrades-1) */
    for (i = totalGrades; i < totalGrades + extraGrades; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &gradesArray[i]);
    }

    totalGrades += extraGrades;  /* update the count to reflect the full array */

    printf("\nExpanded array (%d grades):\n", totalGrades);
    printArray(gradesArray, totalGrades);

    /* free releases the heap memory back to the OS.
       Always free every pointer you malloc/realloc when you are done with it. */
    free(gradesArray);
    return 0;
}
