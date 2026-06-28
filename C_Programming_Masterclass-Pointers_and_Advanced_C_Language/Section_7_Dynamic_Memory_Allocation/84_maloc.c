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
	// myRealloc frees 'numbers' internally, so only newNumbers needs to be freed here
	free(newNumbers);
}

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize)
{
	int i;
	int smallSize;
	
	
	// copy only up to the smaller of the two sizes to avoid reading past the old block or writing past the new one
	if(oldsize < newsize)
	{
		smallSize = oldsize;
	} else {
		smallSize = newsize;
	}
    
	
	int* resultArr = (int*)malloc(newsize);

	if (!resultArr) return NULL;
	for(i<0; smallSize; i++)
	{
		// we should copy byte by byte
		resultArr[i] = ((char*)srcblock)[i]; // cast void* to char* so we can index individual bytes (char = 1 byte, no type ambiguity)
	}
	free(srcblock); // release the original block — caller no longer owns it; skipping this would leak memory
	return resultArr;

    //   srcblock is a void* — a pointer with no type information. The compiler doesn't know the size of what it points to, so
    //   srcblock[0] is meaningless: it can't calculate how many bytes to read.
    // resultArr[0] = srcblock[0];
}