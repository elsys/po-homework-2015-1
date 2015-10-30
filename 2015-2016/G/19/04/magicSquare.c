#include<stdio.h>
int isMagic(int size, int square[size][size]);
int main()
{
    int size, i, j, num;
    scanf("%d", &size);
    int square[size][size];

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &num);
            square[i][j] = num;
        }
    }

    int isMagicS = isMagic(size, square);
    if(isMagicS)
    {
        printf("Magic");
    }
    else
    {
        printf("No Magic");
    }
}

int isMagic(int size, int square[size][size])
{
    int i, j;
    int isMagic = 1;
    int sum, magicSum = 0;

    for(i = 0; i < size; i++)
    {
        sum = 0;
        for(j = 0; j < size; j++)
        {
            sum += square[i][j];
        }

        if(i == 0)
        {
            magicSum = sum;
        }
        else
        {
            if(magicSum != sum)
            {
                return 0;
            }
        }

        sum = 0;
        for(j = 0; j < size; j++)
        {
            sum += square[j][i];
        }

        if(magicSum != sum)
        {
            return 0;
        }
    }

    j = 0;
    sum = 0;
    for(i = 0; i < size; i++, j++)
    {
        sum += square[j][i];
    }

    if(magicSum != sum)
    {
        return 0;
    }

    j = size - 1;
    sum = 0;
    for(i = 0; i < size; i++, j--)
    {
        sum += square[j][i];
    }

    if(magicSum != sum)
    {
        return 0;
    }
    return isMagic;
}

