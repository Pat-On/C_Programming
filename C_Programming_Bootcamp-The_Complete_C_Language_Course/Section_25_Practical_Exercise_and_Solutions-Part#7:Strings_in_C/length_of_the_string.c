#include <stdio.h>      // ← added (needed for printf)

int strlen(char *str);  // one prototype is enough

int main()
{
    char text[] = "Hello world";
    
    int length = strlen(text);
    
    printf("Length = %d\n", length);   // example usage
    
    return 0;
}

int strlen(char *str)
{
    int i = 0;          // ← VERY IMPORTANT: initialize to 0
    
    while (str[i] != '\0')   // ← corrected '\0' (zero, not letter O)
    {
        i++;
    }
    
    return i;           // ← normal return
}