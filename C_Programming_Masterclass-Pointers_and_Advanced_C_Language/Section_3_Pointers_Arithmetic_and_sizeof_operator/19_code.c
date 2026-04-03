#include <stdio.h>

int main() {
    // 1. Integer Variable
    int grade = 80;
    printf("1. size of variable = %zu\n", sizeof(grade)); 
    // Output: 4 (The size of one int)

    // 2. Double Variable
    double grade_d = 79.9; // renamed slightly to avoid conflict
    printf("2. size of variable = %zu\n", sizeof(grade_d));
    // Output: 8 (The size of one double)

    // 3. Size of an Expression (int + int)
    int grade1 = 80, grade2 = 90;
    printf("3. size of variable = %zu\n", sizeof(grade1 + grade2));
    // Output: 4 (The result of (80+90) is still just one 'int')

    // 4. Sum of two Sizeof results
    printf("4. size of variable = %zu\n", sizeof(grade1) + sizeof(grade2));
    // Output: 8 (4 bytes for grade1 + 4 bytes for grade2)

    // 5. Size of a double type (usually 8)
    printf("5. size = %zu\n", sizeof(double));

    // 6. Size of a char type (always 1)
    printf("6. size = %zu\n", sizeof(char));

    // 7. Size of an int type (usually 4)
    printf("7. size = %zu\n", sizeof(int));

    // 8. Size of a float type (usually 4)
    printf("8. size = %zu\n", sizeof(float));

    // 9. Size of a CHARACTER literal 'a'
    // SURPRISE: In C, 'a' is treated as an int!
    printf("9. size = a %zu\n", sizeof('a'));
    printf("9. size = b %zu\n", sizeof('b'));

    // 10. Size of a STRING literal "a"
    // This is 'a' + '\0' (the null terminator)
    printf("10. size = %zu\n", sizeof("a"));

    return 0;
}
