//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

int main()
{
    int grade1, grade2, grade3;
    double average;
    printf("Enter gradel ");
    scanf("%d", &grade1);
    printf("Enter grade2 ");
    scanf("%d", &grade2);
    printf("Enter grade3 ");
    scanf("%d", &grade3);
    average = (grade1 + (double)grade2 + grade3) / 3;
    printf("Average = %.2lf \n", average);
}