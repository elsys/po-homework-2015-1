#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i , j, n=0 , Rudo[200];
    scanf("%d",&n);
    for(i=0 ; i < n ; i++)
    {
        do
        {
            scanf("%d",&Rudo[i]);
        }while(Rudo[i]<1 || Rudo[i]>100);
    }

    for(i=0 ; i < n ; i++)
    {
        for(j=i+1 ; j < n ; j++)
        {
            if(Rudo[i] == Rudo[j])
            {
                Rudo[i]=0;
                Rudo[j]=0;
                break;
            }
        }
    }
}
    for(i=0 ; i < n ; i++)
    {
        if(Rudo[i] != 0)
        {
            printf("%d",i);
        }
    }
