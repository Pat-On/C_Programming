#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ========================
// Function 1: swapInts
// ========================
void swapInts(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// ========================
// Function 2: swapIntsNoThird1 (Addition-Subtraction)
// ========================
void swapIntsNoThird1(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// ========================
// Function 3: swapIntsNoThird2 (Multiplication-Division)
// ========================
void swapIntsNoThird2(int *a, int *b)
{
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

// ========================
// Function 4: genericSwap
// ========================
void genericSwap(void *a, void *b, int size)
{
    void *temp = malloc(size);

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}

// ========================
// Main - Test All Functions
// ========================
int main()
{
    printf("=================================\n");
    printf("  Test 1: swapInts (with temp)  \n");
    printf("=================================\n");
    int n1 = 5, n2 = 7;
    printf("BEFORE: n1 = %d, n2 = %d\n", n1, n2);
    swapInts(&n1, &n2);
    printf("AFTER:  n1 = %d, n2 = %d\n\n", n1, n2);

    printf("=================================\n");
    printf(" Test 2: swapIntsNoThird1       \n");
    printf(" (Addition-Subtraction Method)  \n");
    printf("=================================\n");
    int n3 = 10, n4 = 20;
    printf("BEFORE: n3 = %d, n4 = %d\n", n3, n4);
    swapIntsNoThird1(&n3, &n4);
    printf("AFTER:  n3 = %d, n4 = %d\n\n", n3, n4);

    printf("=================================\n");
    printf(" Test 3: swapIntsNoThird2       \n");
    printf(" (Multiplication-Division Method)\n");
    printf("=================================\n");
    int n5 = 3, n6 = 9;
    printf("BEFORE: n5 = %d, n6 = %d\n", n5, n6);
    swapIntsNoThird2(&n5, &n6);
    printf("AFTER:  n5 = %d, n6 = %d\n\n", n5, n6);

    printf("=================================\n");
    printf("  Test 4: genericSwap (int)     \n");
    printf("=================================\n");
    int n7 = 100, n8 = 200;
    printf("BEFORE: n7 = %d, n8 = %d\n", n7, n8);
    genericSwap(&n7, &n8, sizeof(int));
    printf("AFTER:  n7 = %d, n8 = %d\n\n", n7, n8);

    printf("=================================\n");
    printf("  Test 5: genericSwap (double)  \n");
    printf("=================================\n");
    double d1 = 90.5, d2 = 89.7;
    printf("BEFORE: d1 = %.1f, d2 = %.1f\n", d1, d2);
    genericSwap(&d1, &d2, sizeof(double));
    printf("AFTER:  d1 = %.1f, d2 = %.1f\n\n", d1, d2);

    printf("=================================\n");
    printf("  Test 6: genericSwap (char)    \n");
    printf("=================================\n");
    char c1 = 'A', c2 = 'Z';
    printf("BEFORE: c1 = %c, c2 = %c\n", c1, c2);
    genericSwap(&c1, &c2, sizeof(char));
    printf("AFTER:  c1 = %c, c2 = %c\n\n", c1, c2);

    return 0;
}