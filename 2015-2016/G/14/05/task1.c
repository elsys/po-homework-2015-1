
#include <stdio.h>

int main()
{
    int array[4][4];
    int row, coll, n;
    int transArr[4][4];

    for(row = 0; row < 4; row++)
    {
        for(coll = 0; coll < 4; coll++)
        {
            scanf("%d", &n);
            array[row][coll] = n;
        }
    }

    for(row = 0; row < 4; row++)
    {
        for(coll = 0; coll < 4; coll++)
        {
            transArr[coll][row] = array[row][coll];
        }
    }

    for(row = 0; row < 4; row++)
    {
        for(coll = 0; coll < 4; coll++)
        {
            printf("%d c", transArr[row][coll]);
        }
        printf("\n");
    }

    return 0;
}
