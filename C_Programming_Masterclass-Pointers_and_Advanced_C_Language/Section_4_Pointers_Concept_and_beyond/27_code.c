# include <stdio.h>
# include <stdlib.h>
# include <string.h>


void genericSwap(void *a, void *b, int size) //  we assume that size > 0
{
    // size - specifies the number of bytes
    void* temMemory = malloc(size);

    // memory copy function
    // void * memcpy(void *dest, const void * src,m size_t num)
    memcpy(temMemory, a, size);

    memcpy(a, b, size);

    memcpy(a, temMemory, size);
}

int main()
{
    int num1 = 5, num2 = 7;
    double average1 = 90.5, average2 = 89.7;
    genericSwap(&average1, &average2, sizeof(double));

    genericSwap(&num1, &num2, sizeof(int));

}