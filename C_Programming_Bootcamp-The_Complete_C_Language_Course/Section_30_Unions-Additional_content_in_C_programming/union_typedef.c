#include <stdio.h>

typedef union {
    int    ID;
    double average;
} Student;

int main()
{
    Student student1;
    Student *ptrStudent1 = &student1;
    Student *ptrStudent2 = NULL;   // just declared, not initialized

    student1.ID = 12345;
    printf("Student ID via direct access: %d\n", student1.ID);

    ptrStudent2 = &student1;
    ptrStudent2->ID = 67890;
    printf("Student ID after pointer modification: %d\n", student1.ID);

    student1.average = 89.75;
    printf("Student average: %.2f\n", student1.average);
    printf("Student ID after average set (corrupted): %d\n", student1.ID);

    return 0;
}