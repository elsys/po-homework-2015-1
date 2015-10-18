#include <stdlib.h>

int main()
{
    int c[1000],i,p,l;



    for(i=0;i<999;i++)
    {
        scanf("%d", &c[i]);
        if(c[i]==42) break;
    }



    for(l=i;l!=0;l--)
    {

        for(i=0;i<l-1;i++)
        {
            if(c[i]>c[i+1])
            {
                p=c[i];
                c[i]=c[i+1];
                c[i+1]=p;
            }
        }

    }



    for(i=0;c[i]!=42;i++)
    {
        printf("\n%d\n",c[i]);
    }
}
