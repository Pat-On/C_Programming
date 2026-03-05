# Unions - going further additional explanation and examples

```c
#include <stdio.h>
#include <stdlib.h>

// Unions

union Student {
    int ID;
    double average;
};

int main()
{
    union Student student1;
    union Student *ptrStudent2;

    printf("size of student1 union = %d\n", sizeof(student1));  // 8
    printf("size of ptrStudent2 = %d\n", sizeof(ptrStudent2));  // 4 - because it is just an address

    return 0;
}


```


