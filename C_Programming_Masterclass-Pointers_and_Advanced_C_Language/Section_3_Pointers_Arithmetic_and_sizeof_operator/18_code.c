#include <stdio.h>

int main() {
    // First part: Integer
    int num;
    printf("size of int = %zu\n", sizeof(num)); 
    // This will likely print 4 on most systems

    // Second part: Double
    double grade = 99.8;
    printf("size of double = %zu\n", sizeof(grade));
    // This will likely print 8

    return 0;
}