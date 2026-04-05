#include <stdio.h>

// Recursion Practice
// Develop a recursive function that receives an integer value "n".
// The function should print the value of "n" in Binary-Representation (base 2).
// For example:
//      "n" = 4  --> 100
//      "n" = 6  --> 110
//      "n" = 12 --> 1100

void printInBinary(int n)
{
    if (n <= 1)
        printf("%d", n);
    else
    {
        printInBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    printf("4  = "); printInBinary(4);  printf("\n");
    printf("6  = "); printInBinary(6);  printf("\n");
    printf("12 = "); printInBinary(12); printf("\n");

    return 0;
}