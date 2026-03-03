#include <stdio.h>
#include <stdlib.h>

// assumption - number provided is bigger or equal 1
int sumUpTo(int num)
{
    if(num==1)
        return 1;
    
    return num + sumUpTo (num-1);
}

int main ()
{
    int num;
    int result;
    
    printf("Insert your number: ");
    scanf("%d", &num);
    
    result = sumUpTo(num);
    
    printf("Result = %d\n", result);
    
    return 0;
}