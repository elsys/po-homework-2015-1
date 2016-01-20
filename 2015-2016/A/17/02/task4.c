#include <stdio.h>

#define MAX 15

int main()
{
    int length[15],i=0,x=0,p=0;

    scanf("%d",&p);
    while(i<MAX)
    {
        length[i]=0;
        i++;
    }
    while(p>0)
    {
        x=p%10;
        length[x]++;
        p=p/10;
    }
    for(i=0;i<MAX;i++)
    {
        if(length[i]!=0)
        {
            printf("\n%d : %d", i,length[i]);
        }


    }
    return 0;
}