#include <stdio.h>

void rotr(int *a,int *b,int *c);

int main()
{
    int a,b,c;
    int n,counter;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&n);

    for(counter = 0;counter < n;counter++)
    {
    rotr(&a,&b,&c);
    }
    printf("%d %d %d",a,b,c);
    return 0;
}

void rotr(int *a, int *b, int *c)
{

    int helper;
    int s_helper;

        helper = *a;
        s_helper = *b;

        *a = *c;
        *b = helper;
        *c = s_helper;
}
