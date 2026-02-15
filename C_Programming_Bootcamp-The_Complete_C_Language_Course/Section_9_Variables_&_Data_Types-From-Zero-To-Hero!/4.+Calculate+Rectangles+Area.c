//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

int main()
{
	double height, width;
	double area;
	printf("Enter height: ");
	scanf("%lf", &height);
	printf("Enter width: ");
	scanf("%lf", &width);
	area = height * width;
	printf("The area of this rectangle = %lf\n", area);
}