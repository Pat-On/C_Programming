#include <stdio.h> // or malloc.h 
#include <stdlib.h>
// #include <malloc.h>

int main()
{
    int *a;
    int arraySize = 3;
    // scanf("%d", &arraySize);
    a = (int*)malloc(sizeof(int) * arraySize);

    // fill array with example values
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    // print value
    printf("Value    of a[0]: %d\n",  *a);       // 10 - pointers plus pointer arithmetic and you can have an access

    printf("Value    of a[0]: %d\n",  a[0]);       // 10
    printf("Value    of a[1]: %d\n",  a[1]);       // 20
    printf("Value    of a[2]: %d\n",  a[2]);       // 30

    printf("\n");

    // print pointer (address)
    printf("Address  of a[0]: %p\n",  (void*)&a[0]);  // e.g. 0x1234
    printf("Address  of a[1]: %p\n",  (void*)&a[1]);  // e.g. 0x1238 (+4 bytes)
    printf("Address  of a[2]: %p\n",  (void*)&a[2]);  // e.g. 0x123C (+4 bytes)

    printf("\n");

    // print next value using pointer arithmetic
    printf("a points to:      %d\n",  *a);         // 10  (same as a[0])
    printf("next value (a+1): %d\n",  *(a + 1));   // 20  (same as a[1])
    printf("next value (a+2): %d\n",  *(a + 2));   // 30  (same as a[2])

    free(a);
    return 0;
}