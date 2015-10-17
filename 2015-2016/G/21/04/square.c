#include <stdio.h>
int isMagic(int n,int squere[n][n])
{
    int currSum = 0;
    int sum = 0;
    int i = 0;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            currSum+=squere[i][j];
        }
        if(i==0)
        {
           sum = currSum;
        }
        if(currSum != sum)
        {
            return 0;
        }
        currSum = 0;
    }
    currSum = 0;
    for(i=0;i<n;i++)
    {
        currSum += squere[i][i];
    }
    if(currSum!=sum)
    {
        return 0;
    }
    currSum = 0;
    int j;
    for(i=0,j=n-1;i<n;i++,j--)
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
    int n;
    scanf("%d",&n);
    int squere[n][n];
    int i = 0;
    for(i=0;i<n;i++)
    {
        int j = 0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&squere[i][j]);
        }
    }

    if(isMagic(n,squere))
    {
        printf("Magicheki e\n");
    }
    else
    {
        printf("ne e magicheski\n");
    }
}
