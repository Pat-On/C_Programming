# Introduction


## Simple swap
```c
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 7;
    int temp;

    printf("Before swap:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swap:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
```

# function call - nothing happened - ha :D 
- passing params by value

```c
#include <stdio.h>

void swap(int num1, int num2)
{
    int temp;
    temp   = num1;
    num1   = num2;
    num2   = temp;
    // Changes only affect local copies → original a and b stay the same
}

int main()
{
    int a = 5, b = 7;

    printf("First number before swap  = %d\n", a);
    printf("Second number before swap = %d\n", b);

    swap(a, b);

    printf("First number after swap  = %d\n", a);
    printf("Second number after swap = %d\n", b);

    return 0;
}
```


FIX to it:
```c
#include <stdio.h>

// Function now takes pointers so it can modify original variables
void swap(int *num1, int *num2)
{
    int temp;
    temp   = *num1;
    *num1  = *num2;
    *num2  = temp;
}

int main()
{
    int a = 5, b = 7;

    printf("First number before swap  = %d\n", a);
    printf("Second number before swap = %d\n", b);

    swap(&a, &b);  // Pass addresses using &

    printf("First number after swap  = %d\n", a);
    printf("Second number after swap = %d\n", b);

    return 0;
}
```