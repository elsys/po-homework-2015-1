#include <stdio.h>
#include <stdlib.h>

void rotr(int *a,int *b,int *c)
{
    int help1, help2;
    help1 = *b;
    *b = *a;
    help2 = *c;
    *c=help1;
    *a=help2;
}
int main()
{
    int i,n,a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        rotr(&a,&b,&c);
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
