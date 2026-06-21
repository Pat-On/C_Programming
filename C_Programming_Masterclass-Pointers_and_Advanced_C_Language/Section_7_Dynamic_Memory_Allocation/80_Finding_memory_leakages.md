# Additional Information and Tools

## Valgrind - finds memory leakages etc

Valgrind is an open-source instrumentation framework and memory debugging tool for Linux. It runs your program in a virtual environment and intercepts all memory operations to detect:

- **Memory leaks** - heap memory that was allocated but never freed
- **Use of uninitialized memory** - reading variables before they are assigned a value
- **Invalid memory access** - reading/writing beyond array bounds or after `free()`
- **Double frees** - calling `free()` on the same pointer more than once
- **Invalid frees** - passing an incorrect pointer to `free()`

### Basic Usage

```bash
valgrind ./your_program
```

### Full Leak Check (most common)

```bash
valgrind --leak-check=full --track-origins=yes ./your_program
```

### Output Summary Terms

| Term | Meaning |
|------|---------|
| `definitely lost` | Memory you allocated and lost all pointers to (real leak) |
| `indirectly lost` | Memory lost because a pointer to it was in leaked memory |
| `possibly lost` | Valgrind is unsure; often a false positive |
| `still reachable` | Memory not freed but still pointed to at program exit (not always a bug) |

> Valgrind slows execution ~10-50x, so use it during debugging, not in production.

### Supported Languages

Valgrind works primarily with compiled languages:

- **C** — the primary use case
- **C++** — fully supported
- **Fortran** — supported
- **Ada** — supported
- **Assembly** — works at the binary level

Limited/partial support for:

- **Java** — via JNI (native code only, not the JVM-managed heap)
- **Python** — only the C extension parts, not pure Python code

> Valgrind works at the binary level, so it is most useful for languages with **manual memory management** (C, C++). Garbage-collected languages (Java, Python, Go) handle memory automatically, so Valgrind cannot meaningfully track their managed heaps.
