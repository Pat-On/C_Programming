#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5; // standard variable

    int *p;

    printf("%d \n", a);     // 5
    printf("%p \n", &a);    // 0x7ffde73cf39c 

    // accessing random memory - completely wrong
    printf("%p\n", p);      // 0x7ffc58c8d180
    printf("%d\n", *p);     // -1959878528

    p = &a;
    printf("%p\n", &a);     // 0x7ffde73cf39c 

    printf("%p\n", p);      // 0x7ffde73cf39c 
    printf("%d\n", *p);     // 5
}