#include <stdio.h>

struct point_struct {
    int x;
    int y;
};

union point_union {
    int x;
    int y;
};

int main()
{
    struct point_struct point1;
    union  point_union  point2;

    // Struct: both fields can be set independently
    point1.x = 5;
    point1.y = 7;

    printf("Struct Point = (%d, %d)\n", point1.x, point1.y);

    // Union: writing to one member overwrites the other
    point2.x = 3;
    // point2.y = 10;   ← if you uncomment this, point2.x will be corrupted

    printf("Union Point (after setting x)   = x:%d  y:%d\n", point2.x, point2.y);

    point2.y = 42;
    printf("Union Point (after setting y)   = x:%d  y:%d\n", point2.x, point2.y);

    return 0;
}