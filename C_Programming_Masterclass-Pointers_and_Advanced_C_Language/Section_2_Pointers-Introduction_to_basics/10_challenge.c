#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1=80, grade2=100;

    printf("G1 %d\n", grade1);
    printf("G1 %p\n", &grade1);


    printf("G2 %d\n", grade2);
    printf("G2 %p\n", &grade2);


    return 0;
}