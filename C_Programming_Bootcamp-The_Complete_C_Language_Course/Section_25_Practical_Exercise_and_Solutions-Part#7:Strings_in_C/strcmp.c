#include <stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')   // both strings ended → equal
            return 0;
        i++;
    }
    
    // found difference → return negative/positive
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}

int main()
{
    char str1[] = "AlphaTech";
    char str2[] = "AlphaTech";
    
    // char str2[] = "Balphatech";
    
    int result = my_strcmp(str1, str2);
    
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str2, result);
    
    // Expected: negative value (A < B)
    
    return 0;
}