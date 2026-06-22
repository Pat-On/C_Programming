#include <stdlib.h>

// Develop your special "realloc" function.
// The function should have the following signature:

// void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize);

// The function should implement a GENERAL/UNIVERSAL reallocation functionality
// (without using the realloc function...)
void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize);

int main()
{
	int* numbers = (int*)malloc(3 * sizeof(int));
	int* newNumbers = NULL;
	if (!numbers) // numbers == NULL
		return 1;
	numbers[0] = 3;
	numbers[1] = 5;
	numbers[2] = 4;
	newNumbers = (int*)myRealloc(numbers, 3 * sizeof(int), 4 * sizeof(int));
}

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize)
{
    int* resultArr = (int*)malloc(newsize);

    //      srcblock is a void* — a pointer with no type information. The compiler doesn't know the size of what it points to, so
    //   srcblock[0] is meaningless: it can't calculate how many bytes to read.
    resultArr[0] = srcblock[0];
}