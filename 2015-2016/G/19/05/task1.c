#include <stdio.h>

int main()
{
    int size = 4;
    int arr[size][size];
    int row = 0;
    int col;
    for(row = 0; row < size; row++)
    {
        for(col = 0; col < size; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }

    int newArr[size][size];

    for(row = 0; row < size; row++)
    {
        for(col = 0; col < size; col++)
        {
           newArr[row][col] = arr[col][row];
        }
    }

    for(row = 0; row < size; row++)
    {
        for(col = 0; col < size; col++)
        {
            printf("%d ", newArr[row][col]);
        }

        printf("\n");
    }

    return 0;
}
