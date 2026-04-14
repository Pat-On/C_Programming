#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    free(ptr);                  // memory freed
    printf("\n %d \n", *ptr);   // ❌ dangling! ptr still points to freed memory
}
