#include <stdio.h>

int main()
{
    int i, n=0;
    int el[201];
    scanf("%d",&n);
    for(i=0 ; i < n ; i++)
    {
        do
        {
            scanf("%d",&el[i]);
        }while(el[i]<1 || el[i]>100);
    }

    for(i=0 ; i < n ; i++)
    {
        for(int j=i+1 ; j < n ; j++)
        {
            if(el[i] == el[j])
            {
                el[i]=0;
                el[j]=0;
                break;
            }
        }
    }

    for(i=0 ; i < n ; i++)
    {
        if(el[i] != 0)
        {
            printf("%d",el[i]);
        }
    }
    return 0;
}
