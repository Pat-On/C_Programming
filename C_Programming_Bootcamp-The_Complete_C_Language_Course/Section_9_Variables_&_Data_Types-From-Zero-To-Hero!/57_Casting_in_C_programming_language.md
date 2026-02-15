# Casting in C Programming Language

Implicit
```c
int x = 5;
double y = 2.5;
double result = x + y;  // x is implicitly converted to double
printf("%f\n", result);  // Output: 7.500000
```

Explicit
```c
double a = 9.7;
int b = (int)a;  // double → int (explicit)
printf("%d\n", b);  // Output: 9 (decimal part lost!)
```