#include <stdio.h>

void main()
{
    int i,n,num[10]={0};
    scanf("%d",&n);
    while(n>0)
    {
        if(n%10==0)
        {
            num[0]++;
            n=n/10;
        }
        else
        {
        num[n%10]++;
       	n=n/10;
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("\n The number %d is showed %d time/s.",i,num[i]);
    }
}
