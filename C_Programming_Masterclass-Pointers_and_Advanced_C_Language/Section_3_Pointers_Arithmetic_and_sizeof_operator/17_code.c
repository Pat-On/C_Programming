#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int num = 30;
    printf("%p\n", &num);

    int *p;

    printf("%p\n", &p);


    printf("%d \n", num);

    p = &num;

    printf("%p\n", &num);

    printf("%p\n", p);

    *p = 20;

    printf("%d\n", num);
}