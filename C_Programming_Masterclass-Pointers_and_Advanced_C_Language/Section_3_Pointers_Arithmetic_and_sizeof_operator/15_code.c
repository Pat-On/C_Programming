#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int grades[3] = {80, 90, 100};

    int *gradesPtr = grades;

    printf("\n grades start at: %p \n", gradesPtr);
    printf("\n grades start at: %p \n", gradesPtr+1);

    printf("Pointer address as decimal: %llu\n", (unsigned long long)(uintptr_t)gradesPtr);
    printf("Pointer address as decimal: %llu\n", (unsigned long long)(uintptr_t)1+gradesPtr);

    printf("Pointer address as decimal: %llu\n", (unsigned long long)(uintptr_t)(gradesPtr+1));
}