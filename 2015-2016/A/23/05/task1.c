#include <stdio.h>
#include <stdlib.h>
void rotr(int *a,int *b,int *c)
{
    int num;
     num = *c;
    *c = *b;
    *b = *a;
    *a = num;
}
int main()
{
    int a,b,c,n;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    while (n>0)
    {
        n--;
        rotr(&a,&b,&c);
    }
    printf("%d ",a);
    printf("%d ",b);
    printf("%d\n",c);
    return 0;
}
