//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
	float al, d, an;
	int n;
	printf("Enter the Initial Term (al): ");
	scanf("%f", &al);
	printf("Enter the difference in the Arithmetic Sequence: ");
	scanf("%f", &d);
	printf("Enter the number of elements in the Arithmetic Sequence: ");
	scanf("%d", &n);

	an = al + (n - 1) * d;
	printf("The n-th term of the Arithmetic Sequence = %f\n", an);

	return 0;
}