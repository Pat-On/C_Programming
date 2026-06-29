#include <stdlib.h>
#include <string.h> // required for memcpy (used in myRealloc2)

// Develop your special "realloc" function.
// The function should have the following signature:

// void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize);

// The function should implement a GENERAL/UNIVERSAL reallocation functionality
// (without using the realloc function...)

// IMPORTANT: 'size_t' is the correct type for sizes in C (defined in <stddef.h>/<stdlib.h>).
// It is unsigned and large enough to represent the size of any object in memory.
// Using 'unsigned' works but is less portable — prefer size_t in real code.
void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize);

int main()
{
	// malloc returns void* — in C you do NOT need to cast it, and casting can hide
	// a missing #include <stdlib.h> bug. The cast (int*) here is valid but unnecessary in C.
	// In C++ the cast IS required because C++ has stricter implicit conversion rules.
	int* numbers = (int*)malloc(3 * sizeof(int));
	int* newNumbers = NULL;

	// IMPORTANT: Always check the return value of malloc.
	// malloc returns NULL if allocation fails (e.g., out of memory).
	// Dereferencing a NULL pointer is undefined behavior and will crash.
	if (!numbers) // numbers == NULL
		return 1;

	numbers[0] = 3;
	numbers[1] = 5;
	numbers[2] = 4;

	newNumbers = (int*)myRealloc(numbers, 3 * sizeof(int), 4 * sizeof(int));

	// IMPORTANT: myRealloc frees 'numbers' internally (see free(srcblock) inside).
	// After calling myRealloc, 'numbers' is a dangling pointer — do NOT use or free it again.
	// Only newNumbers needs to be freed here.

	// IMPORTANT: Always check the return of your realloc-like function before using it.
	// If myRealloc returns NULL (failed malloc internally), newNumbers is NULL.
	// Freeing NULL is safe (no-op), but using NULL as an array would crash.
	free(newNumbers);
}

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize)
{
	int i;
	int smallSize;

	// Copy only up to the smaller of the two sizes to avoid reading past the old block
	// or writing past the new one.
	if(oldsize < newsize)
	{
		smallSize = oldsize;
	} else {
		smallSize = newsize;
	}

	// BUG: resultArr is int* but we copy byte-by-byte below using char* indexing.
	// resultArr[i] advances by sizeof(int) bytes each step, not 1 byte.
	// The destination should be char* (or unsigned char*) to match the byte-by-byte copy.
	// FIXED version would be: char* resultArr = (char*)malloc(newsize);
	int* resultArr = (int*)malloc(newsize);

	if (!resultArr) return NULL;

	// BUG: This for loop is wrong in two ways:
	//   1. 'i<0' does NOT initialize i — it is just an expression (evaluates to 0 or 1).
	//      i remains uninitialized (undefined behavior). Should be 'i=0'.
	//   2. The condition 'smallSize' never changes, so if smallSize > 0 this loops forever.
	//      Should be 'i < smallSize'.
	// CORRECT form: for(i = 0; i < smallSize; i++)
	for(i<0; smallSize; i++)
	{
		// Casting void* to char* allows byte-by-byte access.
		// char is guaranteed to be exactly 1 byte in C.
		// void* cannot be dereferenced directly — the compiler doesn't know the element size.
		// BUG: resultArr[i] writes sizeof(int) bytes apart (not 1 byte apart).
		// Should store into a char* destination to match the char* source indexing.
		resultArr[i] = ((char*)srcblock)[i];
	}

	// IMPORTANT: After copying, free the original block.
	// The caller must NOT use 'srcblock' (the original pointer) after this call —
	// it has been freed and is now a dangling pointer.
	free(srcblock);
	return resultArr;

	// WHY void* cannot be subscripted:
	//   srcblock is a void* — a pointer with no type information.
	//   The compiler doesn't know the size of what it points to, so
	//   srcblock[0] is meaningless: it can't calculate how many bytes to read.
	// resultArr[0] = srcblock[0]; // <-- compiler error
}

// myRealloc2 is the CORRECT implementation using memcpy (the standard approach).
// memcpy(dest, src, n) copies exactly n bytes from src to dest — safe and portable.
void* myRealloc2(void* srcblock, unsigned oldsize, unsigned newsize)
{
	int smallSize;
	void* newArr = malloc(newsize); // no cast needed in C

	if (!newArr) return NULL;

	if (oldsize < newsize)
		smallSize = oldsize;
	else
		smallSize = newsize;

	// memcpy works with void* directly — no casting needed.
	// It copies 'smallSize' bytes from srcblock into newArr.
	memcpy(newArr, srcblock, smallSize);

	// BUG: Missing 'free(srcblock)' — the original block is never released, causing a memory leak.
	// BUG: Missing 'return newArr' — the function has undefined behavior (no return value).
	//      Some compilers warn about this; in practice the returned value is garbage.
	// FIXED:
	free(srcblock);
	return newArr;
}
