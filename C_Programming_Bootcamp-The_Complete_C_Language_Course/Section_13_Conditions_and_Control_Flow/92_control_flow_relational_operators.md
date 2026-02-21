# Control Flow - Relational operators

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("a == b : %d\n", a == b);   // 0
    printf("a != b : %d\n", a != b);   // 1
    printf("a > b  : %d\n", a > b);    // 0
    printf("a < b  : %d\n", a < b);    // 1
    printf("a >= 10: %d\n", a >= 10);  // 1
    printf("b <= 20: %d\n", b <= 20);  // 1

    return 0;
}

```

| Operator | Meaning                      | Example     | Description (Returns 1 if true, 0 if false)          |
|----------|------------------------------|-------------|------------------------------------------------------|
| `==`     | Equal to                     | `a == b`    | True if `a` equals `b`                               |
| `!=`     | Not equal to                 | `a != b`    | True if `a` does **not** equal `b`                   |
| `>`      | Greater than                 | `a > b`     | True if `a` is greater than `b`                      |
| `<`      | Less than                    | `a < b`     | True if `a` is less than `b`                         |
| `>=`     | Greater than or equal to     | `a >= b`    | True if `a` is greater than or equal to `b`          |
| `<=`     | Less than or equal to        | `a <= b`    | True if `a` is less than or equal to `b`             |

| Operator | Name                        | Returns true when                     |
|----------|-----------------------------|---------------------------------------|
| `==`     | Equality                    | values are equal                      |
| `!=`     | Inequality                  | values are different                  |
| `>`      | Greater than                | left value > right value              |
| `<`      | Less than                   | left value < right value              |
| `>=`     | Greater than or equal to    | left value ≥ right value              |
| `<=`     | Less than or equal to       | left value ≤ right value              |

