#include <stdio.h>

int main()
{
    int grades[5];
    int i;
    int lowest_grade;

    for (i = 0; i < 5; i++)
    {
        // grades[i] = i;
    }
    for (i = 0; i < 5; i++)
    {
        printf("Element 1 Address = %lu\n", &grades[i]);
    }


    int rows = 5;
    int columns = 5;
    int arr[rows][columns];

	int i2, j; // "i" will be used to iterate over rows, "j" will beused to iterated over columns
	for (i2 = 0; i2 < rows; i2++)
	{
		for (j = 0; j < columns; j++)
		{
			// a[i][j]
			printf("%lu\n", &arr[i2][j]);
		}
		printf("\n");
	}


    return 0;
}