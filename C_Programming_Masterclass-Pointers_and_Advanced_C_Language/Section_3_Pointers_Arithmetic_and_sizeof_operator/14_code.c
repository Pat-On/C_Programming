#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    int grades[3] = {80, 90, 100};

    printf("\n grades start at: %p \n", grades);

    printf("\n grades: %d \n", *grades);    

    printf("\n & operator %p \n", &grades[1]);

    printf("\n no operator %d \n", grades[1]);


    // Pointers arithmetic
    printf("\n grades start + 1: %p \n", grades+1);


}