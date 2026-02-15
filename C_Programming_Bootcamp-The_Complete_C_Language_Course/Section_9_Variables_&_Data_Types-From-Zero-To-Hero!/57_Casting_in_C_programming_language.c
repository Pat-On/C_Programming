#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=5, num2=2;
    // int result;
    double result; 

    // right side is a thing that we should cast default result - the same particular type
    // so it would go from 2 to 2.0
    result = num1/num2;       
    printf("result = %lf \n", result);

    // ---------------------------------------------------


    // solution - explicit casting 
    // you can modify one of the number to double
    int num3=5;
    double num4=2;
    double result2; 


    result2 = num3/num4;       
    printf("result = %lf \n", result2);


    // ---------------------------------------------------

    // Without changing the type of the values - casting
    int num5=5;
    int num6=2;
    double result3; 

    // num5 and num6 will be only coverted for this line. Original would stay ints
    result3 = num5/(double)num6;       
    printf("result = %lf \n", result3);

}