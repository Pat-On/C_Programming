#include <stdio.h>
#include <stdlib.h>

int main()
{
    // First allocation - fill with recognizable values
    int *a = (int*)malloc(5 * sizeof(int));
    a[0] = 111;
    a[1] = 222;
    a[2] = 333;
    a[3] = 444;
    a[4] = 555;

    printf("First array (a):\n");
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    free(a); // memory is released but NOT wiped

    // Second allocation - malloc reuses the same memory block
    int *b = (int*)malloc(5 * sizeof(int));

    printf("\nSecond array (b) - no initialization:\n");
    for (int i = 0; i < 5; i++)
        printf("b[%d] = %d\n", i, b[i]); // will print 111,222,333,444,555 (garbage from a)

    free(b);
    return 0;
}