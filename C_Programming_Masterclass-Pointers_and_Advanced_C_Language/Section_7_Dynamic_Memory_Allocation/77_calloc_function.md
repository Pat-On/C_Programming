# `calloc` function

1. Allocates a `sequence of bytes` - for example 12 bytes
2. return the ADDRESS of the sequence
- the address of the first byte
- for example 3000
3. Can work with allocated sequence


in `calloc` all elements are set to `0`


## Signatures

`void * malloc (unsigned size)`


`void * calloc (unsigned num, unsigned size)`


explicit casting

`(int*) calloc (5, sizeof(int))`


```c
int main ()
{
    int *a;
    int arraySize;
    scanf("$d", &arraySize);
    a = (int*)calloc(arraySize, sizeof(int));
}
 

```

----

## from AI - additional
malloc is faster — here's why:
calloc does everything malloc does, plus it zeroes out the memory. That extra step takes time, especially for large allocations.
```
malloc:  [allocate] → done
calloc:  [allocate] → [zero every byte] → done
```

However, there's a nuance — the OS often gives you pre-zeroed memory pages anyway (for security reasons), so in practice the difference can be negligible or even unnoticeable for small allocations.
The gap becomes more visible when:

- Allocating large chunks of memory
- Running in a tight loop with many allocations
- Working in performance-critical or embedded code

Bottom line:

- Don't choose malloc over calloc just for speed unless you've actually profiled and it's a bottleneck
- Choose based on whether you need zeroed memory or not — that's the more important factor in most programs


## Note about modern OS

You're getting zeros because of how your OS works, not because of malloc itself.
Modern operating systems (Windows, Linux, macOS) always give you zeroed memory pages for security — they don't want one process seeing another process's old data. So when your program starts fresh and asks for memory, the OS hands it clean zeroed pages.

Why you see zeros with malloc:

- Your program just started → OS gives fresh zeroed pages → looks like calloc

When you'd actually see garbage with malloc: