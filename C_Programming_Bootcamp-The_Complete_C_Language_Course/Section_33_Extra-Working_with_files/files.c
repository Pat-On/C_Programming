#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // IO functions
#include <stdlib.h>


int main()
{
    // Pointer to the file

    // STEP 1
    FILE* fp;       // creating a pointer that points to a FILE type

    // STEP 2 - opening / access to a file
    // fp = fopen(<file_name>, <type_of_operation>);
    // Types:
    // 'w' writing 'r' - reading 'a' - appending
    fp = fopen("myFile.txt", "w"); // "w" - create file or overwrite file if exists

    // if (fp != NULL) - to make sura that the open operation was successful
    if (fp == NULL)
        printf("Failed");
    else 
    {
        printf("Failed is open");
    
        // step 4 - work with a file
        // code for working with the file...

        // step 5 - close the file
        fclose(fp);
    }

    

    return 0;
}