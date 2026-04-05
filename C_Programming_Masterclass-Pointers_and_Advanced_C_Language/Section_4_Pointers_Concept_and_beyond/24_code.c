#include <stdio.h>

void swap(int *ptr1, int *ptr2) // pass by pointer / pass by address
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num1, num2;
    printf("Enter num1: \n");
    scanf("%d", &num1);
    printf("Enter num2: \n");
    scanf("%d", &num2);

    // num1 = 7 , num2 = 5

    printf("BEFORE SWAP: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2); // passing by address but it is a caller syntax
    printf("AFTER SWAP: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}