#include <stdio.h>
int isMagic(int squere[3][3])
{
    int currSum = 0;
    int sum = squere[0][0]+squere[0][1]+squere[0][2];
    int i = 0;
    for(i=1;i<3;i++)
    {
        int j;
        for(j=0;j<3;j++)
        {
            currSum+=squere[i][j];
        }
        if(currSum != sum)
        {
            return 0;
        }
        currSum = 0;
    }
    currSum = 0;
    for(i=0;i<3;i++)
    {
        currSum += squere[i][i];
    }
    if(currSum!=sum)
    {
        return 0;
    }
    currSum = 0;
    int j;
    for(i=0,j=2;i<3;i++,j--)
    {
        currSum += squere[i][j];
    }
    if(currSum!=sum)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int squere[3][3];
    int i = 0;
    for(i=0;i<3;i++)
    {
        int j = 0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&squere[i][j]);
        }
    }

    if(isMagic(squere))
    {
        printf("Magicheki e\n");
    }
    else
    {
        printf("ne e magicheski\n");
    }
}
