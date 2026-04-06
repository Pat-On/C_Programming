# `malloc` function

1. Allocates a `sequence of bytes`
    - for example 12 bytes
2. Returns the ADDRESS of the sequence
    - the address of the FIRST Byte
    - for example 300
3. can work with allocated sequence

![alt text](image.png)
- sequential memory


![alt text](image-1.png)
- we want `malloc` to allocate 12 bytes
- `malloc` return address of the first element


![alt text](image-2.png)
- the method is returning type `void *`


## Checking if allocated results were successful

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *bArr;
    int arraySize;
    scanf("%d", &arraySize);
    bArr = (double*)malloc(sizeof(double) * arraySize);

    if (bArr != NULL)
        printf("Allocation Succeeded!\n");
    else
        printf("Allocation Failed.\n");

    free(bArr);
    return 0;
}
```