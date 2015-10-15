#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,c,i=0,j=0;
    int m[1000];
    for(i=0;i<1000;i++)
    {
    scanf("%d",&m[i]);
    if(m[i]==42) break;
    }
    n=i;
    for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
        if(m[i]>m[j])
         {c=m[i];
         m[i]=m[j];
         m[j]=c;
         }
    for(i=0;i<n;i++)
    printf("%d\n",m[i]);

    return 0;
}
