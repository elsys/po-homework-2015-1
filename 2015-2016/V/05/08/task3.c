#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n = 0;
    int Rudolf[200];
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        do
        {
            scanf("%d",&Rudolf[i]);
        }
        while(Rudolf[i] < 1 || Rudolf[i] > 100);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(Rudolf[i] == Rudolf[j])
            {
                Rudolf[i]=0;
                Rudolf[j]=0;
                break;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        if(Rudolf[i] != 0)
    }
}
