#include <stdio.h>

int sumArray(int arr[], int size) //Array styleint arr[]accepts an array
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
        sum = sum + arr[i];
    return sum;
}


int sumArray2(int *ptr, int size) // Pointer styleint *ptraccepts a pointer
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
        sum = sum + ptr[i];
    return sum;
}


int main()
{
    int grades[3] = {3, 5, 7};
    int result;
    result = sumArray(grades, 3);
    printf("Sum = %d\n", result);

    int result2;
    result2 = sumArray2(grades, 3);
    printf("Sum = %d\n", result2);


    int result3;

    // you can not check lenght of array in c
    int sumArray(int arr[], int size);

    // called like this:
    sumArray(grades, 3);

    // or better:
    int size = sizeof(grades) / sizeof(grades[0]);
    result3 = sumArray(grades, size);

    printf("Sum = %d\n", result3);

}