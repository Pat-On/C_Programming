#include<stdio.h>

int main()
{
    double ftemp, ctemp;
    printf("Enter degrees in Fahrenheit: ");
    scanf("%lf", &ftemp);
    ctemp = (ftemp - 32) / 1.8;
    printf("Conversion of %.2lf Fahrenheit degrees is %.2lf Celcius Degrees\n", ftemp, ctemp);
    return 0;
}