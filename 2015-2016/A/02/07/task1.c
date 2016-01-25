#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a,b,i,j=0,c,m[7];
    scanf("%d %d",&a,&b);
    c=b;
    for(j=0;c>0;j++)
        c=c/2;
    for(i=j;i>0;i--)
    {
        m[i-1]=b%2;
        b=b/2;
    }

    i=j-a-1;
    printf("%d",m[i]);
    return 0;
}
