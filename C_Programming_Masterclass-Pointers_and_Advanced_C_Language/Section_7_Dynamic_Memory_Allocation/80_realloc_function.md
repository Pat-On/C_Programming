# `realloc` function


## we have learned so far
- malloc
- calloc
- free

## An Example

![alt text](image-6.png)

```c
int *gradesArray;
int i, totalGrades;
scanf("%d", &totalGrades);
gradesArray = (int*)malloc(sizeof(int) * totalGrades);
if(gradesArray != NULL)
    printf("Allocation Succeded!\n");
else
{
    printf("Allocation Failed.\n");
    exit(1);
}
for (i=0; i<totalGrades; i++)
{
    printf("Enter Grade %d: ", i+1);
    scanf("%d", &gradesArray[i]);
}

```