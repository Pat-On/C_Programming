//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    float a1, an, Sn;
    int n;
    printf("Enter the Initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the n-th Term (an): ");
    scanf("%f", &an);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    
    Sn = (a1 + an) * n / 2;
    printf("The sum of your sequence = %.2f\n", Sn);
    return 0;
}