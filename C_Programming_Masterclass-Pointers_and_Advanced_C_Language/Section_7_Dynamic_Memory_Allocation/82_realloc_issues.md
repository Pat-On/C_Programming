# `realloc` Function Issues

1. Overwriting the actual pointer
   1. `realoc` function fails
   2. loosing previous memory

2. Different implementations
   1. `free` and `erase` memory

---

## Recap

### The Problem

If you write `realloc` directly back into the original pointer:

```c
gradesArray = realloc(gradesArray, sizeof(int) * newSize);
```

And `realloc` fails, it returns `NULL` — now `gradesArray` is `NULL` and the original block is lost forever (memory leak).

### The Fix — Use a Temporary Pointer

```c
temp = realloc(gradesArray, sizeof(int) * newSize);

if (temp == NULL)
{
    /* realloc failed — gradesArray still holds the original block */
    free(gradesArray);  /* release it safely before exiting */
    return 1;
}

gradesArray = temp;  /* only update gradesArray once we know it succeeded */
```

### Compile and Run

```bash
gcc -Wall -o 81_realloc_function 81_realloc_function.c
./81_realloc_function
```

| Part | Meaning |
|------|---------|
| `gcc` | the C compiler |
| `-Wall` | enable all warnings (catches unused variables, missing returns, etc.) |
| `-o 81_realloc_function` | name the output binary `81_realloc_function` (without this, defaults to `a.out`) |
| `81_realloc_function.c` | the source file to compile |
| `./81_realloc_function` | run the binary — `./` means look in the current directory |

