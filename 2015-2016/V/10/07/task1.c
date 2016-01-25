#include <stdio.h>


void rotr(int *a,int *b,int *c)
{
    int n=*a;
    *a=*c;
    *c=*b;
    *b=n;
}
int main()
{
    int a,b,c,t;
    int i=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&t);
    do{
        rotr(&a,&b,&c);
        i++;
    }while(i<t);

    printf("%d %d %d",a,b,c);
    return 0;
}
