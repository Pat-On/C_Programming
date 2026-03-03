#include <stdio.h>
#include <stdlib.h>

// Recursive version of Pell number
int pellNumberRecursive(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    return 2 * pellNumberRecursive(n-1) + pellNumberRecursive(n-2);
}

// Iterative (non-recursive) version of Pell number
int pellNumberNonRecursive(int n)
{
    int i;
    int previous = 0, current = 1;
    int next;
    
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    for (i = 2; i <= n; i++)
    {
        next = 2 * current + previous;
        previous = current;
        current = next;
    }
    
    return current;
}

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the recursive version (like in Lucas example)
    printf("Pell Value at Index %d = %d (recursive)\n", 
           num, pellNumberRecursive(num));
    
    // Optional: also show iterative result
    printf("Pell Value at Index %d = %d (iterative)\n", 
           num, pellNumberNonRecursive(num));
    
    return 0;
}