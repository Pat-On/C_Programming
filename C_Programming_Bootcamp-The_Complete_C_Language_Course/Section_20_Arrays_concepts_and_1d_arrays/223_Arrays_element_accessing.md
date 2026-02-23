# Arrays - Element Accessing


## Access modify print

- access

```c

testArray[2];

testArray[2] = 9;

```

```c

#include <stdio.h>

int main()
{
    int grades[5];
    int i;
    int lowest_grade;

    for (i = 0; i < 5; i++)
    {
        printf("Enter grade no.%d: \n", i + 1);
        scanf("%d", &grades[i]);
    }

    // A Must Step: initialize with first element
    lowest_grade = grades[0];

    for (i = 1; i < 5; i++)
    {
        if (grades[i] < lowest_grade)
        {
            lowest_grade = grades[i];
        }
    }

    printf("Your lowest grade is: %d\n", lowest_grade);

    return 0;
}

```


