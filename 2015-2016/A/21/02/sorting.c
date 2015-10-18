#include <stdio.h>

int main()
{
    int num[1000],n=0,i,d,s;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&num[i]);
        n++;
        if(num[i]==42)
        {
            break;
        }
    }
    for(i=0;i<(n-1);i++)
    {
        for(d=0;d<n-i-1;d++)
        {
            if(num[d]>num[d+1])
            {
                s=num[d];
                num[d]=num[d+1];
                num[d+1]=s;
            }
        }
    }
    for(i=0;i<n;i++)
	{
    		printf(" %d ",num[i]);
	}
return 0;
}
