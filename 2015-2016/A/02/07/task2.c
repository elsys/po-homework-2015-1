#include <stdio.h>
#include <stdlib.h>
int main()
{   int n,v,p,i,j,c,m[200];
    scanf("%d %d %d",&n,&v,&p);
    c=n;
    for(j=0;c>0;j++)
        c=c/2;
    c=n;
    for(i=j;i>0;i--)
    {
        m[i-1]=c%2;
        c=c/2;
    }
    m[j-p-1]=v;
    n=0;
    p=1;
    for(i=0;j>0;j--,i++,p=2*p)
        n=n+m[j-1]*p;

    printf("%d",n);

    return 0;
}
