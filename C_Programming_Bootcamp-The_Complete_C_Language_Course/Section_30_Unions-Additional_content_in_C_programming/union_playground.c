#include <stdio.h>
#include <stdlib.h>

union Student {
    int ID;
    double average;
};

int main()
{
    union Student student1;
    union Student *ptrStudent2;

    student1.ID = 5;
    printf("student1.ID = %d\n", student1.ID);

    ptrStudent2 = &student1;  // ptrStudent2 points to student1 variable
    ptrStudent2->ID = 10;

    printf("student1.ID = %d\n", student1.ID);

    return 0;
}